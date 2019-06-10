#include <iostream>
#include <Eigen/Dense>
#include <stdlib.h>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;
using namespace Eigen;

int main(int argc, char *argv[]) {
    ifstream myfile1("Cam_select.txt");
    ifstream myfile2("Moc_select.txt");
    ofstream outfile("out_select.txt",ios::trunc);
    
    if ((!myfile1.is_open())||(!myfile2.is_open()))
    {   
	   cout<<"can not open file"<<endl;
	   return 0;
    }
    
    int ncam=0; int nmoc=0;
    string temp;
    while(getline(myfile1,temp))
    {
	  ncam++;
    }
    while(getline(myfile2,temp))
    {
	  nmoc++;
    }
    cout<<"Cam的行数是:"<<ncam<<endl;
    cout<<"Moc的行数是:"<<nmoc<<endl;
    double Cam[ncam][8];
    double Moc[nmoc][8];
    myfile1.close();
    myfile2.close();
    
    myfile1.open("Cam_select.txt");
    myfile2.open("Moc_select.txt");    
    for (int i=0;i<ncam;i++)
    {
	   for(int j=0;j<8;j++)
	   {
		   myfile1>>Cam[i][j];
	               	   
           }
    }
    
    for (int i=0;i<nmoc;i++)
    {   
           for(int j=0;j<8;j++)
           {
                   myfile2>>Moc[i][j];
           }
    }   
    
    int number=0;
   // Matrix3d rotAnew;
   // Matrix3d rotAold;
   // Matrix3d rotBnew;
   // Matrix3d rotBold;
   // Matrix3d rotAtf;
   // Matrix3d rotBtf;
   // Vector3d v1old;
   // Vector3d v2old;
   // Vector3d v1tf;
   // Vector3d v2tf;
    Isometry3d TfAold;
    Isometry3d TfBold;
    Isometry3d TfA;
    Isometry3d TfB;
    Matrix3d M;
    outfile<<"%YAML:1.0\nframeCount: 20\n";
    for (int i=0;i<ncam;i=i+1)
    {       /*int k=-1;
	    float timediff=1000;
	    float mintimediff=1000;
	     
	    for (int j=0;j<b1;j++)
	    { 
                 timediff=fabs((A[i][0]-B[j][0])/10000000);
		 if(timediff<mintimediff)  
		 {
	             mintimediff=timediff;
		     k=j;
		   
		   }
	         		 
            }
            cout<<i<<"-> "<<k<<endl;*/
	    Quaterniond qcam(Cam[i][7],Cam[i][4],Cam[i][5],Cam[i][6]);
	    Quaterniond qmoc(Moc[i][7],Moc[i][4],Moc[i][5],Moc[i][6]);
            // rotAnew=q1.matrix();
	    //cout<<q1.matrix()<<endl;
	    //cout<<q2.matrix()<<endl;
	    //rotBnew=q2.matrix();
            Vector3d vcam(Cam[i][1],Cam[i][2],Cam[i][3]);
            Vector3d vmoc(Moc[i][1],Moc[i][2],Moc[i][3]);

	    
	    //rotAtf=rotAnew.inverse()*rotAold;
	    //rotBtf=rotBnew*rotBold.inverse();
	    
	    //M=qcam.matrix();
	    //qcam=M.inverse();
	    Isometry3d TfAnew(qmoc);
	    Isometry3d TfBnew(qcam);
	    TfAnew.pretranslate(vmoc);
	    TfBnew.pretranslate(vcam);
	    if (i==0)
            {
               TfAold=TfAnew;
               TfBold=TfBnew;
            }
	   // cout<<Tfnew1.matrix()<<endl;
	   //right Tf1=Tfnew1*Tfold1.inverse();
	   // Tf2=Tfnew2*Tfold2.inverse();
	    TfA=TfAnew.inverse()*TfAold;
            TfB=TfBnew*TfBold.inverse();

	     
	    if(i!=0)
	    {
	    outfile<<"T1_"<<number-1<<": !!opencv-matrix\n   rows: 4\n   cols: 4\n   dt: d\n   ";
	    outfile<<"data: [";
	    
	    for (int m=0;m<4;m++)
	    {
		    for(int n=0;n<4;n++)
		    {       if(m!=3)
			    {
			         outfile<<TfA(m,n)<<", ";
			    }
			    if((m==3)&&(n!=3))
			    {
                                 outfile<<TfA(m,n)<<"., ";
			    }
			    if((m==3)&&(n==3))
			    {
				outfile<<TfA(m,n)<<".]";
			    }
			        
		    }
		    if(m!=3)
                   {outfile<<"\n          ";}
                   else{outfile<<"\n";}

	    }
	    

	     outfile<<"T2_"<<number-1<<": !!opencv-matrix\n   rows: 4\n   cols: 4\n   dt: d\n   ";
	     outfile<<"data: [";
            for (int m=0;m<4;m++)
            {
                    for(int n=0;n<4;n++)
                    {       if(m!=3)
                            {   
                                 outfile<<TfB(m,n)<<", ";
                            }
                            if((m==3)&&(n!=3))
                            {
                                 outfile<<TfB(m,n)<<"., ";
                            }   
                            if((m==3)&&(n==3))
                            {
                                outfile<<TfB(m,n)<<".]";
                            }   
                                
                    }
                   if(m!=3) 
		   {outfile<<"\n          ";}
		   else{outfile<<"\n";}
            }
	    }

            number++;
	    //v1old=v1;
	    //v2old=v2;
	    TfAold=TfAnew;
	    TfBold=TfBnew;
	    
	     
    }



   // ofstream myfile3("transform.txt",ios::trunc);

    


}

#include <iostream>
#include <Eigen/Dense>
#include <stdlib.h>

using namespace std;
using namespace Eigen;

int main(int argc, char *argv[]) {
    /*Matrix3d M1;
    M1(0,0)=0.63848;
    M1(0,1)=0.76753;
    M1(0,2)=0.056842;
    M1(1,0)=0.00850;
    M1(1,1)=0.06682;
    M1(1,2)=-0.9977;
    M1(2,0)=-0.7696;
    M1(2,1)=0.6375;
    M1(2,2)=0.036136;
    cout<<M1.matrix();
    /Quaterniond q1(1,2,3.3,4.4);
    //Quaterniond q2(1,2,3,4);
    Vector3d v1(1,2,3);
    Vector3d v2(1.1,2.2,3.3);
    Isometry3d Tf1(q1);
    Isometry3d Tf2(q2);
    Tf1.pretranslate(v1);
    Tf2.pretranslate(v2);
    //AngleAxisd q2;
    //q1=q2;
    //cout<<q1.x();
    cout<<"EE:"<<endl;
    cout << Tf2.matrix() << endl;
    cout<< "Cam:"<<endl;
    cout << Tf1.matrix() << endl;
    Quaterniond q1;
    q1=M1;
    cout<<q1.coeffs();*/
    
    /*Quaterniond qcam1( -0.03319,-0.040901,-0.70132, 0.710892);
    Quaterniond qmoc1(-1, 0.0002, -0.000008, -0.0001);
    Vector3d vcam1(0.11975,0.09386, 1.34108);
    Vector3d vmoc1(-1.53504, 1.27892,-0.59731);
    
    Quaterniond qcam2(0.08746,0.075181,-0.6999, 0.704851);
    Quaterniond qmoc2(-0.98935, -0.00036, -0.14548,-0.0008);
    Vector3d vcam2(0.5419,0.0941, 1.2703);
    Vector3d vmoc2(-1.5518,1.2791,-0.6286);*/
    /*Matrix3d A1;
    Matrix3d A2;
    Matrix3d A;*/



    /*Quaterniond qa(-1, 8.48651689012e-06,-3.80676965506e-06,-2.67159339273e-05);
    Quaterniond qb(-0.023114261601,-0.0070414883864,0.709361691281,-0.704430365114);
    Vector3d va(0.0600826814771,-0.000151258878759,0.0765707194805);
    Vector3d vb(0.260342538357,0.0449627526104,0.714663088322);
    Quaterniond qw(-0.710500240326,0.701336681843,0.0391669236124,0.04221636056);   
    Vector3d vw(-0.179373323917,-0.340349197388,0.940875947475);
    AngleAxisd rotation_vector(3.1415,Vector3d(1,0,0));
    Quaterniond qrot(rotation_vector);
    Vector3d vzero(0,0,0);*/
    
    /*Quaterniond qa(-1, 8.48651689012e-06,-3.80676965506e-06,-2.67159339273e-05);
    Quaterniond qb(-0.00735757424284,0.00824185198796,-0.689759887995,0.72395389003);
    Vector3d va(0.0600826814771,-0.000151258878759,0.0765707194805);
    Vector3d vb(-0.162996396422,0.0460266508162,0.582303597927);
    Quaterniond qw1(-0.706313610077,0.707666456699,-0.00612175092101,-0.0170843396336);   
    Vector3d vw1(0.25556820631,-0.3294249475,0.752558529377);
    Quaterniond qw2(-0.706313610077,0.707666456699,-0.00612175092101,-0.0170843396336);
    Vector3d vw2(0.25556820631,-0.3294249475,0.752558529377);
    AngleAxisd rotation_vector(3.1415,Vector3d(1,0,0));
    Quaterniond qrot(rotation_vector);
    Vector3d vzero(0,0,0);*/	


    /*Quaterniond qa(-1, 8.48651689012e-06,-3.80676965506e-06,-2.67159339273e-05);
    Quaterniond qb(0.00192564471717,0.0233502627303,-0.698225012495,0.71549485606);
    Vector3d va(0.0393672287464,-3.04317154587e-06,0.0617037191987);
    Vector3d vb(0.149087950587,0.0476794852614,0.606877849102);
    Quaterniond qw1(-0.99973231554,0.00368961133063,0.000872627540957,0.0228244699538);
    Vector3d vw1(0.0961927175522,-0.00851273722947,0.0670647993684);
    Quaterniond qw2(-0.157116219401,0.146087884903,-0.701389610767,-0.679724633694);
    Vector3d vw2(0.393679350615,-0.339178830385,-0.588520109653);
    AngleAxisd rotation_vector(3.1415,Vector3d(1,0,0));
    Quaterniond qrot(rotation_vector);
    Vector3d vzero(0,0,0);*/


    Quaterniond qa(0.999972522259,-0.00101595278829,0.00681430893019,0.0027741196099);
    Quaterniond qb(-0.00483838015491,0.0175691089369,-0.697674414853,0.71618316606);
    Vector3d va(0.0381672307849,-2.8203079637e-05,0.0600775033236);
    Vector3d vb(0.230928972363,0.0507399775088,0.742553100586);
    Quaterniond qw1(-0.999799251556,-0.00613099476323,-0.00252578989603,0.0189067013562);
    Vector3d vw1(0.0939793139696,-0.00857038423419,0.0659603998065);
    Quaterniond qw2(0.13684746623,-0.121855355799,0.704477310181,0.685664594173);
    Vector3d vw2(0.517968475819,-0.343988239765,-0.687773525715);
    AngleAxisd rotation_vector(3.1415,Vector3d(1,0,0));
    Quaterniond qrot(rotation_vector);
    Vector3d vzero(0,0,0);



    //AngleAxisd rr1(3.49,Vector3d(0,-0.707,0.707));
    //AngleAxisd rr2(2.79,Vector3d(0,0.707,-0.707));
    //Matrix3d RR1(rr1);
   // Matrix3d RR2(rr2);
   // cout<<RR1.matrix()<<endl;
   // cout<RR2.matrix()<<endl;
   /* Quaterniond qrr1(rr1);
    Quaterniond qrr2(rr2);
    cout<<qrr1.coeffs()<<endl;
    cout<<qrr2.coeffs()<<endl;
    cout<<qrr1.matrix()<<endl;
    cout<<qrr2.matrix()<<endl;
   // cout<<rotation_vector.matrix()<<endl;
    AngleAxisd rot1(3.1415,Vector3d(0,1,0));
    AngleAxisd rot2(-1.5708,Vector3d(1,0,0));
    Matrix3d rot;
    Quaterniond qrot1(rot1);
    Quaterniond qrot2(rot2);
    Matrix3d Rot1(qrot1);
    Matrix3d Rot2(qrot2);
    //rrot1=rot1.toRotationMatrix();
    //rrot2=rot2.toRotationMatrix();
    rot=Rot1*Rot2;
    //cout<<rot.matrix()<<endl;
    Quaterniond qrot(rot);
    //Quaterniond qrot(rotation_vector);
    //cout<<qrot.matrix()<<endl;
    
    
    Matrix3d A1;
    Matrix3d A2;
    Matrix3d A; 
    A1=qcam1.matrix();
    A2=qcam2.matrix();
    A=A2.inverse()*A1;
    //cout<<A.matrix()<<endl;*/
    Isometry3d A(qa);
    Isometry3d B(qb);
    Isometry3d W1(qw1);
    Isometry3d W2(qw2);
    Isometry3d R(qrot);
    A.pretranslate(va);
    B.pretranslate(vb);
    W1.pretranslate(vw1);
    W2.pretranslate(vw2);
    R.pretranslate(vzero);
    
    
    //cout<<A.matrix()<<endl;
    //cout<<B.matrix()<<endl;
    //cout<<W.matrix()<<endl;
    //cout<<R.matrix()<<endl;
    //cout<<Tf1.matrix()<<endl;
    //cout<<Tf2.matrix()<<endl;
    //W=W.inverse();
    //B=B*R;
    A=A.inverse();
    B=B.inverse();
    R=R.inverse();
    Isometry3d X;
cout<<"X="<<A.matrix()<<endl<<"*"<<endl<<"*"<<endl<<W1.matrix()<<endl<<"*"<<W2.matrix()<<endl<<"*"<<endl<<B.matrix()<<endl<<"="<<endl;
    X=A*W1*W2*B;
    cout<<X.matrix()<<endl;

    /*AngleAxisd rot(,Vector3d(0,1,0));
    Matrix3d R;
    R=rot.matrix();
    cout<<R.matrix();*/

    /*AngleAxisd rotation_vector(1.5707963,Vector3d(1,0,0));
    Quaterniond qq(rotation_vector);
    cout<<qq.coeffs()<<endl;
    Quaterniond qqq(0.707107,0,0,0.707107);
    AngleAxisd rott(qqq);
    cout<<rott.matrix()<<endl;
    Quaterniond qqqq(0.707107,0.707107,0,0);
    AngleAxisd rottt(qqqq);
    cout<<rottt.matrix()<<endl;*/

    
    /*rotation_matrix=rotation_vector;
    cout<<rotation_matrix.matrix();*/

    //jianyan A2 A1-1   B2-1 B1




}

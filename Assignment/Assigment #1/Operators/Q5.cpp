#include<iostream>
#include <math.h>
using namespace std;


int main(){
    
    //pi is fixed
    float PI=3.14;
    //Returns the absolute value of x
    int x = -344;
    cout<<"Returns the absolute value of x  : " <<abs(x)<<endl;
    

    
    double result_acos,result_asin ,result_atan,result_cbrt,result_cos,result_cosh,result_exp,result_fabs,result_expm1 , result_hypot ;
    double  a,b,c,number, result_fma,result_fmax,result_fmin , result_fmod , result_pow , result_sin , result_sinh ,result_tan ,result_tanh;
    number = 40.0;
    
    
    //Returns the arccosine of x 
    result_acos=acos(number) *180.0/PI;
    cout<<"Returns the arccosine of x : " <<result_acos<<" Degrees"<<endl;

    //Returns the arcsine of x
    result_asin=asin(number) *180.0/PI;
    cout<<"Returns the asin of x : " <<result_asin<<" Degrees"<<endl;



    //Returns the arctangent of x
    result_atan=atan(number) * 180.0/PI;
    cout<<"Returns the atan of x : " <<result_atan<<endl;


    //Returns the cube root of x
    double number_cubi=27.0;
    result_cbrt=cbrt(number_cubi);
    cout<<"Returns the cbrt of x : " <<result_cbrt<<endl;


    //Returns the value of x rounded up to its nearest integer
    float num1=2.3;
    cout<<"Returns the value of " << num1 << " rounded up to its nearest integer  = " <<ceil(num1)<<endl;


    //Returns the cosine of x
    float num2=2.0;
    result_cos=cos(num2 *PI / 180.0);
    cout<<"Returns the cosine of "<<num2<<" Degrees "<<result_cos<<endl;



    //Returns the hyperbolic cosine of x
    float num3=log(5.0);
    result_cosh=cosh(num3);
    cout<<"the hyperbolic cosine of "<<num3 << " is "<<result_cosh<<endl;



    //Returns the value of Ex 
    result_exp=exp(num2);
    cout<<"the value of Ex : " <<result_exp<<endl;



    //Returns the absolute value of a floating x
    result_fabs=fabs(num2);
    cout<<"Returns the absolute value of a floating x : "<<result_fabs<<endl;


    //Returns e -1
    result_expm1=expm1(num2);
    cout<<"Returns e power x   "<< num2 << " is  " << result_expm1<<endl;


    //Returns the positive difference between x and y
    float x1=3.0 , y1 = 4.0;
    cout<<"Returns the positive difference between x and y : "<<fdim(x1 ,y1 )<<endl;


    //Returns the value of x rounded down to its nearest integer
    cout<<"Returns the value of x rounded down to its nearest integer : "<<floor(x1)<<endl;


    //Returns sqrt(x +y ) without intermediate overflow or underflow
    result_hypot=hypot(x1, y1);
    cout<<"/Returns sqrt(x1 + y1 ) without intermediate overflow or underflow : "<<result_hypot<<endl;


    //Returns a*b+c without losing precision
    a=-17.0;
    b=2.0;
    c=5.0;
    result_fma=fma(a,b,c);
    cout<<"a*b+c without losing precision : "<<result_fma<<endl;    



    //Returns the highest value of a floating x and y
    result_fmax =fmax(a , b);
    cout<<"Returns the highest value of a floating x and y : "<< result_fmax<<endl;



    //Returns the lowest value of a floating x and y
    result_fmin =fmin(a , b);
    cout<<"Returns the lowest value of a floating x and y: "<< result_fmin<<endl;



    //Returns the floating point remainder of x/y
    float a1 =17.2 , b2 =2.0;
    result_fmod = fmod(a1 ,b2);
    cout<<"Returns the floating point remainder of x/y " << a1 << " / "<< b2 <<" = " << result_fmod<<endl;



    //Returns the value of x to the power of y
    result_pow = pow(a1 ,2);
    cout <<"Returns the value of x to the power of y : " <<result_pow<<endl;



    //Returns the sine of x (x is in radians)
    result_sin=sin(number *PI /180.0);
    cout<<"Returns the sin of  : " <<number <<" Degrees " << result_sin<<endl;



    //Returns the hyperbolic sine of a double value
    number = log(2.0);
    result_sinh=sinh(number);
    cout<<" Returns the hyperbolic sine of a double value : "<<result_sinh<<endl;



    //Returns the tangent of an angle
    result_tan=tan(number *PI /180.0);
    cout<<" Returns the tangent of an angle :  "<<number <<"is" <<result_tan<<endl;



    //Returns the hyperbolic tangent of a double value
    number = log(3.0);
    result_tanh =tanh(number);
    cout<<" Returns the hyperbolic tangent of a double value : "<<result_tanh <<endl;
 


    return 0;
}



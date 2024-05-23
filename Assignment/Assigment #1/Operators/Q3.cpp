#include<iostream>
#include<math.h>

using namespace std;

int main(){

    //float date types
    float centigrade ,Fahrenheit , convert;

    //Enter the centigrade 
    cout<<"Enter the cetigarde ";
    cin>>centigrade;
    //1 centigrade is equal to = 33.8°F
    Fahrenheit =33.8;

    //Formla of centigrade convert to Fahrenheit 
    convert = (centigrade * 9/5 )+ 32;
    //print the result 
    cout<<"The convert is = "<< convert <<"°F"<<endl;
    return 0;
}


//(1°C × 9/5) + 32 = 33.8°F
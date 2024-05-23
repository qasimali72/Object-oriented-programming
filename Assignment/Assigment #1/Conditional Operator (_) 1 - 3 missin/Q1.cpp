#include<iostream>
#include<math.h>

using namespace std;

int main(){
    //user enter the number  in float
    float num1 ,num2 ;
    cout<<"Enter the num1  : ";
    cin>>num1;
    cout<<"Enter the num2  :  ";
    cin>>num2;

    //The Conditional Operator (?:) 
    //cout the large number is
    (num1 > num2 )? cout<<num1 << " : The first   number is  greater   \n":cout<<num2<< 
    "  : Second number  is greater than ";

    return 0;
}

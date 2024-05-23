#include<iostream>
#include<math.h>
using namespace std;

int main(){

    //user enter a number  num1 and num2
    float num1 , num2;
    cout<<"Enter the number1 :  ";
    cin>>num1;
    cout<<"Enter the number2 : ";
    cin>>num2;
//if condition cheak which number is great than number 2 
if (num1 >=num2 )
{
    cout<<"The number1 is great than number2 : "<<num1<<endl;
}
//else print less number  
else{
    cout<<"The number2 is great  than number1 : "<<num2<<endl;
}
    return 0;
}
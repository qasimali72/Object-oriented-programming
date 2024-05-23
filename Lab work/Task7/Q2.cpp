#include <iostream>
using namespace std;

int main(){

    //using enter the number 
    int a;
    int b;


    cout<<"Enter the first  number :  ";
    cin>>a;
    cout<<"Enter the second number :  ";
    cin>>b;


    int  *ptrA =&a;
    int  *ptrB =&b;
    
    //print a number address
    cout<<"The  value is "<< *ptrA <<" the sored in address "<< ptrA<<endl;
    cout<<"The value is "<< *ptrB <<"  the sored in address "<< ptrB<<endl;

    return 0;
}
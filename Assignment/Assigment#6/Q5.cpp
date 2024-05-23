#include<iostream>
using namespace std;

int main()
{


    //varible a decale of 
    //user enter a number 
    int a;
    cout<<"Enter the number of first = ";
    cin>>a;

    //porinte decale
    int *p;
    *p=a;
    //print a value of a 
    cout<<"The value of a is = "<<*p<<endl;

    //print a address of a in members
    cout<<"The address  of a is = "<<&p<<endl;




    return 0;
}
#include<iostream>
using namespace std;

int main()
{
    //varible decale 
    int a , b;
    cout <<"Enter the value of a = ";
    //User intput a data 
    cin>>a;

    //user input a data 
    cout<<"Enter the vale of b = ";
    cin>>b;


    
    //its porint  *ptrA = a and equal b 
    int *ptrA = &a;
    int *ptrB = &b;

    //print a value using a porint and address of value in address
    cout << "The Value of ptrA is " << *ptrA << " and sored in address "<< ptrA<<"\r\n";
	cout << "The Value of ptrB is " << *ptrB <<" and sored in address "<< ptrB<<"\r\n";





    return 0;
}
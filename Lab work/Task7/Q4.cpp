#include <iostream>
using namespace std;

int main(){
    int a ,b;

    //user enter the number 
    cout<<"Enter the char : ";
    cin>>a;

    //user enter the number 
    cout<<"Enter second char : ";
    cin>>b;

    //using pointer 
    int *p=&a;
    int *x=&b;
  
    //print a  and b  address
    cout<<" The a value is "<< *p <<" the address is  "<< p<<endl;
    cout<<" The b value is "<< *x <<" the address is  "<< x<<endl;
    
    return 0;
}
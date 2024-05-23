#include<iostream>
using namespace std;

int main(){
    //sting varbile 
    string firststr,secondstr,*firstp,*secondp;
    //combine a two string 
    firstp =&firststr;
    secondp =&secondstr;
    //using enter 
    cout<<"Enter the first str : ";
    cin>>firststr;

    cout<<"Enter the second str : ";
    cin>>secondstr;
    //first + second add 
    cout<<"Comcationantion of string = "<<*firstp+*secondp<<endl;
return 0;
}
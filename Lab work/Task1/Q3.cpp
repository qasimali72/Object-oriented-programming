#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    //intger a two number 
    int num1 ,  num2;

    //cin a number first in user :- 
    cout<<"Enter the number one = ";
    cin >>num1;

    //user a enter a second number :- 
    cout<<"Enter the number two = ";
    cin>>num2;


    //Before the swap in number 
    cout<<"Before the swap a number is    : "  <<endl;
    cout<<"Num1 =  "<<num1<<endl;
    cout<<"Num2 =  "<<num2<<endl;



    //know 
    if (num2 != 0){
        num1=num1*num2;  //num1 and num2 is mulp and storge in number num1
        
        num2=num1/num2; //num1 and num2 is divided and storge in number num2

        num1=num1/num2;  //num1 and num2 is divided and storge in number num1
    }
    else{
        num1=num1+num2; //num1= add //num1+num2   
        num2=num1-num2; //num2= add  //num1-num2    
        num1=num1-num2; //num1= add  //num1-num1 
    }
    //Know the show the output after the swaping in num1 and num2
    cout<<"after the swaping a number is  :-       "<<endl;
    cout<<"Num1 is =  "<<num1<<endl;
    cout<<"Num2 is =  "<<num2<<endl;


    return 0;
}

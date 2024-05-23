#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    //enter the two number1 and number2
    int number1,number2, Addition , Subtraction, Division, Multiplication,Remainder ;
    
     // cin a a number1 in user
    cout<<"Enter the number1 = ";
    cin>>number1;

    //cin in a number2 in user 
    cout<<"Enter the number2 = ";
    cin>>number2;
    

    //function and storge in verible
    //addition function 
    Addition        =   number1 + number2;
    
    //subtraction function - 
    Subtraction     =   number1 - number2;

    //Division function  /     
    Division        =   number1 / number2;

    //Multiplication a two number * 
    Multiplication  =   number1 * number2;

    //remainder a number % 
    Remainder       =   number1% number2; 


 

   


    //output of the function is :-----
    cout<<"The addition of two number is = "        <<Addition          <<endl  ;
    cout<<"The Subtraction of two number is = "     <<Subtraction       <<endl  ;
    cout<<"The Division of two number is = "        << Division         <<endl  ;
    cout<<"The Multiplication of two number is = "  <<Multiplication    <<endl  ;
    cout<<"The Remainder of two number is = "       <<Remainder         <<endl  ;  








    return 0;
}
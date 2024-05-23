#include<iostream>
using namespace std;

int main ()
{
   int num1, num2 , addition,subtraction,multiplies, Remainder;
    char ch;
do
{
 
    //User Enter the number

 cout <<"Enter the 1st number = ";
 cin>>num1;

    //User Enter the number
 cout <<"Enter the 1st number = ";
 cin>>num2;


//addition a two number 
 addition= num1 + num2;
 cout<<"The sum of two number is  = "<<addition<<endl;

//subtraction a two number 
 subtraction = num1 - num2;
 cout<<"The sum of two number is  = "<<subtraction<<endl;

//multiplies a two number 
 multiplies= num1 * num2;
 cout<<"The sum of two number is  = "<<multiplies<<endl;
 
 //Remainder a two number 
 Remainder= num1 % num2;
 cout<<"The sum of two number is  = "<<Remainder<<endl;


cout<<"Do you want angin (y/n)";
cin>>ch;
} while (ch!='n' ||ch =='N' );

    return 0;
}
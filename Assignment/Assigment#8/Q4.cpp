#include<iostream>
using namespace std;

int main ()
{

    //veribale
    string firstName, lastName,fullName;
 
 //using a do while for recall a function
    char ch;
do
{
   
    //using enter the number 
    cout<<"Enter the first name = ";
    cin>>firstName;

    cout<<"Enter the second name = ";
    cin>>lastName;

    //print a fullname
   fullName=firstName .append(lastName);
   cout<<"The fullname is = "<<fullName<<endl;


    //address a change a _
    fullName[4]='_';
    fullName[10]= '_';
    cout<<"The name is update is : "<<fullName<<endl;

//while loop
cout<<"Do you want angin (y/n)";
cin>>ch;
} while (ch!='n' ||ch =='N' );


    return 0;
}
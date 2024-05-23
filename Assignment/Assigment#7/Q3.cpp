#include<iostream>
using namespace std;

int main()
{
    //user enter the number of patter we want
    int pattern;
    char agina;
    do
    {
  

    cout<<"User enter a size of pattern : ";
    //enter a number only
    cin>>pattern;

//print a number two sub -1 
for(int i= pattern ;i>=1; --i)
{

    //loop for print a hole patter
    for (int j = 1; j <= i; ++j)
    {
        //print this "*" singe
        cout<<"*";
    }
    //for next line 
    cout<<endl;
}

//if user want agina addaing operator its user easy
cout<<"Do you want  agina  (y/n) = ";
cin>>agina;
//using a while loop
} while (agina != 'n' && agina !='N');
    

    return 0;
}
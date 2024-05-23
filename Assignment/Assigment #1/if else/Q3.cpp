#include <iostream>
#include <math.h>
using namespace std;
int main(){
    //User enter the number 
    int year;
    cout<<"Enter the year they are cheak it leap year or not : ";
    cin>>year;
    char choise;
do {
    //if condition cheak a year they are leap or not
    if ((year%4==0) && (year%100 != 0))
    {
        cout<<" Its a leap year :  " <<year<<endl ;
    }
    //else if condition cheak a year 
    else if (year % 400 == 0)
    {
        cout<<" Its a leap year : " <<year <<endl;
    }
    //else condition cheak a year
    else {
        cout <<"ITS not a leap year :  "<<year<<endl;
    }
    //while loop function 
    cout<<"Do you want agina cheak a year  (y/n) "<<endl;
    cin>>choise;
    //cheak condition
} while (choise != 'n' && choise !='N');
    return 0; }

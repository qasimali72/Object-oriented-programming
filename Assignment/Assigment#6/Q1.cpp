#include<iostream>
#include <limits>
using namespace std;

//function on call a function 
int total_second;
//the struct of a function creata and print a value
struct Time
{
    //decalere 
    int hours;
    int minutes;
    int seconds;
};

//int function call culat_sum and call the value id time a 
int culat_sum(Time a);

//main function call 
int main()
{

    //a time is s member 
    Time s;
    

    //user enter a number 
    cout<<"Enter the hours = ";
    cin>>s.hours;   
    cout<<"Enter the minutes = ";
    cin>>s.minutes;
    cout<<"Enter the seconds = ";
    cin>>s.seconds;

    //call a function and print a value 
    culat_sum(s);
    //simple other 
//     cout<<"Convert into second in all time = ";
//    // cout<<(s.hours * 3600) +( s.minutes *60) + (s.seconds)  <<endl;

 return 0;
}

//function call of culat_sum(Time a )
int culat_sum(Time a ){
        //decalr other name of varible
        int h=a.hours;
        int m=a.minutes;
        int se=a.seconds;
    

            //convert a time of all h , m  and s 
            //second from
         cout<<"Convert into second in all time = ";
         //and stroge the ans is total_second 
         total_second=h * 3600 + m * 60+ se;
         //print a ans
         cout<<total_second;
         
        
    }


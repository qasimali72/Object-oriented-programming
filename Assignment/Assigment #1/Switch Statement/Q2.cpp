#include <iostream>
#include <strings.h>

using namespace std;

int main(){

    //user enter the name 
   int month_name;
    cout <<"Enter the mouth (1-12) : ";
    cin>>month_name;

    //switch a program of case 
    switch (month_name)
        {
        case 1:
             cout<<"The mounth number is :  "<<"January "<<endl;
            break;
        case 2:
             cout<<"The month number is  :  "<<" February "<<endl;
            break;
        case 3:
             cout<<"The month number is :  "<<" March "<<endl;
            break;
        case 4:
             cout<<"The month number is :  "<<" April "<<endl;
            break;
        case 5:
             cout<<"The month number is :  "<<" May "<<endl;
            break;
        case 6:
             cout<<"The month number is :  "<<" June "<<endl;
            break;
        case 7:
             cout<<"The month number is :  "<<" July "<<endl;
            break;
        case 8:
             cout<<"The month number is :  "<<" August "<<endl;
            break;
        case 9:
             cout<<"The month number is :  "<<" September "<<endl;
            break;
        case 10:
             cout<<"The month number is :  "<<" October "<<endl;
            break;
        case 11:
             cout<<"The month number is :  "<<" November "<<endl;
            break;
        case 12:
             cout<<"The month number is :  "<<" December "<<endl;
            break;
        
        default:
            cout<<"You did a wrrog name enter in : "<<month_name<<endl;
            break;
    } 

    return 0;
}

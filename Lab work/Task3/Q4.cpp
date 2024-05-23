#include <iostream>
#include<math.h>

using namespace std;

int main()
{

    //char charater
    char  grade;

    //user enter the number 
    cout<<"Enter the Grade  = ";
    cin >> grade;


    //using switch fuction 
    switch (grade)
    {

        //case A || a both asr same
    case 'A':
        case 'a':
        cout<<" Excellent "<<endl;
        
        //stop loop
        break;

        //case B || b both are same
    case 'B':
        case 'b':
        cout<<" Very Good "<<endl;

        //stop loop
        break;

        //case C || c both are same
    case 'C':
        case 'c':
        cout<<" Good "<<endl;
        break;

        //case D || d both are same
    case 'D':
        case 'd':
        cout<<" Poor "<<endl;

        //stop loop
        break;

        //case F || f both are same
    case 'F':
        case 'f':
        cout<<" Fail "<<endl;

        //stop loop
        break;






        //all case is false after they true
    default:
        cout<<"Please Enter the grand  A to D or F != " << grade<<endl; 
        //stop loop
        break;
    }






    return 0;
}
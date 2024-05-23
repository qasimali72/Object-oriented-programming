#include<iostream> //including my header file 
using namespace std;



class Student           //class defination
{
        int admno;          //thses are private date mambers
        char sname[20];
        float eng;
        float math;
        float science;
        float total;
        float ctotal()
        {
            return eng+math+science;
        }


public:                         //below data is public data and publice member function 
                                //member function to set in private data member
        void Takedate()
        {
            cout<<"Enter the admission number : ";          //here we will se admission number
            cin>>admno;
            cout<<"Enter the student name : ";              //here we eill get student name from user
            cin>>sname;
            cout<<"Enter marks in englis , then math and than science :: ";
            cin>>eng>>math>>science;
            total=ctotal();
        }

        void Showdate()             //members function to show data in private data members
        {
            cout<<"Admission number is::  "<<admno <<"\nStudent name:: "<<sname << " \nEnglish :: "<<eng <<"\n Math ::  "<<math <<"\n Science ::  "<<science<<"\n Total :: "<<total;
        }

};      //End of the class defintion     
 //start main function 
int main()          
{
    Student s1;             //defining  class variable 
    s1.Takedate();          //calling "Takedate() " members function from class
    s1.Showdate();             //calling "showdate() " members function from class
    return 0;

   
}

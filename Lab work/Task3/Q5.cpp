#include<iostream>
#include<math.h>

using namespace std;

int main()
{   
    //decdecle a verbile 
    float  salary,deductions ,taxes;
    
    //user enter the number 
    cout<<"Enter the Salary = ";
    cin>>salary;

    //using a if else-if  else loop 
    //if salary are less than or equal to 10000 they no taxes
    if (salary <= 10000)
    {
        //cout the salary
        cout <<"They are no deductions = "<<salary<<endl;
    }

    //using a else-if stamment
    //if salary a less than 20000 they are substartion a 1000 for salary
    else if (salary <=20000 )
    {
        //substarion to salary 1000 
        salary=  salary - 1000;
        cout<<"The  deductions  are subsartion in salary = "<<salary<<endl;
    }

    //using a else-if condition if number equal or great than 20000 they are substarion 7% in total salary 
    else if (salary >= 20000 || salary == 20000)
    {
        //salary/ 100  and storge in taxe
        taxes =salary/100;

        //taxes * 7% of taxes and substarion in salary and storge in ans is deductions
        deductions = salary - (taxes*7);
        cout<<"The tatal monye is remaine is  :-  "<<deductions<<endl;
    }


    //after all function is false the are run in else
    else 
    {
        cout<<"The are invidie number :- "<<salary<<endl;
    }
    
    return 0;
    
}
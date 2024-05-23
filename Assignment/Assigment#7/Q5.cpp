#include<iostream>
using namespace std;

int main()
{
     //decdecle a verbile 
    double salary ,taxes,total, net_payable_amount;

    //do while loop agina and agina
    char agina;
    do
    {
      
    //user enter the number 
    cout <<"Enter you salary amount = ";
    cin>>salary;

    //using a if else-if  else loop 
    //if salary are less than or equal to 10000 they no taxes
    if (salary < 10000)
    {        
        cout<<"You salary is then 10000 ,so no deduction = "<<salary<<endl;
    }

    //using a else-if stamment
    //if salary a less than 20000 they are substartion a 1000 for salary
    else if (salary == 10000 || salary < 20000)
        {
            //substarion to salary 1000 
            net_payable_amount = salary - 1000;

            //print a net ammount 
            cout<<"Your total net ammount is = "<<net_payable_amount<<endl;
        }


//using a else-if condition if number equal or great than 20000 they are substarion 7% in total salary 
    else if (salary >= 20000 || salary == 20000)
    {
        //salary/ 100  and storge in taxe
        taxes = salary /100;
        
        //taxes * 7% of taxes and substarion in salary and storge in ans is deductions
        net_payable_amount = salary - (taxes * 7 );
        cout<<"Your total net ammount is = "<<net_payable_amount<<endl;
    }
    
    //after all function is false the are run in else
    else 
    {
        cout<<"The are invidie number :- "<<salary<<endl;
    }

//if user want agina addaing operator its user easy
cout<<"Do you want  agina  (y/n) = ";
cin>>agina;
//using a while loop
} while (agina != 'n' && agina !='N');
    

    

    


return 0;
}
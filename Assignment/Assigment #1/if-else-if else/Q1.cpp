


#include<iostream>
#include<math.h>
using namespace std;

int main(){
    //user enter the number 
    int number;
    cout<<"Enter the number  :  ";
    cin>>number;
//if esle if condition 
    //number is great than 0 
    if (number > 0)
    {
        cout<<"The number is positive number :- "<<number<<endl;
    }
    //number is less than 0 
    else if (number < 0)
    {
         cout<<"The number is negative number : "<<number<<endl;
    }
    //number is neutral  or == 0 
    else if (number == 0)
    {
        cout<<"Th e number is neutral number : "<<number<<endl;
    }
    return 0;
}
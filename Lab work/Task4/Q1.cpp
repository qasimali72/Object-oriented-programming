#include<iostream>
using namespace std;

int main(){
 
    //enter the number of row to print
    int number_row;

    //user enter the number 
    cout<<"Enter the number of row ";
    cin>>number_row; 

    
    //using a for loop 
    for (int j=number_row; j>=1; --j)
    {  
        //angin for loop using 
        for (int i=1 ; i<=j; ++i)

        //print a * in loop
    cout<<"*";

    //cout end the loop
    cout <<endl;
    } 
    




    return 0 ;
}
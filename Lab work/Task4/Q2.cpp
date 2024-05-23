#include<iostream>
using namespace std;

int main(){

    //using a for loop 
    int number_row;

    //angin for loop using 
    cout<<"Enter the number of row ";
    cin>>number_row; 

    

    //using a for loop 
    for (int j=number_row; j>=1; --j)
    {  

        //angin for loop using 
        for (int i=1 ; i<=j; ++i)

    //print  1 to 5 number in loop
    cout<< i ;

    //end the loop
    cout <<endl;
    } 
    return 0;
}
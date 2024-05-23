#include <iostream>

using namespace std;

int main(){

    //user enter a number 
    int number;
    cout<<"Enter the number : ";
    cin>>number;

//if and else Statement number is >= 0 print a position number
    if (number >= 0)
    {
        cout<<number <<"  The number is positive : " <<endl;
    } 
    //else the number is negative number 
    else
    {

         cout<<number <<" The number is negative  : "<<endl;
    }

    return 0;
}
#include<iostream>
#include <math.h>

using namespace std;

int main(){

    //user enter the number 
    int num;
    cout <<"Enter the number : ";
    cin>>num;

    //if else condition cheak if number % 2 the number equal to 2  the ans is even
    if (num % 2 == 0 )
    {
        cout<<num<<"  Number is even : "<<endl;
    }

    //if number not equal to 2 they are odd
    else
    {
        cout<<num <<"  Number is odd : "<<endl;
    }

    return 0;
}
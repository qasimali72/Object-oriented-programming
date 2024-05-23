#include <iostream>
#include <math.h>

using namespace std;
int main(){  
    int i , num , fact=1;
    cout<<"Enter the whose table you wants : ";
    cin>>num;


    cout<<"You cannot enterd -ve value . \n ";
    cout<<"  factorial = "<<num <<" = ";
    for (int i = 0; i < num; i++)
    {
        fact = fact*(i+1);
    }
    cout<<fact;
    cout<<endl;
    return 0;
}
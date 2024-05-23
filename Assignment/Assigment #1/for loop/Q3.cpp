#include <iostream>
#include <strings.h>

using namespace std;

int main(){

    //user enter the number 
    int i , number;
    cout<<"Enter the number for a table : ";
    cin>>number;

    
    //loop function print a number 1 to 10 
    for ( i = 1; i <= 10; i++)
    {
        //now 2 X 1 = 2
        cout<<number<< " x " << i <<" = "<<i*number<<endl;
    }
    
    return 0;
}
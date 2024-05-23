#include <iostream>
#include <strings.h>

using namespace std;

int main(){

    //User enter the number 
    //factoria is start in 1 
    int i, number , factoria =1;
    cout <<"Enter the number : ";
    cin>>number;

    
    //for loop in function for i in i and number is factoria of 4! = 4 x 3 x 2 x 1 = 24 ans  
    for ( i = 1; i <= number; i++)
    {
        //4! = 4 x 3 x 2 x 1 = 24 ans 
        factoria = factoria * i;
    }
    

    //print a ans of factoria
    cout<<"The function is  "<<number << " is  : " <<factoria<<endl;

return 0;
}
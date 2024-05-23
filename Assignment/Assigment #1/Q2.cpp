#include <iostream>
#include<math.h>

using namespace std;
int main(){

   //user entr the number less than 40 
    int num1 , number ;
    cout<<"Enter the number less than 40 : ";
    cin>> num1;

   //using a while loop for odd number 
   while ( num1 <= 40 )
   {  
      //for loop using for condition 
      for (number = num1 ; number <= num1; number++)
      {
         //cheak a condition if number  % 2 than they are not eqaul to 2 they are odd
        if (number % 2 != 0 )
        {
           cout<<"This is odd number  :   "<<number<<endl;
        }
      }
   

   //using for odd number 
      for (number = num1 ; number <= num1; number++)
      {
         // 2 is equal to 0 for even number 
        if (number % 2 == 0 )
        {
           cout<<"This is even number :  "<<number<<endl;
        }
      }

   //add one by one 
   num1++;
   }
    return 0;
}
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
int number, rev_number, next_digit,last_digit;
 
cout<< "Enter the number that is to be reversed: ";
cin>>number;
 
last_digit = number - ((number / 10) * 10);
rev_number = last_digit; /* 5 */

 
next_digit = (number / 10) - ((number / 100) * 10); /*tenth's place*/
rev_number = (rev_number * 10) + next_digit; /*54*/ 
next_digit = (number / 100) - ((number / 1000) * 10); /*hundred's place*/
rev_number = (rev_number * 10) + next_digit; /*543*/
 

// next_digit = (number / 1000) - ((number / 10000) * 10); /*thousand's place*/
// rev_number = (rev_number * 10) + next_digit; /*5432*/
// next_digit = (number / 10000) - ((number / 100000) * 10); /*ten thousand's place*/
// rev_number = (rev_number * 10) + next_digit; /*54321*/
 
cout <<"The Reversed Number is: "<< rev_number<<endl;

return 0;
}



// int main()
// {
// // do
// // {
  

// //     //User Enter the number
// //     cout<<"Enter a number =  " ;
// //     cin>>number;

    
// //     // for exmaple reversedNumber = 0 * 10 + 5 = 5
// //     reverse_number= 0;



// //     while (number != 0)
// //     {
// //         Remainder = number%10;
        
// //         reverse_number = reverse_number*10 + Remainder;

// //         number/=10;
// //     }

// //         cout<<"The reverse_number number is = " <<reverse_number << endl;
       
// // cout<<"Do you want angin (y/n)";
// // cin>>ch;
// // } while (ch!='n' ||ch =='N' );
       
       
// //         return 0;
// // }

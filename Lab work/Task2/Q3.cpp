#include <iostream>
using namespace std;

int main(){
    //Varibe deleclar in number 
    int number,reverse_number, Remainder;

    //User Enter the number
    cout<<"Enter a number =  " ;
    cin>>number;

    
    // for exmaple reversedNumber = 0 * 10 + 5 = 5
    reverse_number= 0;


    //Using a the while loop  
    while (number != 0)
    {
        //Remainder number%10 and remainder is storge in reverse_number
        Remainder = number%10;
        
        //storge date multiption by 10 and + a Remainder
        reverse_number = reverse_number*10 + Remainder;

        //number / and equal by 10
        number/=10;
    }

        //the output and storge in reverse_numbere and  print the output 
        cout<<"The reverse_number number is = " <<reverse_number << endl;
        return 0;
}
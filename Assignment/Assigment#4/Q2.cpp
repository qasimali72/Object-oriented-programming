#include <iostream>
using namespace std;

int main()

{
    //its a char 
    char alphabet ;

    //its a alphabet type of char
    //alphabet='a';

    //output the satament
    cout<<"Enter the choose any alphabet = ";

    //user Enter a char in alphabet 
    cin>>alphabet;
    
    //output the alphabet enter the user 
    cout<<"The alphabet is = "<<alphabet<<endl;

    //the alphabet char convert in its ACCll in type of int 
    cout<<"The output show in int its ASCII value =  "<<int(alphabet)<<endl;

    return 0;
}

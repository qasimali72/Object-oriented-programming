#include <iostream>
using namespace std;

//function call
int main(void) {
    //char
   char str[] = "A string.";
   char *p = str;

    //print a function 
   cout << str[0] <<" "<< *p <<" "<<p[3]<<"\n";
   //main part of function call 
   p += 2;
   cout <<*p<<" "<< p[2] <<" "<< p[5]<<endl;

   return 0;
}
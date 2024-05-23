#include <iostream>

using namespace std;

int main(){

//user enter the number 
int i , num;

cout<<"Enter the number : ";
cin>>num;

//loop to print 1 to 10 numbre 
cout<<"Print a even  number : " <<endl;
for (i = 2 ; i <= num;i= i + 2 )
{
   //print one by one 
    cout<< i <<" \n";
}

//loop to odd numbre 
cout<<"Print odd number : " <<endl;
for (i = 1 ; i <= num;i= i + 2 )
{

   //print one by one 
    cout<< i <<" \n";
}
return 0;
}

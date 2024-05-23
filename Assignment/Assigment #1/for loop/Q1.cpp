#include <iostream>
#include <strings.h>

using namespace std;

int main(){
    //the print a 10 number only 
int i ,num;
cout<<"Enter the number : ";
cin>>num;

//loop to print 1 to 10 numbre 
cout<<"Print a 1 to 10 number : " <<endl;
for (i = 1 ; i <= num; ++i )
{
    //print one by one 
    cout<< i <<" \n";
}
return 0;
}

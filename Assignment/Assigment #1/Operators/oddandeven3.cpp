#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int mynum;
    cout<<"Enter the number : ";
    cin>>mynum;

    //putting condition 
    (mynum %2 == 0)?cout<<mynum<<" : is  Even number . ":cout<<mynum<<" :is odd number .\n";


    return 0;
}
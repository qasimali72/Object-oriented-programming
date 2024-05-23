#include<iostream>
using namespace std;

int main()
{
    //varible decale 
    int a ;
    int max=0;
    cout <<"Enter the value of a = ";
    //User intput a data 
    cin>>a;

    //arra of size its print 
    cout<<"The array of a = ";
    int arr[a];
    //user inter arra size 
    for (int  i = 0; i < a; i++)
    {
        //enter a value of arry
       cin >>arr[i];

    }
    //chaeck a number is great or less than and print a great  number 
    for (int j = 0; j <= a; j++)
    {
        if (arr[j] >= max)
        {
            max=arr[j];
        }
        
    }
    //user a pointer print a value and &max mean asing the address of value 
    int *pointer= &max; 

  //cout<<"\r\n";
  cout<<"Largest integer value in the array is "<<*pointer;
    return 0;
}
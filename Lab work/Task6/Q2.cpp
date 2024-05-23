#include<iostream>
using namespace std;

//function call
void arrayFunction(int array[],int *n)
{

    //using a pionter 
    int x= *n;
    
    //using a for loop in arry using print
    for (int i = 0; i < x ; i++)
    {
        cout<<"Enter the how many arry print["<<i<<"]: ";
        cin>>array[i];
    }
};

//main function 
int main()
{
int size;
//arrray size call
cout<<"Enter you arry size : ";
cin>>size;
//main function call 
int myarray[size];
arrayFunction(myarray ,&size);
cout<<"The array is : ";

//using a for loop call print main functions
for (int i = 0; i <= size; i++)
{

    cout<<myarray[i]<<" ";
}

cout<<endl;

}
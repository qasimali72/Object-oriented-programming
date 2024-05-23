#include<iostream>
using namespace std;
int main(){

    int number , i, max =0;
    
    
    cout <<"Enter the number to go :  ";
    cin>>number;

    cout<<"print the arry : ";
    int array[number];
    for (i = 0; i < number; i++)
        {
            cin>>array[i];
        }
            for (int x = 0; x <= number; x++)
            {
                if (array[number]>max)
                    max=array[number];   
            }
    int *pointer = &max;
    cout<<"Largest integer value in the array is "<<*pointer;
    
    





    return 0;
}
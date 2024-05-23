#include<iostream>
using namespace std;

int main()
{

    //varible decale
int arr[20] , size , val ,max;

//using enter a size of we want
cout<<"Enter the size of arry = ";
cin>>size;


//for loop for user enter a array number and vale
for (int i = 0; i < size; i++)
{
    cout<<"Enter you array = ";
    cin>>arr[i];
}

//find a min number in array 
val= arr[0];
for (int j = 0; j < size; j++)
{
    if (arr[j]<val)
    {
        //cheak
        val = arr[j];
    }

        //aslo find a max number 
        else
        {
        max = arr[j];
        }
        cout<<"The max value is = "<<max<<endl;
}
cout<<"The maximum integer is "<<val<<endl;




    return 0;
}
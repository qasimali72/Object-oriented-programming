#include <iostream>
using namespace std;




//main function 
int main()
{

    //array size decela
int arr1[100][100],arr2[100][100] ,summar[100][100] , row , col;
//user enter a number 
cout<<"Enter the size of row= ";
cin>>row;

//user enter a number 
cout<<"Enter the size of col= ";
cin>>col;


//user enter a array size value 
//row element
for (int i = 0; i < row; i++)
{
    //col element 
    for (int j = 0; j < col; j++)
    {
        //user enter the value of array 1
       cout<<"Enter the vale od arr1["<<i<<"]"<<"["<<j<<"]:";
       cin >>arr1[i][j];
       //user enter the value of array 1
       cout<<"Enter the vale od arr2["<<i<<"]"<<"["<<j<<"]:";
       cin >>arr2[i][j];

       //adding a array1 and array2 
       summar[i][j] = arr1[i][j] + arr2[i][j];
    }    
}
//dispaly a array 1
cout<<"Dispalys element the array1\n ";
//row element
for (int i = 0; i < row; i++)
{
    //coloum element
    for (int j = 0; j < col; j++)
    {
        //print a colo and row
        cout<<arr1[i][j]<<" ";
    }
    cout<<endl;
    
}


//dispaly a array 2
cout<<"Dispalys element the array2\n ";
for (int i = 0; i < row; i++)
{
    //coloum element
    for (int j = 0; j < col; j++)
    {
        //print a colo and row
        cout<<arr2[i][j]<<" ";
    }
    cout<<endl;
    
}


cout<<"Dispalys element  sum of array1 and array2\n ";
for (int i = 0; i < row; i++)
{
    for (int j = 0; j < col; j++)
    {
        cout<<summar[i][j]<<" ";
    }
    cout<<endl;
    
}


cout<<"\n";
return 0;




}
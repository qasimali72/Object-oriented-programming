#include<iostream>
using namespace std;


struct pointss
{
    int x;
    int y;
    
};

int main()
{
    //varible 
    pointss x,y, z;
    //user enter a number 
    cout<<"Enter the value of coordinates x p1 = ";
    cin>>x.x;
    //user enter value of x, y
    cout<<"Enter the value of coordinates y p1 = ";
    cin>>x.y;

    cout<<"Enter the value of coordinates x p2 = ";
    cin>>y.x;
    cout<<"Enter the value of coordinates y p2 = ";
    cin>>y.y;    

    //add a x, x and y, y 
    z.x= x.x + y.x ;
    z.y=x.y + y.y;

    //print a ans 
    cout<<"value of coordinates p1 + p2 = "<<z.x << " ," <<z.y<<endl;
    return 0;
    }
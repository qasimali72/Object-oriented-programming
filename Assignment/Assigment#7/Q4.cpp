#include<iostream>
using namespace std;

int main()
{
//varibe assing a number and value    
int x , y , z ,result;
x= 10;
y=15;
z=20;

//part 1 using if else 
if (!(x > 10))
{
    //print ture ==1
    cout<<"The part first = "<<true<<endl;
}
else
//print false ==0
cout<<"The part first = "<<false<<endl;


//part 2 using if else 
if (x <= 5 || y < 15)
{
    //print ture ==1
    cout<<"The part two = "<<true<<endl;
}
else
//print false ==0
cout<<"The part two = "<<false<<endl;



//part 3 using if else 
if ((x != 5) && (y != z))
{
    //print ture ==1
    cout<<"The part three = "<<true<<endl;
}
else
//print false ==0
cout<<"The part three = "<<false<<endl;

//part 4 using if else
if (x >= z || (x + y >= z))
{
    //print ture ==1
    cout<<"The part four = "<<true<<endl;
}
else
//print false ==0
cout<<"The part four = "<<false<<endl;


//part 5 using if else
if ((x <= y - 2) && (y >= z) || (z - 2 != 20))
{
    //print ture ==1
    cout<<"The part five = "<<true<<endl;
}
else
//print false ==0
cout<<"The part five = "<<false<<endl;



return 0;

}
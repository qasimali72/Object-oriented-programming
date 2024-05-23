#include <iostream>
using namespace std;

class Rectangle         //class name
{
private:
    float length;        //these are privte date members
    float width;
public:             //below data is public date and publice member function prototypes (defined after main function)
    void setlength(float lenth);          //by this function we will set length
    void setwidth(float widh);           //by this function we will set width
    float perimeter();                  //by this function we will set perimeter
    float area();                       //by this function we will set area
    void show();                        //here we will show the size of length and width
    int sameArea(Rectangle);            //here we will show the two rectangales are equal  not 
};          //End of the class defination  

int main()          //Start main function 
{
    Rectangle myfirst;                  //defined class variable  
    Rectangle mysecond;                 //defined class variable
    myfirst.setlength(5);            //setting date by passing vale to member function     
    myfirst.setwidth(2.5);           //setting date by passing vale to member function
    mysecond.setlength(5);          //setting date by passing vale to member function
    mysecond.setwidth(18.9);      //setting date by passing vale to member function
    cout<<"myfirst Rectange : ";       //showing the length the width of 1st
    myfirst.show();                 //showing the legth and width of 1nd
    cout<<endl;
    cout<<"Area is :  "<< myfirst.area()<< " perimeter is : " << myfirst.perimeter() <<endl;
    cout<<endl;
    cout<<"mysecond Rectange : ";       //showing the length the width of 2st
    mysecond.show();            //showing the legth and width of 2nd
    cout<<endl;
    cout<<"Area is :  "<< mysecond.area()<< " perimeter is : " << mysecond.perimeter() <<endl;
    cout<<endl;
    if (myfirst.sameArea(mysecond))          //Comparing rectangle have the same  are are not
        cout<< "Rectangles have the same areas\n ";
    else
        cout<<" Rectangles do not have the same area\n ";
    //.......................................//same like above aetting date and comparing 
    myfirst.setlength(15);
    myfirst.setwidth(6.3);
    cout<<" myFirst Rectangle is : ";
    myfirst.show();
    cout<<endl;
    cout<<"Area is :  "<< myfirst.area()<< " perimeter is : " << myfirst.perimeter() <<endl;
    cout<<endl;
    mysecond.show();
    cout<<"Area is :  "<< mysecond.area()<< " perimeter is : " << mysecond.perimeter() <<endl;
    cout<<endl;
    cout<<endl;
    if (myfirst.sameArea(mysecond))
        cout<< "Rectangles have the same areas\n ";
    else
        cout<<" Rectangles do not have the same area\n ";
    return 0;
}        //end of the main function




void Rectangle::setlength(float lenth)            //defination of setlength member functon
{
    length =lenth;
}
void Rectangle::setwidth(float widh)      //defination of setwidth member functon
{
    width = widh;
}
float Rectangle::perimeter()          //defination of perimeter member functon
{
    return (2 * length + 2  * width);
}
float Rectangle::area()         //defination of Area member functon
{
    return length * width;
}
void Rectangle::show()         //defination of show member functon
{
    cout<<"Length is : "<<length <<" width is : "<<width;
}

int Rectangle::sameArea(Rectangle other)        //defination of sameArea member functon
{
    float areaf = length * width;
    float areas = other.length * other.width;
    if (areaf == areas)
        return 1;
    return 0;
}


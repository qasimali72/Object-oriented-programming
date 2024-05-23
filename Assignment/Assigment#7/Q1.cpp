#include <iostream>
using namespace std;

int main ()
{
    //varible 
    int number , row,colum;

    //user enter a number 2 
    cout<<"user enter a  number = ";
    cin>>number;
    //add a number in 1 + 1= 2 and agina 2+1+1=4
    int same=+1;

//if for row print 
for ( row=0 ; row<10; ++row)
{
    //its for coloum
    for(colum=0; colum<10; colum++)
    {

            //number *same and add 4 space 
            cout<<number*same<<"\t";

            //add +1
            ++same;
    }

    //space
cout<<"\n";
}
    
    return 0;
}
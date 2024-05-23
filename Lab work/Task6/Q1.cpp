#include <iostream>
using namespace std;

//function overloading
void printType(double n)
{
    cout<< n<<" IS double data types. \n";
}
void printType(int n)
{
    cout<<n<< " is a interger data types. \n ";
}
void printType(bool n)
{
    if (n == true || n==1)
    {
        cout<<" True is a boolean ";
        cout<<1<<" is boolean data type. \n";
    }
    else
    {
        cout<<"False is a boolean    ";
        cout<< 0 << " is boolean data type. \n";
    }
    
}
void printType(char n )
{
    cout << n <<" is a character data type. \n";
}

//main function call
int main()
    {
    printType('A');
    printType(1.24353);
    printType(334345345);
    printType(true);


    return 0;
    }

  

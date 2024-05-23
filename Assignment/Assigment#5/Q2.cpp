#include <iostream>
using namespace std;

//passing by vale 
int passingbyvalue(int a)
{
    int result;
    result = a*a*a;
  
    return result;
}
//pass by refernce vale 
int passingbyreference(int &b)
{
    float result;
    
    result = b*b*b;

    return result;
}


//main function call 
int main()
{

//user enter a num1 and num2
int num1 , num2;
cout<<"user enter a  number of passingbyvalue = ";
cin>>num1;
//passingbyvalue(num1);
int result=passingbyvalue(num1);
cout<<result<<endl;


//passingbyreference
cout<<"user enter a second number of passingbyreference = ";
cin>>num2;
passingbyreference(num2);
cout<<result<<endl;



cout<<"\n";
cout<<"num1 = "<<num1<<endl;
cout<<"num2 = "<<result<<endl;
return 0;
}
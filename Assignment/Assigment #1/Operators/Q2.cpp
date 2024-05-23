#include <iostream>
#include<math.h>

using namespace std;

int main(){
    //float date types
    float dollar=170,rupees ,convert;
    char choise;

do
{

    //Enter the rupees in convert to dollar 
    cout<<"Enter the  rupees prize to convert in dollar  : ";
    cin>>rupees;

    // //if also user Enter the dollar prize in current time
    //cout<<"Rupees convert in $ dollar  : ";
    //cin>>dollar;
    
    //rupees / dollar and find a total dollar
    convert=rupees / dollar;


    //cout the dollar of total rupees convert 
    cout<<"The $ is convert in rupees is = "<<convert<<endl;


    cout<<"Do you want angin convert  (y/n)  : ";
    cin>>choise;

    //the || operater was not work sir 
    //while (choise !='n' && choise !='N');                = its like this while (choise !='n' || choise !='N');

} while (choise !='n' && choise !='N');


    return 0;
}
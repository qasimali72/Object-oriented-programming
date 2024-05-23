#include <iostream>
#include<math.h>

using namespace std;

int main(){

    //float date types
    float dollar,rupees ,convert;
    char choise;

do
{
    

    //user enter the how many dollar 
    cout<<"Enter the  $ dollar  : ";
    cin>>dollar;

    //what the prize of one dollar
    cout<<"Enter the one rupees prize in  : ";
    cin>>rupees;

    //dollar * by rupees for convert in rupeers
    convert=dollar*rupees;

    //cout the the dollar in rupess
    cout<<"The Dollar is convert in rupees is = "<<convert<<endl;

    cout<<"Do you want angin convert  (y/n)  : ";
    cin>>choise;

    //the || operater was not work sir 
    //while (choise !='n' && choise !='N');                = its like this while (choise !='n' || choise !='N');
} while (choise !='n' && choise !='N');

    return 0;
}
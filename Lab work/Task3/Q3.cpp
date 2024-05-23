#include <iostream>
#include<math.h>

using namespace std;

int main(){

    // find a grad char 
    char  grade;

    //user enter the grade
    cout<<"Enter the Grade  = ";
    cin >> grade;

    //using a switch operation
    switch (grade)
    {
        
        //case A true print Execellent
        case 'A':
            cout<<" Excellent "<<endl;
            //function true and after stop a loop
            break;
    
        //Case B is true print very good
        case 'B':
            cout<<" Very Good "<<endl;

            //function true and after stop a loop
            break;
    
        //Case C is true print good
        case 'C':
            cout<<" Good "<<endl;
            
            //function true and after stop a loop
            break;


        //Case D is true print poor
        case 'D':
            cout<<" Poor "<<endl;

            //function true and after stop a loop
            break;
    
        //Case F is true print Fail
        case 'F':
            cout<<" Fail "<<endl;

            //function true and after stop a loop
            break;






    //if all case  is flase  they run the default 
        default:
        
        //they enter the wrrog grand 
        cout<<"Please Enter the grand  A to D or F != " << grade<<endl;

        //and stop the function 
        break;
    }






    return 0;
}
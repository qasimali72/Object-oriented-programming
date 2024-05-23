#include <iostream>
#include<math.h>

using namespace std;
int main ()
{

    //int a cin for number and reusult storge a ans
    float firs_nummber, second_number, result;   
    //char operation (+ , - ,/ ,*)
    char op,ch;

do
{
    // enter the first input in user
    cout<<"Enter a first number : ";
    cin>>firs_nummber;

    // enter the second number input in user
    cout<<"Enter a second number : ";
    cin>>second_number;

    //enter the operation that can work funcion 
    cout<<"Which operator are you want (+,-,*,/)= ";
    cin>>op;

  
        //if condition used the operation == to + the iner fuction exction
    if (op == '+')
    {
        //first_number and second number add and storge in result
        result = firs_nummber + second_number;
        cout<<"Answer is = "<<result<<endl;
    }

        // else if condition and also same work to cheak in function operation == - the function was work.
    else if (op == '-')
    {
        //first_number subraction second_number and storge in result 
        result = firs_nummber - second_number;
        cout<<"Answer is = "<<result<<endl;
    }

        ////also same conditional operation == * the function can work 
    else if (op == '*')
    {
                    //first_number multiplication second_number and storge in result
        result = firs_nummber * second_number;
        cout<<"Answer is = "<<result<<endl;
    }
    
            //also same conditional operation == / the function can work   
    else if (op == '/')
    {
         
                        //if condition for the second number == 0 the  function was not work other wiashe alse condition
        if(second_number == 0)
        {
            cout<<"Plz enter great than 0 a second number "<<endl;
            
        }
        // if condition flase they ex in alse condition  
        else
        {
                //first_number divide second_number and storge in result
                result = firs_nummber - second_number;
                cout<<"Answer is = "<<result<<endl;
        }

    }
            //else the operation was worrge , thay can no work any fuction

    else
    {
        //cout the worry operation in output
        cout<<"You are enter a worng char plz agina"<<endl;
    }

//if user want agina addaing operator its user easy
cout<<"Do you want  agina  (y/n) = ";
cin>>ch;
//using a while loop
} while (ch != 'n' && ch !='N');
    

    return 0;
}
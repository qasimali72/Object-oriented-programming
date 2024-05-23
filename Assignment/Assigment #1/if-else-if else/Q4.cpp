#include <iostream>
#include <math.h>


using namespace std;
int main(){
    //int a cin for number and reusult storge a ans
    int first_number , second_number ,result;
    //char operation (+ , - ,/ ,*)
    char operater, choice;
    // using a do while loop for a function
do
{
    cout<<"Enter the first number =  "; //user  enter the first input in user
    cin>>first_number;
    cout<<"Enter the second number = "; //user enter the second input 
    cin>>second_number;
    cout<<"Enter the operation (+ , - ,/ ,* ,%) =  ";//user enter the operation that can work funcion 

    cin>>operater;
    
        if (operater == '+'){   //if condition used the operation == to + the iner fuction exction
            result=first_number + second_number; //first_number and second number add and storge in 
            cout<<"The result of Addition is  : "<<first_number<<"  +  "<<second_number << "  =  "<<result<<endl;
        }
        else if (operater == '-'){
                //first_number subraction second_number and storge in result 
                result = first_number - second_number;
                cout<<"The result of Subraction is : "<<first_number<<"  -  "<<second_number << "  = "  <<result<<endl;
            }
           
        else if (operater == '/') //also same conditional operation == / the function can work
            {
                //if condition for the second number == 0 the  function was not work other wiashe alse condition
                if (second_number == 0)
                {   
                    cout<<"The number was not  divided by 0   = " <<second_number<<endl;
                }
                // if condition flase they ex in alse condition  
                else{
                    //first_number divide second_number and storge in result
                    result = first_number / second_number;
                    cout<<"The result  of divide is : "<<first_number<<"  /  "<<second_number << "  =  " <<result<<endl;
                } }        
        ////also same conditional operation == * the function can work 
        else if (operater == '*')   {
            //first_number multiplication second_number and storge in result
            result= first_number * second_number;
            cout<<"The result of multiplication is : "<<first_number<<"  *  "<<second_number << "  =  "<<result<<endl;
        }
                ////also same conditional operation == * the function can work 
        else if (operater == '%')   
        {
            result= first_number % second_number;
            cout<<"The result of multiplication is : "<<first_number<<"  %  "<<second_number << "  =  "<<result<<endl;
        }
        //else the operation was worrge , thay can no work any fuction
        else {         
            //cout the worry operation in output
            cout<<"You get a worry input in operation in fuctoin : " <<operater<<endl;
            cout<<"agina try = "<<operater<<endl; }

        cout << "Do you want to do another calculation? (y/n)> ";
        //enter you choose please
        cin >> choice;
     //while you choose    
    }while(choice != 'n' && choice != 'N');
    return 0;
}
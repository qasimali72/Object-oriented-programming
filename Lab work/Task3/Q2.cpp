#include <iostream>
#include <math.h>

using namespace std;

int main(){
    //int a cin for number and reusult storge a ans
    int first_number , second_number ,result;

    //char operation (+ , - ,/ ,*)
    char operater, choice;

    //do while loop 
    do{
        //user  enter the first input in user
        cout<<"Enter the first number =  ";
        cin>>first_number;

        //user enter the second input 
        cout<<"Enter the second number = ";
        cin>>second_number;


        //user enter the operation that can work funcion 
        cout<<"Enter the operation (+ , - ,/ ,* ) =  ";
        cin>>operater;

        //switch finction start
        switch (operater)
        {

            //case of Add 
        case '+':
            
            //Add a number a storge in result 
            result=first_number + second_number;
            cout<<"The result of Addition is  : "<<first_number<<"  +  "<<second_number << "  =  " <<result<<endl;
            break;
        
        //Subraction  operation
        case '-':

            //Subraction a number a storge in result 
            result = first_number - second_number;
            cout<<"The result of Subraction is : "<<first_number<<"  -  "<<second_number << "  = " <<result<<endl;
            break;
        

        
        //divide operation
        case '/':
                
                //divide a number a storge in result 
            result = first_number / second_number;
            cout<<"The result  of divide is : "<<first_number<<"  /  "<<second_number << "  =  " <<result<<endl;
            break ;


           // multiplication operation
        case '*':

            //multiplication a number a storge in result 
            result= first_number * second_number;
            cout<<"The result of multiplication is : "<<first_number<<"  *  "<<second_number << "  =  " <<result<<endl;
            break ;


        //default mean the all case is flase after run default
        default:
            cout<<"You get a worry input in operation in fuctoin : " <<operater<<endl;
            cout<<"agina try = "<<operater<<endl;
            break;
        }


        // chosse you are start angin the whole function  
        cout << "Do you want to do another calculation? (y/n)> ";

        //enter you choice
        cin >> choice;

        //using a while loop 
    }while(choice != 'n' && choice != 'N');





    return 0;    
}


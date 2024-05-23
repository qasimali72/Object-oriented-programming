#include <iostream>
#include <math.h>

using namespace std;

//int a cin for number and reusult storge a ans
float first_number , second_number ,result;

void Input(){
            //user  enter the first input in user
            cout<<"Enter the first number =  ";
            cin>>first_number;

            //user enter the second input 
            cout<<"Enter the second number = ";
            cin>>second_number;
    
}

int main(){




    //char operation (+ , - ,/ ,*)
    char operater, ch;
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

            
            //if condition used the operation == to + the iner fuction exction
            if (operater == '+'){

                //first_number and second number add and storge in result
                result=first_number + second_number;
                cout<<"The result of Addition is  : "<<first_number<<"  +  "<<second_number << "  =  " <<result<<endl;
            }
            
            
            // else if condition and also same work to cheak in function operation == - the function was work.
            else if (operater == '-')
                {
                    //first_number subraction second_number and storge in result 
                    result = first_number - second_number;
                    cout<<"The result of Subraction is : "<<first_number<<"  -  "<<second_number << "  = " <<result<<endl;
                }

            //also same conditional operation == / the function can work   
            else if (operater == '/')
                {

                    if (second_number == 0){
                        cout << "Can't Divide by 0\nPlease ReEnter!\n";
                        Input();
                    }
                    // if condition for the second number == 0 the  function was not work other wiashe alse condition
                    if (second_number == 0)
                    { 
                        
                        
                        
                        cout<<"The number was not  divided by 0   = " <<second_number<<endl;

                        
                    }

                    // if condition flase they ex in alse condition  
                    else{

                        //first_number divide second_number and storge in result
                        result = first_number / second_number;
                        cout<<"The result  of divide is : "<<first_number<<"  /  "<<second_number << "  =  " <<result<<endl;
                    }
                } 
            
            ////also same conditional operation == * the function can work 
            else if (operater == '*')
            
            {
                //first_number multiplication second_number and storge in result
                result= first_number * second_number;
                cout<<"The result of multiplication is : "<<first_number<<"  *  "<<second_number << "  =  " <<result<<endl;
            }

            //else the operation was worrge , thay can no work any fuction
            else {
                
                //cout the worry operation in output
                cout<<"You get a worry input in operation in fuctoin : " <<operater<<endl;
                cout<<"agina try = "<<operater<<endl;
            }
            cout << "Do you want to continue: (y/n) ";
            cin >> ch;

            // if (ch == 'N')
            //     break;

            //using continue: (y/n) or no 
    }while(ch != 'n' );

    return 0;
}
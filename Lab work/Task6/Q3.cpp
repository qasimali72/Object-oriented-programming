#include <iostream>
//#include <iomanip>
using namespace std;


//arry define
int multiplication(int A[4][6]);
int rowsProduct = 1, counter = 0;

//main function call
int main(){

    int A[4][6];
    cout << "User enter the elements of the array A :  ";
    

    // user enter the values 
    for (int x = 0; x < 4; x++ ){
        for (int y = 0; y < 6; y++){
            cout << "Enter the element on array A[" << 1 + x << "," << 1 + y << "]: ";
            cin >> A[x][y];
        }
    }
     multiplication(A);

}

//for row matrix
int multiplication(int A[4][6]){
    cout << endl;
    cout << "Matrix A: " <<endl;
    for(int x = 0; x < 4; x++){
        for(int y = 0; y < 6; y++){
            cout <<  "  " <<A[x][y] << " ";
            }
        cout << endl;
    }
    int Productrow;
    //Row matrix multipliction and add in a vrible 
    cout<<"multiplication : ";
    for (int x = 0; x <4 ; x++)
     {
         for (int y = 0; y < 6; y++)
         { 
            Productrow *=A[x][y];
            
         //cout<<" The row is : " <<num<<endl;
         }

        counter++;
        cout << "The multiplication of Row_no." << counter << " Is equal to =  " << Productrow << endl;
        Productrow = 1;
    }       
} 


#include <iostream>
#include <iomanip>

using namespace std;

// Delcaring i and j variables globaly
int i,j;
string space = "\t";

// Function ProtoType
int UpperHalf(int A[][20]);

int main(){
    int A[20][20];
    UpperHalf(A);

}

int UpperHalf(int A[][20])
{
    int temp = 0;
    cout << "Enter: ";
    cin >> temp;
    const int userInput = temp;

    // Asking values from user
    for (int x = 0; x < userInput; x++ ){
        for (int y = 0; y < userInput; y++){
             cout << "Enter the element on A[" << 1 + x << "," << 1 + y << "]: ";
            cin >> A[x][y];
        }
    }

    cout << "\nMatrix A:\n\n";

    for(int x = 0; x < userInput; x++){
        for(int y = 0; y < userInput; y++){

            cout <<  A[x][y] << " ";

            }
        cout << endl;
    }
      
    cout << "\nResult: \n";

    //Middle Row print 
    cout<< "Middle Row : ";
    for (int y = 1; y < 2; y++)
    {
        for (int z = 0 ; z < 3; z++)

        {
        
            cout<<A[y][z]<<" " ;
        }
        
    }
    cout<<endl;
//---------------------------
//Middle column assess 
cout<<"Column Elements are: ";
for (int i = 0; i < 3; i++)
    {
        for (int j = 0 ; j < 3; j++)
        {
            if(j==1)
            cout<<A[i][j]<<" " ;
        }
        
    }


    cout<<endl;

    

}   

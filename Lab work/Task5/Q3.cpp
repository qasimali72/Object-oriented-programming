#include <iostream>
using namespace std;
    int main(){
        int num1 ,num2,a[3][3],b[3][3],c[3][3];
        cout<<"Enter values for array intialization  "<<endl;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
            cout<< "a[" << i <<"][" <<j<<"] =";
            cin>>num1;
            a[i][j]=num1;
            cout<< "b[" << i <<"][" <<j<<"] =";
            cin>>num2;
            b[i][j]=num2;
            c[i][j]=num1 *num2;     // multiplication and using for adding a two number 
            }
        }
        cout<<endl;
        cout<<"Vale of array a \n"<<endl;
        for (int k = 0; k < 3; k++)
        {
            for (int l = 0; l < 3; l++)
            {
            cout<<a[k][l]<<" ";
            }
            cout<<endl;        
            }
        cout<<endl;
       cout<<"Vale of array  b \n"<<endl;
        for (int m = 0; m < 3; m++)
        {
            for (int n = 0; n < 3; n++)
            {
            cout<<b[m][n]<<" ";
            }
            cout<<endl;        
            }
        cout<<endl;
        cout<<"Values of Array  c  after multiplication of Array a and b " <<endl;

        for (int p = 0; p < 3; p++)
        {
            for (int q = 0; q < 3; q++)
            {
            cout<<c[p][q]<<" ";
            }
            cout<<endl;
        }
        return 0;
    }
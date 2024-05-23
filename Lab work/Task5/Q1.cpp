#include<iostream>
 using namespace std;
 
 int main() {
    int max=0 ,min = 32767 , num , myarr[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            //cout<<"enter the vale = "<<endl;
            cin>>num;
            myarr[i][j] =num;
        }
    }
    cout<<"Array values are : "<<endl;
    for (int k = 0; k < 3; k++)
    {
        for (int l = 0; l < 3; l++)
        {

           cout<<myarr[k][l]<<" ";
        }
        cout<<endl;
    }
    for (int m = 0; m < 3; m++)
    {
        for (int n = 0; n < 3; n++)
        {
            if (myarr[m][n]>max)
            {
            max=myarr [m][n];
            }
         if (myarr[m][n]<min)
            {
            min=myarr [m][n];
            }
        
        }
        
    }
    
cout<<"MAximun Number is  = "<<max<<endl;
cout<<"Minimun Number is  = "<<min<<endl;


  return 0;  
     
 } 
 
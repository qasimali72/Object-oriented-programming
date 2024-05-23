#include<iostream>
using namespace std;
int main(){
    char text1[100], text2[100];
    char *str1= text1;
    char *str2= text2;
    //inputting string form user
    cout<<"Enter any string : ";
    cin>>str1;
    //iterating though last element of string
    while (*(str1) !='\0')
    {
        *str2++ = *str1++;
        *str2='\0';
    }
    cout<<"Copy of "<<text1 <<" is : " <<text2<<endl;
    return 0;
}
#include <iostream>
using namespace std;
int main(){
    //array
    char text[100];
    char *strArray =text;
    
    //count a world whloe
    int count= 0;

    //using enter the number 
    cout<<"Enter the string please : ";
    cin>>text;

    //using a while loop to count a text
    while (*(strArray++)!='\0')
    {
        count++;
    }
    //print the length
    cout<<"Length of string is :  "<<count<<endl;

    return 0;
}

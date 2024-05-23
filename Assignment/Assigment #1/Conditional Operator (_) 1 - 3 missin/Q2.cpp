#include<iostream>
#include<math.h>
using namespace std;
  
int main()  
{  
   								 //user enter the number 
    int number;
    cout<<"Enter in interger  number : " ;
    cin>>number;
  
    
    							//number is grater than 0 the number is positive 
    (number % 2) ?  
    (printf("%d number is even", number)) :  
    
   							 //number is less than 0 the number is negative
    ( (number %2== 0) ?  
      (printf("%d number is even", number)) : 

    							  //if number equal to 0 
      (printf("%d number is odd", number))    
    );  
  
    return 0;  
}  

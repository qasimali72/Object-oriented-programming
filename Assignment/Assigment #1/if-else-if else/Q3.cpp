#include <iostream>
#include<math.h>

using namespace std;
int main(){
   									 //user enter the percentages  of student
    float percentages ;
    cout<<"Enter the percentage : ";
    cin>>percentages;
  									  //if percentages grad than 94
    if ( percentages >= 94)
	    {
		cout<<"The percentages is "<< percentages<< " = " <<" A+ "<<endl;
	    }
   										 //if percentages 85-93
    else if ( percentages >=85 && percentages <=93 )
	    {
		cout<<"The percentages is "<< percentages<< " = " <<" A "<<endl;
	    }
  										  //if percentages 80-84
    else if (percentages >=80 && percentages <=84 )
	    {
		cout<<"The percentages  is "<< percentages<< " = " <<" A- "<<endl;
	    }
    										//if percentages 75-79
    else if ( percentages >=75 && percentages <=79 )
	    {
		cout<<"The percentages is "<< percentages<< " = " <<" B+ "<<endl;
	    }
    										//if percentages 70-74
    else if (percentages >=70 && percentages <= 74)
	    {
		cout<<"The percentages  is "<< percentages<< " = " <<" B "<<endl;
	    }
    										//if percentages 67-69
    else if (percentages >=67 && percentages <=69 )
	    {
		cout<<"The percentages  is "<< percentages<< " = " <<" B- "<<endl;
	    }
    										//if percentages 64-66
    else if (percentages >=64 && percentages <=66 )
	    {
		cout<<"The percentages  is "<< percentages<< " = " <<" C+ "<<endl;
	    }
   										 //if percentages 60-63
    else if (percentages >=60 && percentages <=63 )
    {
        cout<<"The percentages  is "<< percentages<< " = " <<" C "<<endl;
    }

   										 //if percentages 57-59
    else if (percentages >=57 && percentages <=59 )
    {
        cout<<"The percentages  is "<< percentages<< " = " <<" C- "<<endl;
    }
  										  //if percentages 54-56
    else if (percentages >=54 && percentages <=56 ){
        cout<<"The percentages  is "<< percentages<< " = " <<" D+ "<<endl;
    }
    										//if percentages 50-53
    else if (percentages >=50 && percentages <=53 )
    {
        cout<<"The percentages  is "<< percentages<< " = " <<" D "<<endl;
    }
    									//if percentages less than < 50
    else
    {
      cout<<"This is not a percentages  : "<< percentages<< " = " <<" FAIL "<<endl;  
    }
    return 0;
}

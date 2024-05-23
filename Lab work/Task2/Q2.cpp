#include<iostream>
#include<math.h>

using namespace std;
int main()
{
    // float charatare
    float radius,volume;
    float pi = 3.14;
    float divide = (4/3);
    
    

   

    //user enter the number of radius
    cout<<"Enter the radius vale   =";
    cin>>radius;


    //same work find a volume and storge in volume
    //volume= divide*pi*radius*radius*radius;
    // volume= (4/3*pi*(radius*radius*radius));


	volume = divide*(pi*(radius*radius*radius));

    //print the output of volume 
    cout<<"The volume is = "<<volume<<endl;



    return 0;
}

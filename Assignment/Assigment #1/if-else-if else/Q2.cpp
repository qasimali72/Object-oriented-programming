#include <iostream>
#include <math.h>
using namespace std;
int main(){
    //user enter the number 
    float temperature;
    cout<<"Enter the temperature  in celcius: "<<endl;
    cin>>temperature;
    if (temperature <= 0){
        cout <<" Freezing weather :  "<<temperature<<endl;
    }
    else if (temperature > 0  && temperature <= 10  ){    // //temperature great 0 or less than 10
        cout <<" Very Good weather  "<<temperature<<endl;
    }
    else if ( temperature >10 && temperature <=20 ){  //temperature great 10 or less than 20
        cout <<" Very Cold weather  : "<<temperature<<endl;
    }
    //temperature great 20  or less than 30
    else if ( temperature >20 && temperature <=30 ){
        cout <<" Very Normal in Temp : "<<temperature<<endl;
    }
    //temperature great 30 or less than 40
    else if ( temperature >30 && temperature <=40 ){
        cout <<" Its Hot Temp :  "<<temperature<<endl;
    }
    //temperature great 40
    else{
        cout <<"Its Very Hot temp : "<<temperature;
    }
    return 0; }

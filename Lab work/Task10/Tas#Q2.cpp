#include<iostream>  //incuding my header file 
using namespace std;

class complex     //class definatiom
{
   private:
              float a;        //these are private date members 
              float b;
   public:                    //below data is public date and publice member function prototypes (defined after main function)
                void set(float real, float img);         //setting real and imagenary vales protoype
                complex sum (complex);                    //this is defulat constructor prototype
                void disp();                            //Displaying the date prototypes
};

complex complex::sum(complex C)   //this is defulat constructor defnning 
{
 complex n;
 n.a = a + C.a;
 n.b = b + C.b;
 return n;
}

int main()    //start of main function 
{
          complex C1,C2,C3;       //defining class variable
          C1.set(9.5,6.1);        ////setting date by passing vale to member function
          C2.set(9.2,6.5);        //setting date by passing vale to member function
          C3=C1.sum(C2);          //setting date by passing vale to member function

          cout<<"\n 1st complex Number = ";C1.disp();       //Displaying complex number by calling function 1st time
          cout<<"\n 2nd complex Number = ";C2.disp();         //Displaying complex number by calling function 2nd time
          cout<<"\n 3rd complex Number = ";C3.disp();          //Displaying complex number by calling function 3rd time

          return 0;
} //ENd of main function

  
void complex::set(float real, float img)     //function defination to set date 
      {
        a=real; 
        b=img;
      }
void complex::disp()            //function defination to set date 
{
 cout<<a<<" + j"<<b<<endl;
}



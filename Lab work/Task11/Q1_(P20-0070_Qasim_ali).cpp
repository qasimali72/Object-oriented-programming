#include <iostream>
#include <string>
using namespace std;

class Seminar
{
    int time;
public:
    Seminar()        //Function 1
    {
        time = 30;
        cout << "Seminar starts now" << endl;
    }
    void lecture()        //Function 2
    {
        cout << "Lectures in the seminar on" << endl;
    }
    Seminar(int duration)        //Function 3
    {
        time = duration;
        cout << "Seminar starts now" << endl;
    }
    ~Seminar()        //Function 4
    {
        cout << "Thanks" << endl;
    }
};
// //Ans is :-
// //i = 
// Seminar a1;    // Execute the  funtion 1
// Seminar a2(20);  //Execute the function 3
// // ii  = 
// Destructor, it is invoked as soon as the scope of the object gets over the function.
// // iii =
//  Constructor Overloading(*function*) ( Polymorphism )
// int main()
// {

//return 0;
// }

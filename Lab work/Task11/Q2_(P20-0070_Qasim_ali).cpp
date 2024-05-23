#include <iostream>
#include <string>
using namespace std;

class Test
{
    char paper[20];
    int marks;
public:
    Test ()    // Function 1
    {
        strcpy(paper, "Computer");
        marks = 0;
    }
    Test (char p[])    // Function 2
    {
        strcpy(paper, p);
        marks = 0;
    }
    Test (int m)    // Function 3
    {
        strcpy(paper,"Computer");
        marks = m;
    }
    Test (char p[], int m)    // Function 4
    {
        strcpy (paper, p);
        marks = m;
    }
};

// // //Ans is :-
// // //i =
//   Test t1;  // Execute the funtion 1
// Test e2("English"); // Execute the funtion 2
// Test e3(50); // Execute the funtion 3
// Test e4("Maths",49); // Execute the funtion 4
// // //ii =
//  Constructor Overloading (Polymorphism)
// int main()
// {

//     cout << "Hello world!" << endl;
//     return 0;
   
// }

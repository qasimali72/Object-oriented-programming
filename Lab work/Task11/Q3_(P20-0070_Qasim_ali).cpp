#include<iostream>
#include<string>
using namespace std;


class Sample
{
private:
int x;
double y;

public:
Sample(); //constructor 1
Sample(int); //constructor 2
Sample(int, int); //constructor 3
Sample(int, double); //constructor 4

};

////Ans is :-
//// 1 =
// Sample :: Sample()
// {
//     x = 0;
//     y = 0;
// }
// //ii =
// Sample :: Sample(int m)
// {
//     x = m;
//     y = 0;
// }
// // iii =
// Sample :: Sample(int m, int n)
// {
//     x = m;
//     y = n;
// }
// Sample :: Sample(int m, double n)
// {
//     x = m;
//     y = n;
// }

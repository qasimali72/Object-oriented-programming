#include <iostream>
#include <ctime>
using namespace std;

int main(){
    int n;
    srand(time(0));
    n = rand() % 100 +1;
    cout <<"The randomly selected is  : "<<n<<endl;


    return 0;
}
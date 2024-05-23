#include<iostream>
using namespace std;

struct  Date_of_brith
{
    string Day;
    int Month;
    int year;
};

struct  Employee
{
    string Name;
    int Emp_id;
    string Gender;
    struct  Date_of_brith;
    int Age;
};
struct  vegitable
{
    string vg1;
    string vg2;
};

struct  fruits
{
    string fr1;
    string fr2;
};
struct  food 
{
    vegitable vegis;
    fruits  froots;
};

int main(){
    //Date_of_brith E1;
    Employee E1;
    food f1;
    cout<<" Enter the data --> Employ name(string) ,Id(integer),Gender(String),Age{Day(string),Month(integer),year(interger)}: \n";
    cin>>E1.Name>>E1.Emp_id>>E1.Gender>>E1.Age.Day>>E1.Age.Month>>E1.Age.year;
    cout<<" \n.      \n.\n.\n.-->Employee Birthday   "<<E1.Age.Day<<" \n.       \n.\n.\n.     --->Employee Birthday Month       "<<E1.Age.Month;
    cout<<"\n.      \n.\n.\n.--->Employee Birthday year     "<<E1.Age.year<<endl;
    
    return 0;
}





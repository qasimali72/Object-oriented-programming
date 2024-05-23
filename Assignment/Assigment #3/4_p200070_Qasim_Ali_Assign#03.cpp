#include <iostream>
using namespace std;
class REPORT 
	// Declaring class
	{
	//Declaring  private members
	int adno;
	char name[20];
	float marks[5];
	float average;
	void GETAVG()
	{
average = (marks[0]+marks[1]+marks[2]+marks[3]+marks[4])/5;
}
public:
	//function protypes
	void READINFO();
	void DISPLAYINFO();
};
	void REPORT::READINFO() //Declaring members function outside the class
{
	do
	{
	cout<<"Enter 4 digit admission number : ";
	cin>>adno;
	}while(adno<999 || adno>10000);
	cout<<"Enter name : ";
	cin>>name;
	cout<<"Enter marks in "<<endl;
	for(int m=0;m<5;m++)
		{
		cout<<"Subject "<<m+1<<" : ";
		cin>>marks[m];
		};
		GETAVG();
}
	void REPORT::DISPLAYINFO() //Declaring members function outside the class
{
	cout<<"Admission number : "<<adno<<endl;
	cout<<"Name : "<<name<<endl;;
	cout<<"Marks are : "<< marks[0]<<" "<< marks[1]
	<<" "<<marks[2]<<" "<< marks[3]<<" "<< marks[4]<<endl;
	cout<<"Average : "<<average<<endl;;
	
}
int main()

//Main function
{
	REPORT obj; //Creating object of the class report

	//Calling function through object
	obj.READINFO(); 
	obj.DISPLAYINFO(); 
}


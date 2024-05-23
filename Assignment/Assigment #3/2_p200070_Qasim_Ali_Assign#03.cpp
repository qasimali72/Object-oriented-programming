#include <iostream>
using namespace std;
class FLIGHT // Declaring Flight
	{
private: //Declaring  private members


	int Flight;
	string Destination;
	float Distance;
	float Fuel;
	int CALFUEL()
	//condition function
{
	if (Distance <= 1000)
{
return 500;
}
	else if (Distance > 1000 && Distance <= 2000)
{
return 1100;
}
	else if (Distance > 2000)
{
return 2200;
}
	}
public:
	//Declaring members function as private function
	void FEEDINFO() //members function
	cout << "Enter Flight : ";
	cin >> Flight; //user enter the vale 
	cout << "Enter Destination : ";
	cin >> Destination; ////user enter the vale 
	cout << "Enter Distance : ";
	cin >> Distance; ////user enter the vale 
	Fuel = CALFUEL();
}
void SHOWINFO() //members function to show output the data
	cout << "Flight = " << Flight << endl;
	cout << "Destinstion = " << Destination << endl;
	cout << "Distance = " << Distance << endl;
	cout << "Fuel = " << Fuel << endl;
}
};
	int main() //main function call
	{
		FLIGHT a1;
		//creating object in main function
		a1.FEEDINFO(); //Calling function through object
		a1.SHOWINFO(); //Calling function through object
	}



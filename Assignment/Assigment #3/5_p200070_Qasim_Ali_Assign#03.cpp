#include <iostream>
using namespace std;
//Class time 
class time 
	{
	private: 
	//Declaring  private members
		int hours;
		int minutes;

		//public member function 
	public: 
		void settime(int h, int m)
	{
	hours = h;
	minutes = m;
}
	time sum(time);
	void showtime();
};
	times time ::sum(time TM)
{
	//function
	time t;
	t.minutes = minutes + TM.minutes;
	t.hours = t.minutes / 60;
	t.minutes = t.minutes % 60;
	t.hours += hours + TM.hours;
return t;
}
//Declaring function outside the class
	void time::showtime() 
{
	cout << hours << " hours and " << minutes << " minutes" << endl;
}
//Main function
int main() 
{
	times T1, T2, T3;
	//CREATING 3 OBJECTS OF CLASS TIME
	T1.settime(2, 45); //CALLING FUNCTION AND SETTING PARAMETERS FOR OBJECT 1
	T2.settime(3, 30); //CALLING FUNCTION AND SETTING PARAMETERS FOR OBJECT 2
	T3 = T1.sum(T2);
	cout << "\n Time 1 : ";
	T1.showtime();
	cout << "\n Time 2 : ";
	T2.showtime();
	cout << "\n Time 3 : ";
	T3.showtime();
	return 0;
}


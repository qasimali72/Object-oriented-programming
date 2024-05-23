#include<iostream>
using namespace std;
class BOOK
// Declaring class
	{
	//by defaut public member function 
	int BOOKNO;
	char BOOKTITLE[20];
	float PRICE;
	void TOTAL_COST(int N)
	{
		float tcost;
		tcost=PRICE*N;
		cout<<tcost;
}
public:
	void INPUT()
	//member function 
{
	//user input
	cout<<"Enter Book Number : ";
	cin>>BOOKNO; 
	cout<<"Enter Book Title : ";
	cin>>BOOKTITLE; 
	cout<<"Enter price per copy : ";
	cin>>PRICE; 
}
	void PURCHASE()

	//member function 
	{
	int n;
	cout<<"Enter number of copies to purchase : ";
	cin>>n;
	cout<<"Total cost is : ";
	TOTAL_COST(n);
	}
};
	int main()
	
//Main  function 
	{
	//Declaring  object
	BOOK obj;
	
	//Calling function through object
	obj.INPUT(); 
	obj.PURCHASE(); 
return 0;
}



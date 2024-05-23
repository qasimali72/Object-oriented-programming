#include <iostream>
using namespace std;
class TEST
						//CLASS DECLARATION
{
private:
	//DEFINING PRIVATE MEMBERS
	int TestCode;
	string Description;
	int NoCandidates;
	int CALCNTR()
	
{
	return (NoCandidates / 100 + 1);
}
public:
	void SCHEDULE();
	void DISPTEST();
	//char ch;

}; 					//function protypes
void TEST::SCHEDULE()
				//MEMBER FUNCTION OUTSIDE CLASS
{
	
	//char ch;
	
	cout<<"\nEnter you subject code name and Candidate "<<endl;

	cout << "Enter TestCode: ";
	cin >> TestCode;
	//Taking input
	cout << "Enter Description: ";
	cin.ignore();
	//Taking input
	getline(cin, Description);
	cout << "Enter No of Candidate: ";
	cin >> NoCandidates; 
	//Taking input for user
	int number_of_centers = CALCNTR();
	cout<<endl;
	cout<<" RESULT "<<endl;
	cout<<endl;
	
}
void TEST ::DISPTEST()
		{
		cout << "TestCode: " << TestCode << endl;
		//Taking output
		
		cout<< "Description: " << Description << endl;
		//Taking output

		
		cout<< "No of Candidates: " << NoCandidates << endl;
		cout<< "Number of centers: " << CALCNTR() << endl;
		}

	
int main()
//Main function 
	{
	TEST TEST;
	//Making object
	TEST.SCHEDULE(); // Calling function through object
	TEST.DISPTEST(); // Calling function through object
return 0;
	}

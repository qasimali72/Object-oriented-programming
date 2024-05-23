#include<iostream>      //including my header file
using namespace std;

class batman        //class definatio
{
        private:                    //thses are private date mambers
        int batcode;
        char batname[20];
        int innings , notout, runs;
        int batavg;
        int calcavg()
        {
                return runs/(innings-notout);
        }

        public:                                 //below data is public data and publice member function 
                                                //member function to set in private data member
        void readdate()
        {

            cout<<"Enter the batsman code : ";              //here we will get batsman code
            cin>>batcode;
            cout<<"Enter the batsman cname : ";                     //here we will get batsman name
            cin>>batname;
            cout<<"Enter innings , then notout and then runs : ";           //here we will get batsman innings , then notout and then runs
            cin>>innings>>notout>>runs;
            batavg = calcavg();             //calling the privte mamber function 
        } 
        void displaydate()
        {
            cout<<"Batsman code : "<<batcode<<endl<<"Batsman name :  "<<batname<<endl<<"Innings : "<<innings<<endl<<" Not out  "<<notout<<endl<<"Runs : "<<runs<<endl<<"Batting Average is : "<<batavg <<endl;
        }
};      //End of the class

int main()      //start of main function 
{

    batman man;                     //defining  class variable 
    man.readdate();                 //calling "readdate() " members function from class
    man.displaydate();                  //calling "displaydate() " members function from class
    return 0; 

} //end of the main function 

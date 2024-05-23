#include<iostream>
#include<math.h>
#include<strings.h>

using namespace std;
int main(){
    //OPERATER 
    float  total=500,obtained_marks,percentage;
    int math , OOP , DLD ,Cal_two , English;
    string student_name ;

    //CHAR FOR CHOISE AGINA (Y/N)
    char choise;

//DO WHILE LOOP
do
{

    //user enter the name of student
    cout<<"Enter the sudents name : "<<endl;
    cin>>student_name;

    //do while loop for if a number great than 100 they agina enter the number 
    do{
      
        //user enter the number 
        cout<<"Enter the Math marks : "<<endl;
        cin>>math;
        //condition of loop 
        if( math > 100 )
            cout << "Try Again!\n";
    }while(math > 100);
    

    //do while loop for if a number great than 100 they agina enter the number
    do{
        //user enter the number 
        cout<<"Enter the OOP marks : "<<endl;
        cin>>OOP;
        //condition of loop 
        if( OOP > 100 )
            cout << "Try Again!\n";
    }while(OOP > 100);



//do while loop for if a number great than 100 they agina enter the number
 do{
        //user enter the number 
        cout<<"Enter the DLD marks : "<<endl;
        cin>>DLD;
        //condition of loop 
        if( DLD > 100 )
            cout << "Try Again!\n";
    }while(DLD > 100);


//do while loop for if a number great than 100 they agina enter the number
 do{
        //user enter the number 
        cout<<"Enter the Cal_two marks : "<<endl;
        cin>>Cal_two;
        //condition of loop 
        if( Cal_two > 100 )
            cout << "Try Again!\n";
    }while(Cal_two > 100);



//do while loop for if a number great than 100 they agina enter the number
 do{
        //user enter the number 
        cout<<"Enter the English marks : "<<endl;
        cin>>English;
        //condition of loop 
        if( English > 100 )
            cout << "Try Again!\n";
    }while(English > 100);





//adding a number and storge in obtained_marks
    obtained_marks=math + OOP + DLD + Cal_two + English;

//find a percentage this is a formula 
    percentage=(obtained_marks*100)/total;


//cout the obtained_marks
    cout<<"The total number is "<<obtained_marks<<endl;

//cout the percentage
    cout<<"The percentage :  "<<percentage<<endl;

    

//choise  do you want agina (y/n)
    cout<<"Do you want add other list  (y/n)  : ";
    cin>>choise;

    //the || operater was not work sir       and           and i am && this operater was work
    //while (choise !='n' && choise !='N');                = its like this while (choise !='n' || choise !='N');
} while (choise !='n' && choise !='N');


    return 0;
}
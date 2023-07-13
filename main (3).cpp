/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

/*
Weather App

Name : Jayasri G
College : Vivekanandha College of Engineering for Women

Functions
Class and Object
Switch case
Conditional statements  */


#include <iostream>

using namespace std;
class Weather // Create a function
{
    public:
    void days()
    {
      int day;
      cout<<"Enter day:";
      cin>>day;
    switch(day) //switch case
    {
        
        case 1:
        cout<<"The weather report of Yesterday"<<endl;
        break;
       case 2:
        cout<<"The weather report of Today"<<endl;
        break;
        case 3:
        cout<<"The weather report of Tomorrow"<<endl;
        break;
        default:
        cout<<"Unavailable!!!!"<<endl;
        break;
        exit(day);
        
    }
    }
    
   void Temperature() //create a function
   {
     int t;
     {
        if(t<=100) //conditional statement
        {
        cout<<"The Temperature is Normal...!"<<endl;
        }
        else if(t>=100)
        {
        cout<<"The Temperature is too Hot....!"<<endl;
        }
        else
        {
        cout<<"The Temperature is Cool....!"<<endl;
        } 
    }
   }
};
int main()
{
    string loc;
    cout<<"Enter your location:"<<endl;
    cin>>loc;
    Weather jay;
    jay.days();
    jay.Temperature();
    return 0;
}

   
       
    
   
        
    

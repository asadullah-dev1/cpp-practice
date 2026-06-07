#include <iostream>
using namespace std;
int main(){
    char type;
    int age=0,hours=0;
    cout<<"Enter which type of emp are you\nPress R for Retired and Press E for Employed " <<endl;
    cin>>type;
        if ( type=='E' || type=='e'){
        cout<<" how many hours your worked "<<endl;
        cin>>hours;
        
         if (hours==8){
            cout<<" your total Salary is 1000 rupees "<<endl;
        }
        else if (hours>8 && hours<=11){
            cout<<"your salary is" << 1000 + ( hours-8 )*300 <<endl;
        }
        else {
            cout<<"Invalid hours! Work hours must be between 8 and 11 "<<endl;
        }
    }
    else if( type=='R' || type=='r' ){
        cout<<" Enter your age for pension eligibilty "<<endl;
        cin>>age;
    
      if(age>=60 && age<=70){
        cout<<" your pension is 30,000 "<<endl;
      }
      else if (age>70 && age<120){
      cout<<" your pension is 40,000 "<<endl;
      }
      else {
       cout<<" age below 60. Not eligible for pension "<<endl;
      }
    }
     else{
        cout<<" Invalid input! Please press E or R only "<<endl;
        
    }
    return 0;
    
    }
    
    

 
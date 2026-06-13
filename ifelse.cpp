// Write a program that asks the user to enter their age.
//  If age is 18 or above, print "You can vote." Otherwise print "You cannot vote yet."
#include<iostream>
using namespace std;
int main (){
    int age;
    cout<<"Enter your age " <<endl;
    cin>>age;
    if (age>=18)
    {
        cout<<" You can vote "<<endl;

    }
     else{

        cout<<"Sorry you can't vote"<<endl;

     }
     return 0;
}
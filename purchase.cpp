// A shop gives discounts based on purchase amount above 10,000 20% off,above 5,000 10% off,
// above 2,000 5% off, otherwise no discount.Take the amount,calculate and print the final price.
#include <iostream>
using namespace std;
int main(){
    int amount;
    cout<<" Enter amount of you're purchase "<<endl;
    cin>>amount;
    if(amount>10000){
        cout<<"you got 20% off" << amount-(amount*20/100)<<endl;
    }
    else if (amount>5000){
        cout<<"you got 10% discount " << amount-(amount*10/100)<<endl;

    }
    else if (amount>2000)
    {
        cout<<"you got 5% discount " << amount-(amount*5/100)<<endl;
    }
    else 
        cout<<" No discount "<<endl;
    
    
    return 0;

}
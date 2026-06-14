// A shop gives discounts based on purchase amount above 10,000 20% off,above 5,000 10% off,
// above 2,000 5% off, otherwise no discount.Take the amount,calculate and print the final price.
#include <iostream>
using namespace std;
int main(){
    int amount;
    cout<<" Enter amount of you're purchase "<<endl;
    cin>>amount;
    if(amount>10000){
        cout<<"you got 20% off"<<amount-(amount*20/100)<<endl;
    }
    return 0;

}
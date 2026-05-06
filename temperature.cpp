#include <iostream> 
using namespace std;
int main(){
    float fahrenheit;
    cout<<"Enter Fahrenheit "<<endl;
    cin>>fahrenheit;
    float celsius=(fahrenheit-32)*5/9;
    cout<<"The Temp in celsius is " << celsius <<endl;
    return 0;
}
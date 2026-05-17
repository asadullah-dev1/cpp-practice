#include <iostream>
using namespace std;
int main(){
    float a,b,c,d, result;
    int num2;
    cout<<"enter value for a,b,c,d and for num too "<<endl;
    cin>> a >> b >> c >> d >> num2;
    result=a*(b-c/d)+ ++num2;
    cout<<"the result will be " << result <<endl;
    return 0;
    
}
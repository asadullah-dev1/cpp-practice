#include <iostream> 
using namespace std;
union data{
    int i;
    float a;
    char c;
};
int main(){
    data d;
    cout << "Enter an integer: " << endl;
    cin>>d.i;

cout << " The number is "<< d.i << endl;


    return 0;
}
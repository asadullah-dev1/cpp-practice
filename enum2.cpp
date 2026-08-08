#include <iostream> 
using namespace std;
enum trafficlight{
    red,
    yellow,
    green,
};
int main (){
    int choice;
    cout << "Enter Num\n 0 for red \n 1 for yellow \n 2 for green " << endl;
    cin>> choice;
    switch(choice){
        case red:
        cout<< "Stop";
        break;
        case yellow:
        cout<< "Get Ready";
        break;
        case green:
        cout<<"Go";
        break;
        default:
        cout << "Invalid Num " ;

    }
    return 0;
}
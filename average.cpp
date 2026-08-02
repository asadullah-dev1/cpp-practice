// Find the sum and average of an array.
#include <iostream> 
using namespace std;
int main () {

        float arrays[5];
        float sum=0;
        for (int i=0; i<=4; i++){
            cout << "Enter any number " <<endl;
            cin>>arrays[i];
            sum= sum+arrays[i];
             
        }
        cout << " The sum of arrays is " << sum << endl;
        cout << " To take the average of this sum " <<endl;
        float average;
        average=(float)sum/5;
        cout << " The average of sum is " << average << endl;

    return 0;
}
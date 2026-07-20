// Take a number n from the user. Print all prime numbers from 2 to n.
//  (A prime number is only divisible by 1 and itself.)

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<< " Enter a Number " << endl;
    cin>>n;
    cout<< " prime num from 2 to n is =" <<endl;

    for(int num=2; num<=n; num++) {
        bool isprime=true;
 
        for (int i = 2 ; i < num ; i++){
            if (num % i == 0){
            isprime=false;
            break;
        }
    }
    
    if(isprime){
        cout<< num << " ";
    }
    
}
return 0;
}
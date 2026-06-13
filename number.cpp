// Take two numbers from the user. Print which number is greater. If they are equal, print
//  "Both are equal." Also print whether the greater number is even or odd.

#include <iostream>
using namespace std;
int main (){
    int n1,n2,greater;
    cout<<"Enter Number One "<<endl;
    cin>>n1;
     cout<<"Enter Number two "<<endl;
     cin>>n2;
    if(n1>n2){
        cout << n1<< " is greater " <<endl;
        greater = n1;

    } 
        else if(n2>n1){
            cout << n2  <<" is greater " <<endl;
                greater = n2;
        }
            else {
                cout<<"both are equal" <<endl;
                greater = n1;
            }
                if (greater%2==0)
                {
                    cout<< greater << " is even" <<endl;

                }
                else 
                {
                    cout<< greater << "is odd" <<endl;

                }
                return 0;

    }

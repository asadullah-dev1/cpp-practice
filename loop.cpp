// Print the multiplication table of any 
// number entered by the user (from 1 to 10).

#include <iostream>
using namespace std;
int main (){
    int num;
    cout<<" put any num between 1 to 10 "<<endl;
    cin>>num;
  for (int i = 1; i <=10; i++ )
  cout<<num<<"X"<<i <<"=" << num*i <<endl;
  return 0;
}
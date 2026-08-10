#include <iostream>
using namespace std;
void swapbyref(int *a , int *b){
    int temp = *a;
        *a = *b;
        *b = temp;
}
        int main(){
            int a=2;
            int b=3;
            cout << "  Before swapping " <<endl;
            cout << a   << "\n"  << b <<endl;
            cout << " After Swapping " <<endl;
            swapbyref(&a,&b);
            cout << a << "\n" << b <<endl;
            return 0;
        }




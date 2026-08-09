#include <iostream> 
using namespace std;
void  swap(int *a , int *b ){
    int temp = *a;
    *a = *b;
    *b = temp;

}
int main () {
    int a=1;
    int b=2;
    cout << " Before Swapping " <<endl;
    cout << a << "\n" << b <<endl;
    cout << " After Swapping " <<endl;
    swap(&a,&b);
    cout << a << "\n" << b << endl;
    return 0;
}
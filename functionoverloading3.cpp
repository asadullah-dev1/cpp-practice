#include <iostream> 
using namespace std;
// Calculate the volume of cylinder 
double  volume( int r , int h){
    return( 3.14 * r * r * h) ;
}
//Calculate the volume of Cube
int volume (int a){
    return a*a*a;
}
// Retangular Box 
int volume ( int l , int b , int h) {
    return (l * b * h);
}
int main() {
    cout << " The volume of cylinder is: " << volume(2 , 4 )<<endl;
    cout << " The volume of Cube is: "<< volume(9) <<endl;
    cout << " The volume of Retangular Box is: " << volume(8 , 5 , 1 )<<endl;
}
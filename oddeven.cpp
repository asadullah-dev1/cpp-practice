    #include <iostream>
    using namespace std;
    int main () {
        int arrays[6];
       
        for ( int i=0; i<6; i++){
            cout << "Enter any number " <<endl;
            cin>>arrays[i];
        }
         int even=0;
        int odd=0;
            for(int j=0; j<6; j++){       
                if(arrays[j]%2==0){
                    even++;
                    
                cout<<" This is an even numbers " << arrays[j] << endl;
                cout<<" The number of even count is " << even <<endl;      
            }
            
            else{
                odd++;
                cout<< "That's an odd number " << arrays[j]<<endl;
                cout<<"The number of odd count is "<< odd <<endl;
            }
        }
    }
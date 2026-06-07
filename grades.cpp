
#include <iostream> 
using namespace std;
int main(){
    int marks;
    cout<<" Enter your marks "<<endl;
    cin>>marks;
    if(marks <0 || marks>100){
        cout<<" Invalid Marks "<<endl;
    }
    else if (marks>=90){
        cout<<" you got A grade " <<endl;
    }
  else if (marks>=86 && marks<90 ){
        cout <<" you got A- grade "<<endl;
    }
  else if (marks>=81 && marks<86 ){
        cout <<" you got B+ grade "<<endl;
    }
      else if (marks>=77 && marks<81 ){
        cout <<" you got B grade "<<endl;
    }
      else if (marks>=72 && marks<77 ){
        cout <<" you got B- grade "<<endl;
    }
      else if (marks>=68 && marks<72 ){
        cout <<" you got C+ grade "<<endl;
    }
      else if (marks>=63 && marks<68 ){
        cout <<" you got C grade "<<endl;
    }
      else if (marks>=58 && marks<63 ){
        cout <<" you got C- grade "<<endl;
    }
      else if (marks>=54 && marks<58 ){
        cout <<" you got D+ grade "<<endl;
    }
      else if (marks>=50 && marks<54 ){
        cout <<" you got D grade "<<endl;
    }
    else{
        cout<<" Fail "<<endl;
    }
    
    return 0;
    
}
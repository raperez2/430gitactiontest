#include <iostream>
using namespace std;

int main(){
  string method;
  int firstnum, secnum, result;
  cout<<"Hello World\n";
  cout<<"Here is a basic calculator\n";
  cout<<"Add or Subtract?\n";
  cin>>method;
  cout<<"What first number?\n";
  cin>>firstnum;
  cout<<method<<"ed to\n";
  cin>>secnum;
  if(method == "Add" || method == "add"){
    cout<<"Adding "<<firstnum<<" to "<<secnum<<endl;
    result = firstnum + secnum;  
  }else if(method == "subtract" || method == "Subtract"){
    cout<<"Subtracting "<<firstnum<<" with "<<secnum<<endl;
    result = firstnum - secnum;    
  }else{
    cout<<"Error unknown method\n";
    return 0;
  }
  cout<<"Your result is "<<result<<endl;
  cout<<"Exiting...\n";
  return 0;
}

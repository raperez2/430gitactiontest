#include <iostream>
using namespace std;

int main(){
  string method;
  cout<<"Hello World\n";
  cout<<"Here is a basic calculator\n";
  cout<<"Add or Subtract?\n";
  cin>>method;
  while(method != "Add" || method != "Subtract" ||method != "add" || method != "subtract"){
    cout<<"Please specify Add or Subtract.\n";
    cin>>method;
  }
  cout<<"To be continued\n";
  return 0;
}

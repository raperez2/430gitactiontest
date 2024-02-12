#include <iostream>
using namespace std;

int main(){
  string method;
  int firstnum, secnum, result;
  cout<<"Hello World\n";
  cout<<"Here is a basic calculator\n";
  cout<<"Add or Subtract?\n";
  cin>>method<<endl;
  while(method != "Add" || method != "Subtract" ||method != "add" || method != "subtract"){
    cout<<"Please specify Add or Subtract.\n";
    cin>>method<<endl;
  }
  cout<<"What first number?\n";
  cin>>firstnum<<endl;
  cout<<method<<"ed to\n";
  cin>>secnum<<endl;
  switch(method):
    case 'Add' || 'add':
      cout<<"Adding "<<firstnum<<" to "<<secnum<<endl;
      result = firstnum + secnum;
      break;
    case 'Subtract' || 'subtract':
      cout<<"Subtracting "<<firstnum<<" with "<<secnum<<endl;
      result = firstnum - secnum;
      break;
    default:
      cout<<"Error unknown method\n";
      break;
  cout<<"Your result is "<<result<<endl;
  cout<<"Exiting...\n";
  return 0;
}

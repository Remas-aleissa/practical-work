#include<iostream>
using namespace std;

int main(){
  string str;
   //cin >> str; cin will take the input from the user untill whitespace.  
  getline(cin,str); //it will take the full line
  cout << str;

    return 0;
}
#include<iostream>
using namespace std;

inline void printMe(string str){
    cout<< str << endl; //inline will replace printMe("Hi Remas") with thos code;
}
int main(){
for(int i =0 ; i< 10000; i++){
    printMe("Hi Remas");
}

    return 0;
}
#include<iostream>
using namespace std;

inline void printMe(string str){
    cout<< str << endl;
}
int main(){
for(int i =0 ; i< 10000; i++){
    printMe("Hi Remas");
}

    return 0;
}
#include<iostream>
using namespace std;
class ClassOne{
public: 
void Set(int x){
    Number = x;
}
int Get(){
    return Number;
}
private:
int Number;

};
int main(){
ClassOne Object;
Object.Set(15);
cout<< Object.Get();


    return 0;
}
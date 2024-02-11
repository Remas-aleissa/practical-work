#include<iostream>
#include<string.h>
using namespace std;

class Person{
private:
string name;
int age;
float height;
public:
Person(){ //We are creating consructor by our own but, if we are not providing any constructor the compiler will include its own constructor that is default:
    name = "Null";
    age = 0;
    height = 0.0f;
} // we can leave the body blank or initialize Member variables with some known values
void getData(){
    cout<< endl << "Name:" <<name;
    cout<< endl << "Age:" <<age;
    cout<< endl << "Height:" <<age;
}
};
int main(){
    Person obj; 
    obj.getData(); //When we don't pass values with object then , DEFAULT constructor is called:
    return 0;
}

#include<iostream>
using namespace std;
class Point{
double x;
double y;
public:
Point() { x = 0; y = 0; cout<<"Default Called"<<endl;} 
Point (double X , double Y) {x = X; y = Y; cout<<"Parameterize Called"<<endl;} 
Point (const Point& rtu) { x = rtu.x; y = rtu.y; cout<<"Copy Called"<<endl;} 
};

int main(){
Point p1;
Point p2(1.3,3.4);
Point p3 = p1;
return 0;
}
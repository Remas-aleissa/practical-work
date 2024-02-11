#include<iostream>
using namespace std;
class Point{
double x;
double y;
public:
Point() { x = 0; y = 0;} //Default constructor
Point (double X , double Y) {x = X; y = Y;} //parameterize constructor
Point (const Point& rtu) { x = rtu.x; y = rtu.y;} //copy constructor
};

int main(){
Point p1;
Point p2(1.3,3.4);
Point p3 = p1;
return 0;
}
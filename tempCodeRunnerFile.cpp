#include <iostream>
#include<string>
using namespace std;

class Rectangle{
private:
int width;
int height;
public:
Rectangle(): width(1),height(1){}
int getWidth() const {
    return width;
    }
void setWidth(int w){
    width = w;
    }
    int getHeight () const {
        return height;
    }
    void setHeight(int h) {
        height = h;
    }
    int area() const{
        return width * height;
    }
    void display() const{
        cout<<"Regtangle("<<width<<","<<height<<")"<<endl;
    }

void compare (const Rectangle& r) const{
    cout<<"The biggest rectangle is:";
    if(area() > r.area()){
        cout<<"Rectangle ("<<width<<","<<height<<")"<<endl;
    }
    else if(area()< r.area()){
        cout<<"Rectangle("<<r.getWidth()<<","<<r.getHeight()<<")"<<endl;
    }
    else{
        cout<<"Both rectangles have the same area:"<<endl;
    }

}
};
int main(){
Rectangle rect1;
Rectangle rect2(4,5);
rect1.display();
rect2.display();
rect1.compare(rect2);
    return 0;
}
#include <iostream>
using namespace std;

class rectangle{
    protected:
        int width, height;
    public:
        rectangle(int _width, int _height) : width(_width), height(_height){}
        int area(){ return width * height; }
};

class square : public rectangle{
    public:
        square(int _side);
};

class cube : public rectangle{
    public:
        cube(int _side);
        int area(){ return 6 * width * width; }
};

class rectangularPrism : public rectangle{
    int length;
    public:
        rectangularPrism(int _width, int _height, int _length);
        int area(){ return 2 * (width * height + height * length + length * width); }
};
square::square(int _side) : rectangle(_side,_side){}   //LINE-1

cube::cube(int _side) : rectangle(_side,_side){}    //LINE-2


rectangularPrism::rectangularPrism(int _width, int _height, int _length)
 
    : rectangle(_width,_height),length(_length){}   //LINE-3

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(a == 1){
        rectangle *r = new rectangle(b, c);
        cout << r->area();
    }
    else if(a == 2){
        square *s = new square(b);
        cout << s->area();
    }
    else if(a == 3){
        cube *cb = new cube(b);
        cout << cb->area();
    }
    else if(a == 4){
        rectangularPrism *rp = new rectangularPrism(b, c, d);
        cout << rp->area();
    }
    return 0;
}

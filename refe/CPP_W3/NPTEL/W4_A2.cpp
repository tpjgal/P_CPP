#include<iostream>
using namespace std;

class positionVector{
    int x, y;
public:
    positionVector(int a, int b) : x(a), y(b) {}
   positionVector operator+(positionVector pv){    //LINE-1

        positionVector p(0,0);

        p.x = this->x+pv.x;                                     //LINE-2

        p.y = this->y+pv.y;                                     //LINE-3

        return p;
    }

    void print(){ cout << "(" << x << ", " << y << ")";	}
};

int main(){
    int x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    positionVector p1(x1,y1), p2(x2,y2), p3(0,0);
    p3 = p1+p2;
    p3.print();
    return 0;
}

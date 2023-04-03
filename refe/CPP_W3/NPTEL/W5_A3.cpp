#include<iostream>
using namespace std;

class Volume{
	int edge;
	public:
	Volume(int _edge) : edge(_edge){}
	int getVal() { return edge * edge * edge;}
};

class Area{
	int edge;
	public:
		Area(int _edge) : edge(_edge){}
		int getVal(){ return edge * edge; }
};

class Cube :public Volume,Area{   //Line-1

    public:
        Cube(int _edge) : Volume(_edge), Area(_edge){}

                   int getVolume(){Volume::getVal();}   //Line-2

    int getArea(){Area::getVal();}       //Line-3
};


int main()
{
	int a;
	cin >> a;
	Cube c(a);
	cout << c.getArea() << "" ,"" << c.getVolume();
	return 0;
}

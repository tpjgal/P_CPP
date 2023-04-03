#include<iostream>
#include<cctype>
using namespace std;

class Char{
    char ch;
    public:
Char(char _ch) : ch(toupper(_ch)){}    //LINE-1
        operator char(){ return ch; }        //LINE-2
        operator int(){ return ch - 'A'; }  //LINE-3
};

int main(){
    char c;
    cin >> c;
    Char cb = c;
    cout << (char)cb << ": position is " << int(cb);
    return 0;
}

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class rectangle
{
private:
    int length;
    int breadth;
public:
    rectangle ()
    {
        length=breadth=1;
    }
    rectangle(int l, int b); ///--------------1
    int area(); ///.................2
    int perimeter();
    int getlength() {return length;}///.............3
    void setlength(int l) {length = l; }///.........4
    ~rectangle(); ///.............5
};

rectangle::rectangle(int l, int b) /// see.......1
{
    length = l;
    breadth = b;
}

int rectangle::area() /// see....................2
{
    return length*breadth;
}

int rectangle::perimeter()
{
    return 2*(length+breadth);
}

rectangle :: ~rectangle(){}

int main()
{
    rectangle rimon(20,10);
    cout<<"the area of rectangle is:"<<rimon.area()<<endl;
    cout<<"the perimeter of rectangle is:"<<rimon.perimeter()<<endl;

    rimon.setlength(50);
    cout<<rimon.getlength()<<endl;

    return 0;
}

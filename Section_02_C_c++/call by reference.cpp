
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void swp(int &x, int &y)
{
    cout<<"&x="<<&x<<" and &y="<<&y<<endl;
    cout<<"x="<<x<<" and y="<<y<<endl; ///call by reference
    int temp;
    temp=x;
    x=y;
    y=temp;
    cout<<"after  swap     the value of x: -->"<<x<<" and y: -->"<<y<<endl;
}
int main()
{
    int x=500, y=100;
    cout<<"before swapping the value of x: -->"<<x<<" and y: -->"<<y<<endl;
    swp(x, y);  // passing value to function
 return 0;
}

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct triangle
{
    double base=0, height=0;
};

int main()
{
    struct triangle t1, t2;

    cin>>t1.base>>t1.height;

    cout<<"result for t1 ="<<(0.5)*t1.base*t1.height<<endl;
    return 0;
}

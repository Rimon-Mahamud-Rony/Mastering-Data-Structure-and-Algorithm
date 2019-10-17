#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void fun1(int n)
{
    if (n>0)
    {
        cout<<"n ="<<n<<" ";
        fun1(n-1);
    }
}

void fun2(int n)
{
    if (n>0)
    {

        fun2(n-1);
        cout<<"n ="<<n<<" ";
    }
}

int main()
{
    int c;
    cin>>c;

    fun1(c);
    cout<<endl;
    fun2(c);
}

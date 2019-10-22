#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int number (int n)
{
    if (n==0)
       return n=0;
    else
       return number(n-1)+n;
}

int main()
{
    int n;
    while (cin>>n)
    {
        cout<<number(n)<<endl;
    }
    return 0;
}

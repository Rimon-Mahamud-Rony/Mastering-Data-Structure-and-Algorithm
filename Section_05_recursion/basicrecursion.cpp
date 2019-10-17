#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int s =20;
void fun (int n)
{

    if (n>0)
    {
        cout<<"value of n-> === "<<n<<endl;
        cout<<"value of -<n === "<<s-n+1<<endl;
        fun (n-1);
    }
}

int main()
{
    int c;
    cout<<"input your number :";cin>>c;

    fun (c);
    return 0;
}

#include<iostream>
using namespace std;

void fun(int x)
{
    if(x>0)
    {
        cout<<x<<endl;
        fun(x-1);//calling itself is recursive function
        cout<<x<<endl;
    }
}

int main()
{
    int n=5;
    fun(n);
}
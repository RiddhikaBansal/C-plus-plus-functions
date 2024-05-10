#include<iostream>
using namespace std;

void swap(int a, int b)
{
    cout<<"enter numbers here: ";
    cin>>a>>b;
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"a is "<<a<<" b is "<<b<<endl;
    cout<<&a<<&b<<endl;//only value will be swapped//
}

int main()
{
    int a,b;
    swap(a,b);
    cout<<&a<<&b<<endl;
    return 0;
}
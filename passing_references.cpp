#include<iostream>
using namespace std;

void swap(int &a, int &b)
{
    cout<<&a<<&b<<endl;
    cout<<"enter numbers here: ";
    cin>>a>>b;
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"a is "<<a<<" b is "<<b<<endl;
    cout<<&a<<&b<<endl;//machine code treating function as a code of main (normally main function usually call void function//
}

int main()
{
    int a,b;
    cout<<&a<<&b<<endl;
    swap(a,b);
    cout<<&a<<&b<<endl;
    return 0;
}
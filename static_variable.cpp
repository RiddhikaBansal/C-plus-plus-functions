#include<iostream>
using namespace std;

void fun()
{
    int s=10;
    static int a=20;//don't initialise as a global variable but work only for function not for whole code
    s++;
    a++;
    cout<<s<<endl;
    cout<<a<<endl;
}

int main()
{
   fun();
   fun();
}
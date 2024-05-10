#include<iostream>
using namespace std;

int g=10;//global variable//terminate after whole code

int fun()
{
    int g=5;//local variable//terminate after completing of running of function
    g++;
    cout<<g<<endl;
}

int main(){
    cout<<g<<endl;
    fun();
    cout<<g<<endl;
}
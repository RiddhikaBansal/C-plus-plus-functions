#include<iostream>
using namespace std;


int Min(int a,int b)
{
    if(a<b)
    return a;
    
    else return b;
}

int Min(int a,int b, int c)
{
    if(a<b && a<c)
    return a;
    
    else if(c<a && c<b)
    return c;
    
    else return b;
}

float Min(float a,float b)
{
    if(a<b)
    return a;
    
    else return b;
}
int main()
{
    cout<<Min(10,5)<<endl;
    cout<<Min(12,7,9)<<endl;
    cout<<Min(18.0f,9.0f)<<endl;
}

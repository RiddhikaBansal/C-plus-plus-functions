#include<iostream>
using namespace std;

int pow(int m, int n)
{
    int p=1;
    for(int i=0;i<n;i++)
    {
        p=p*m;
    }
    return p;
}

int main()
{
    int m,n;
    cout<<"enter numbers here:";
    cin>>m>>n;
    cout<<"answer is:"<<pow(m,n);
}
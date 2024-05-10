#include<iostream>
using namespace std;

int my_max(int x=0, int y=0, int z=0) 
{
    return x>y && x>z ? x:(x>y ? x : y);
}

int main()
{
    cout << my_max() << endl;
    cout << my_max(4) << endl;
    cout << my_max(4, 9) << endl;
    cout << my_max(4, 9, 2) << endl;
    return 0;
}

#include<iostream>
using namespace std;

template <class T>
T my_max(T x, T y) 
{
    return (x>y) ? x : y;
}

int main()
{
    cout << my_max(4, 9) << endl;
    cout << my_max(4.6, 9.2) << endl;
    cout << my_max(4.0f, 9.2f) << endl;
    return 0;
}

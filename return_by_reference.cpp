# include<iostream>
using namespace std;
    
/*program for return by reference

*/
int& fun(int &x)
{
    cout<<x<<endl;
	return x;
}
int main()
{
	int a=10;
	fun(a)=25;
	cout<<a<<endl;
}
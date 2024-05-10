#include<iostream>
using namespace std;

int search(int a[], int key, int n)//void function doesn't return any value //void displayMessage() { cout << "This is a void function." << endl;} // int add(int a, int b) {return a + b;}


{
for(int i=0;i<n;i++)
if(key==a[i])

    return i;
    

return 0;
}
int main()
{
    int a[]={1,2,3,4,5,6,7,8,9,0};

    int k;
    cout<<"enter key here to be searched: ";
    cin>>k;
    int index=search(a,k,10);

    cout<<"key is found at "<<index+1<<endl;
    
}
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"No of rows : ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        //first i odd numbers
        for(int j=1;j<=2*n-1;j+=2)
        {
            cout<<j<<"  ";
        }
        cout<<endl;
    }
}
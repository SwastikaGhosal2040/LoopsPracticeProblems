#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter row no: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        //spaces
        for(int k=1;k<=n-i;k++)
        {
            cout<<" "<<"  ";
        }
        //num triangle
        for(int j=1;j<=i;j++)
        {
            cout<<j<<"  ";
        }
        //2nd triangle
        for(int q=i-1;q>=1;q--)
        {
            cout<<q<<"  ";
        }
        cout<<endl;
    }
}
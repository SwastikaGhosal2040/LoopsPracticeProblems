/*

Try to print this pattern:

*
   *
      *        
         *     
            *  



*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter row no : ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==j) cout<<"*"<<"  ";
            else     cout<<" "<<"  ";
        }
        cout<<endl;
    }
}
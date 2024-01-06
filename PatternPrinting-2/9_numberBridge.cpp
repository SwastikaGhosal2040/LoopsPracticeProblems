/*Print the following number bridge
1  2  3  4  5  6  7  
1  2  3     4  5  6  
1  2           3  4  
1                 2   

*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter row no: ";
    cin>>n;
    //2*n-1 numbers print
    for(int i=1;i<=2*n-1;i++)
    {
        cout<<i<<"  ";
    }
    cout<<endl;
    int m = n-1;//new lines
    int nsp = 1;
    for(int i=1;i<=m;i++)
    {
        //numbers
        int a = 1;
        for(int j=1;j<=m-i+1;j++)
        {
            cout<<a<<"  ";
            a++;
        }
        //spaces
        for(int k=1;k<=nsp;k++)
        {
            cout<<" "<<"  ";
        }
        nsp+=2;
        //numbers
        for(int j=1;j<=m-i+1;j++)
        {
            cout<<a<<"  ";
            a++;
        }
        cout<<endl;
    }

}
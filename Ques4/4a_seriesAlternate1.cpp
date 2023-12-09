//print the sum of the series:1-2+3-4+5-6...upto 'n'
#include<iostream>
using namespace std;
int main()
{
    int sum1=0;
    int sum2=0;
    int n;
    cout<<"Enter no:";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
          sum2=sum2+i;
        }
        else
        {
          sum1=sum1+i;
        }
    }
    cout<<"sum of the series: 1-2+3-4+5-6...upto "<<n<<" terms:"<<endl;
    cout<<sum1-sum2;

}

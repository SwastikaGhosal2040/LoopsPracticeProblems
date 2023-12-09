//print the sum of the series:1-2+3-4+5-6...upto 'n'
//easier method
#include<iostream>
using namespace std;
int main()
{
    int sum=0;
    int n;
    cout<<"Enter no:";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0) sum+=i;
        else  sum-=i;
        
    }
    cout<<"sum of the series: 1-2+3-4+5-6...upto "<<n<<" terms:"<<endl;
    cout<<sum;

}

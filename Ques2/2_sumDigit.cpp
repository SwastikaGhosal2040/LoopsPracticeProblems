#include<iostream>
using namespace std;
int main()
{
    int sum=0;
    int n;
    cout<<"Enter a number:";
    cin>>n;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    cout<<"Sum of digits:"<<sum;
}
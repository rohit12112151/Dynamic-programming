#include<bits/stdc++.h>
using namespace std;

int *cutrod(int length[],int price[],int n)
{
    int *dp=price;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<i;j++)
        {
            dp[i]=max(dp[i],price[j]+dp[i-j]);
        }
    }
    return dp;
}

int main(){
 
    int n;
    cin>>n;
    int length[n];
    int price[n];
    for(int i=1;i<=n;i++)length[i]=i;
    for(int i=1;i<=n;i++)cin>>price[i];
    int *d=cutrod(length,price,n);
    for(int i=1;i<=n;i++)cout<<d[i]<<" ";
    //for maximum revenue
    //cout<<d[n];
     
return 0;
}
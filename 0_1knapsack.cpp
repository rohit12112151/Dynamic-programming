#include<bits/stdc++.h>
using namespace std;
void knapsack(int weight[],int profit[],int n,int w)
{
     
    int arr[n+1][w+1];
    
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=w;j++)
        {
            arr[i][j]=0;
        }
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=w;j++)
        {
            if((j-weight[i-1])>=0)
            arr[i][j]=max(arr[i-1][j],profit[i-1]+arr[i-1][j-weight[i-1]]);
            else
            arr[i][j]=arr[i-1][j];
        }
    }
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=w;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    //cout<<arr[n-1][w-1];
}
int main(){
 
    int n;
    cin>>n;
    int weight[n];
    int profit[n];
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        weight[i]=x;
        profit[i]=y;
    }
    int w;
    cin>>w;

    knapsack(weight,profit,n,w);
     
return 0;
}
#include<bits/stdc++.h>
using namespace std;

void jobseq(int profit[],int deadline[],int n)
{
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(profit[i]<profit[j])
            {
                swap(profit[i],profit[j]);
                swap(deadline[i],deadline[j]);
            }
        }
    }
    int pro=0;

    bool slot[n]={false};
    for(int i=0;i<n;i++)
    {
        for(int j=deadline[i]-1;j>=0;j--)
        {
            if(slot[j]==false)
            {
                cout<<profit[i]<<" "<<deadline[i]<<endl;
                pro=profit[i]+pro;
                slot[j]=true;
                break;
            }
        }

    }
    cout<<"maximum profit from job = "<<pro;
    
}

int main(){
 
    #ifndef ONLINE_JUDGE
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif
     
  int n;
  cin>>n;
  int profit[n];
  int deadline[n];
  for(int i=0;i<n;i++)
  {
    int x,y;
    cin>>x>>y;
    profit[i]=x;
    deadline[i]=y;
  }

  jobseq(profit,deadline,n);

     
return 0;
}
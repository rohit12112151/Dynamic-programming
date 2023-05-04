#include<bits/stdc++.h>
using namespace std;
class group{
    public:
    int start,end;

    
};
bool operator < (group g1,group g2)
{
    return g1.end<g2.end;
}

void activityselection(group arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(arr[i].end>arr[j].end)
            {
               swap(arr[i],arr[j]);
            }
        }
    }

        group g;
        g.start=0;
        g.end=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i].start>g.end)
        {
            cout<<arr[i].start<<" "<<arr[i].end<<endl;
            g=arr[i];
        }

    }

}

int main(){
  
int n;
cin>>n;

group arr[n];
 for(int i=0;i<n;i++)
 {
    int x,y;
    cin>>x>>y;
    arr[i].start=x;
    arr[i].end=y;
 }

 activityselection(arr,n);


return 0;
}
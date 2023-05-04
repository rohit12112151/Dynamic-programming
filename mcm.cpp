// #include<bits/stdc++.h>
// using namespace std;

// void mcm(int arr[],int n)
// {
//     int dp[n+1][n+1]={0};
//     for(int len=2;len<n;len++)
//     {
//         int col=len;
//         for(int row=0;row<n-len;row++)
//         {
//             dp[row][col]=INT_MAX;
//             for(int k=row+1;k<col;k++)
//             {
//             dp[row][col]=min(dp[row][col],dp[row][k]+dp[k][col]+(arr[row]*arr[k]*arr[col]));
//             }
//             col++;
//         }
//     }
//     // cout<<dp[0][n-1];
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)cout<<dp[i][j]<<" ";cout<<endl;
//     }
// }

// int main(){
 
//      int n;
//      cin>>n;
//      int arr[n];
//      for(int i=0;i<n;i++)cin>>arr[i];

//      mcm(arr,n);
     
     
// return 0;
// }





//  return 0;
// }#include<bits/stdc++.h>
// using namespace std;
 
// int main() {
//     double a = 5.82443;
//     cout << setprecision(3); 
//     float c=a;
//     cout<<c;
    


    #include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int t;
  cin>>t;
  while(t--){
    float x1,y1,x2,y2,x3,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    if(x2-x1!=0){
    float m=float(y2-y1)/(x2-x1);
    if(m*x3-x3*x1+y1-y3==0)cout<<"yes"<<endl;
      else cout<<"no"<<endl;
    }
    // {cout<<"no"<<endl;}
    else{
        if(x3==x1)cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    
  }
  
  return 0;
}
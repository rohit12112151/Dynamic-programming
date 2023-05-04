// #include<bits/stdc++.h>
// using namespace std;

// int lcs(string s1,string s2,int n1,int n2)
// {
//     if(s1[n1]=='\0' || s2[n2]=='\0')return 0;
//     else if(s1[n1]==s2[n2])
//     {
//         return 1+lcs(s1,s2,n1+1,n2+1);
//     }
//     else return max(lcs(s1,s2,n1+1,n2),lcs(s1,s2,n1,n2+1));
// }

// int main(){
 
//    string s1,s2;
//    cin>>s1>>s2;
//    int ans=lcs(s1,s2,0,0);
//    cout<<ans;
     
// return 0;
// }



#include<bits/stdc++.h>
using namespace std;
int dp[20][20];

void lcs(string s1,string s2,int n1,int n2,int dp[20][20])
{
    for(int i=1;i<=s1.size();i++)
    {
        for(int j=1;j<=s2.size();j++)
        {
             if(s1[i-1]==s2[j-1])dp[i][j]=1+dp[i-1][j-1];
             else dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
        }
    }
    //cout<<dp[s1.size()-1][s2.size()-1];


    // for(int i=0;i<=s1.size();i++){
    // for(int j=0;j<=s2.size();j++)cout<<dp[i][j]<<" ";cout<<endl;

    // }

    // string str="";

    // for(int i=s1.size(),j=s2.size();i>0,j>0;)
    // {

    //     if(dp[i][j]==dp[i-1][j]){i--;}
    //         else if(dp[i][j]==dp[i][j-1]){j--;}


        
    //     else
    //     {
    //         str=s1[i-1]+str;
    //         i--;
    //         j--;
    //     }
        
        
    //}


    cout<<dp[s1.size()][s2.size()]<<endl;

    //cout<<str<<endl;

}

int main(){
  
  string s1,s2;
  cin>>s1>>s2;
   
    for(int j=0;j<=20;j++)
    {
        dp[0][j]=0;
        dp[j][0]=0;
    }
  
  lcs(s1,s2,0,0,dp);
    
     
return 0;
}
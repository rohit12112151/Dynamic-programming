#include <bits/stdc++.h>
using namespace std;

int solve(int arr[], int sum, int dp[])
{
    if (sum == 0)
        return 0;
    // if (sum < 0)
    //     dp[sum]= INT_MAX;
    //    int mini=INT_MAX;
    int ans = INT_MAX;
    for (int i = 0; i < 3; i++)
    {
        if(sum-arr[i]>=0)
        {
            int subans = 0;
        if (dp[sum - arr[i]] != -1)
        {
            subans = dp[sum - arr[i]];
        }
        else
            subans = solve(arr, sum - arr[i], dp);

        if (subans != INT_MAX && subans + 1 < ans)
        {
            ans = 1 + subans;
        }
        }
    }
    return dp[sum] = ans;
}

int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int sum;
    cin >> sum;
    int dp[sum + 1];
    for (int i = 0; i <= sum; i++)
        dp[i] = -1;
    dp[0] = 0;
    int ans = solve(arr, sum, dp);
    for (int i = 0; i <= sum; i++)
        cout << dp[i] << " ";
    // cout<<ans;

    return 0;
}
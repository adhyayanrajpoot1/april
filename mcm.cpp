#include<bits/stdc++.h>
using namespace std;
int mcmDP(int *arr , int n)
{
	
}
int mcmMemo(int *arr , int i , int j,vector<vector<int> >&dp)
{
	if(i>=j)return 0;
	if(dp[i][j]!=-1)return dp[i][j];
	int ans = INT_MAX;
	for(int k = i ; k < j ; k++)
	{
		int smallAns = mcmMemo(arr,i,k,dp)+mcmMemo(arr,k+1 , j,dp)+arr[i-1]*arr[k]*arr[j];
		ans = min(ans,smallAns);
	}
	dp[i][j] = ans;
	return ans;
}
int mcm(int *arr , int i , int j)
{
	if(i>=j)return 0;
	int ans = INT_MAX;
	for(int k = i ; k < j ; k++)
	{
		int smallAns = mcm(arr , i , k)+mcm(arr,k+1 , j)+arr[i-1]*arr[k]*arr[j];
		ans = min(ans , smallAns);
	}
	return ans;
}
int main()
{

// #ifndef ONLINE_JUDGE
// 	freopen("input.txt","r" ,stdin);
// 	freopen("output.txt","w" ,stdout);
// #endif
	int arr[] = {10, 20, 30, 40, 30};
	cout << mcm(arr , 1,4)<<endl;
	vector<vector<int> >dp(5,vector<int>(5,-1));
	cout << mcmMemo(arr , 1,4,dp)<<endl;


	
}
#include<bits/stdc++.h>
using namespace std;
int solve2(int *arr,  int n)
{
	int result = 0;
	for(int i = 1 ; i < n ; i++)
	{
		if(arr[i] >arr[i-1])
		{
			result+=(arr[i]-arr[i-1]);
		}
	}
	return result;
}
int solve(int *arr,  int si , int ei)
{
	if(si>=ei)return 0;
	int result = 0;
	for(int i = si ; i < ei ; i++)
	{
		for(int j = i+1 ;  j<=ei ; j++)
		{
			if(arr[j]>arr[i])
			{
				int small_result = arr[j] - arr[i] + solve(arr,si , i-1) + solve(arr , j+1 , ei);
				result = max(result , small_result);
			}
			
		}
		
	}return result;
}

int main()
{

// #ifndef ONLINE_JUDGE
// 	freopen("input.txt","r" ,stdin);
// 	freopen("output.txt","w" ,stdout);
// #endif
	int arr[] = {1,5,3,8,12};
	cout << solve(arr , 0 , 4)<<endl;
	cout << solve2(arr , 5)<<endl;


	
}
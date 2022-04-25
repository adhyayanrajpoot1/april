#include<bits/stdc++.h>
using namespace std;
//bruteforce approah O(n2);
bool solve(vector<int>&arr)
{
	int n = arr.size();
	for(int i = 0 ; i < n ; i++)
	{
		for(int j = i+1;j<n;j++)
		{
			if(arr[i]>arr[j])return false;
		}
	}
	return true;
}
bool solve1(vector<int>&arr)
{
	int n = arr.size();
	for(int i = 1 ; i < n ; i++)
	{
		if(arr[i]<arr[i-1])return false;
	}
	return true;
}
int main()
{
	vector<int>arr;
	int n ;
	cin >> n;
	for(int i = 0 ; i < n ; i++)
	{
		int data;
		cin >> data;
		arr.push_back(data);
	}
	cout << solve(arr)<<endl;
	cout << solve1(arr)<<endl;

	
}
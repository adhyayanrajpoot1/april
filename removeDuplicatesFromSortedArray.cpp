#include<bits/stdc++.h>
using namespace std;
void solve1(vector<int>&arr)
{
	int n = arr.size();
	int res = 1;
	for(int i = 1 ; i < n ; i++)
	{
		if(arr[res-1]!=arr[i])
		{
			arr[res] = arr[i];
			res++;
		}

	}
	arr.erase(arr.begin()+res,arr.end());
	for(int i = 0 ; i < arr.size() ; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
void solve(vector<int>&arr)
{
	int n = arr.size();
	int res = 1;
	vector<int>ans;
	ans.push_back(arr[0]);
	for(int i = 1 ; i < n ; i++)
	{
		if(ans[res-1]!=arr[i])
		{
			ans.push_back(arr[i]);
			res++;
		}
	}
	for(int i = 0 ; i < ans.size() ; i++)
	{
		cout << ans[i] << " ";
	}
	cout << endl;

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
	sort(arr.begin(),arr.end());
	solve(arr);
	solve1(arr);

	
}
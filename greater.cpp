#include<bits/stdc++.h>
using namespace std;
int solve1(vector<int>&arr)
{
	int n = arr.size();
	int index = 0;
	for(int i = 1 ; i< n ; i++)
	{
		if(arr[i]<arr[index])
		{
			index = i;
		}
	}
	return index;
}
int solve(vector<int>&arr)
{
	//bruteforce approach
	int n = arr.size();
	int gIndex = 0;
	for(int i = 0 ; i < n ; i++)
	{
		bool flag = true;
		for(int j = 0 ; j < n ; j++)
		{
			if(arr[i]<arr[j])
			{
				flag = false;
				gIndex = j;
				break;
			}
		}
		if(flag)return gIndex;
	}return -1;
}
int main()
{

	vector<int>arr;
	int n;
	cin >> n;
	for(int i = 0 ;i < n ; i++)
	{
		int data;
		cin >> data;
		arr.push_back(data);
	}
	cout << arr[solve(arr)] <<endl;
	cout << arr[solve1(arr)] <<endl;
	
}
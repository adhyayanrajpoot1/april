#include<bits/stdc++.h>
using namespace std;
//optimised approach
int solve2(vector<int>&arr)
{
	int res = -1;
	int largest = 0;
	int n = arr.size();
	for(int i = 1 ; i < n ; i++)
	{
		if(arr[i]>arr[largest])
		{
			res = largest;
			largest = i;
		}
		else if(arr[i]!=arr[largest])
		{
			if(res==-1 or arr[i]>arr[res])
			{
				res = i;
			}
		}
	}
	return res;
}









//second largest
//first find out the largest element
// then ignore tthe largest one
int largest1(vector<int>&arr)
{
	int res=0;
	for(int i = 0 ; i < arr.size() ; i++)
	{
		if(arr[i]>arr[res])
		{
			res = i;
		}
	}
	return res;
}
int solve(vector<int>&arr)
{
	int n = arr.size();
	int largest = largest1(arr);
	int index = -1;
	for(int i = 0 ; i < n ; i++)
	{
		if(arr[i]!=arr[largest])
		{
			if(index ==-1)
			{
				index = i;
			}
			else
			{
				if(arr[i]>arr[index])
				{
					index = i;
				}
			}
		}
	}
	return index;
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
	cout << solve(arr) <<endl;
	cout << solve2(arr) <<endl;
	
}
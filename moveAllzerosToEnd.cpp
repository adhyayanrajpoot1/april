#include<bits/stdc++.h>
using namespace std;
void solve3(vector<int>arr)
{
	int n = arr.size();
	int count=0;
	for(int i = 0 ; i < n ; i++)
	{
		if(arr[i]!=0)
		{
			swap(arr[count] , arr[i]);
			count++;
		}
	}

	for(int i = 0 ; i < n ; i++)
	{
		cout << arr[i] << " ";
	}
}


void solve2(vector<int>arr)
{
	int n = arr.size();
	for(int i = 0 ; i < n ; i++)
	{
		if(arr[i]==0)
		{
			for(int j = i+1 ; j < n ; j++)
			{
				if(arr[j]!=0)
				{
					swap(arr[i],arr[j]);
					break;
				}
			}
		}
	}
	for(int i = 0 ; i < n ; i++)
	{
		cout << arr[i] << " ";
	}
}
void solve(vector<int>arr)
{
	int n = arr.size();
	int count=0;
	int ind = 0;
	for(int i = 0 ; i  < n ; i++)
	{
		if(arr[i]==0)count++;
		else
		{
			arr[ind++]=arr[i];

		}
	}
	for(int i = 0 ; i <= count ; i++)
	{
		arr[ind++] = 0;
	}
	for(int i = 0 ; i < n ; i++)
	{

		cout << arr[i] << " ";
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
	solve(arr);
	solve2(arr);
	cout << endl;
	solve3(arr);
	
	// for(auto i : arr)
	// {
	// 	cout << i << " ";
	// }
	

	
}
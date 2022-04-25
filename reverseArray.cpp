#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>&arr)
{
	int n = arr.size();
	int left = 0;
	int right = n-1;
	while(left<=right)
	{
		int temp = arr[left];
		arr[left++] = arr[right];
		arr[right--] = temp;
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
	

	
}
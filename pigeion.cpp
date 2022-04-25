#include<bits/stdc++.h>
using namespace std;
int ans = 0;
int ans2=0;
int solve(string&str)
{
	int n = str.size();
	
	for(int i = n-1 ; i>=1 ; i--)
	{
		if(str[i-1]=='R' && str[i]=='L')
		{
			str[i]='R';
			ans2+=1;
		}
		
		else
		{
			continue;
		}
	}
	return ans2;
}
int solve2(string&str)
{
	int n = str.size();
	
	for(int i = n-1 ; i>=1 ; i--)
	{
		if(str[i-1]=='R' && str[i]=='L')
		{
			str[i-1]='L';
			ans+=1;
		}
		
		else
		{
			continue;
		}
	}
	return ans;
}
int main()
{

// #ifndef ONLINE_JUDGE
// 	freopen("input.txt","r" ,stdin);
// 	freopen("output.txt","w" ,stdout);
// #endif
	string str;
	cin >> str;
	int n = str.size();
	string str1= str;
	if(n>2)
	{
		cout <<  min(solve2(str),solve(str1))<<endl;
	}
	else cout<< 0 << endl;


	
}
#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string str , int i , int j)
{
	if(i>=j)return true;
	if(str[i]==str[j])
	{
		return isPalindrome(str , i+1 , j-1);
	}
	return false;
}
int palindromePartitioning(string str , int i , int j)
{
	if(i>=j)return 0;
	if(isPalindrome(str, i , j))return 0;
	int ans = INT_MAX;
	for(int k = i ; k < j ; k++)
	{
		int smallAns = palindromePartitioning(str,i,k)+palindromePartitioning(str ,k+1 , j)+1;
		ans=  min(ans,smallAns);
	}
	return ans;
}
int main()
{
	string str;
	cin >>str;
	cout << palindromePartitioning(str , 0 , str.length()-1)<<endl;
	
}
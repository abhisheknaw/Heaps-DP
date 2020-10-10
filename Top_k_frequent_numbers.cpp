#include <bits/stdc++.h>
using namespace std;

void kfrequent(vector<int>&nums,int k)
{
	int i;
	unordered_map<int,int>mp;
	for(i=0;i<nums.size();i++)
	{
		mp[nums[i]]++;
	}
	priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>minh;
	for(auto i=mp.begin();i!=mp.end();i++)
	{
		minh.push({i->second,i->first});
		if(minh.size()>k)
		{
			minh.pop();
		}
	}
	while(minh.size()>0)
	{
		cout<<minh.top().second<<" "<<minh.top().first<<" ";
		minh.pop();
		cout<<endl;
	}
    
}

int main() 
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("input.txt", "r", stdin);
	// for writing output to output.txt
	freopen("output.txt", "w", stdout);
#endif
	int n,k,element;
	cin>>n;
	cin>>k;
	vector<int>nums(n);
	for(int i=0;i<n;i++)
	{
		cin>>nums[i];
	}
	kfrequent(nums,k);
	return 0;
}	


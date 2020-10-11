#include <bits/stdc++.h>
using namespace std;

void frequency_sort(vector<int>&nums)
{
	int i;
	unordered_map<int,int>mp;
	for(i=0;i<nums.size();i++)
	{
		mp[nums[i]]++;
	}
	priority_queue<pair<int,int>>maxH;
	for(auto i=mp.begin();i!=mp.end();i++)
	{
		maxH.push({i->second,i->first});
	}
	while(maxH.size()>0)
	{
		int freq=maxH.top().first;
		int ele=maxH.top().second;
		for(i=0;i<freq;i++)
		{
			cout<<ele<<" ";
		}
		maxH.pop();
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
	int n;
	cin>>n;
	vector<int>nums(n);
	for(int i=0;i<n;i++)
	{
		cin>>nums[i];
	}
	frequency_sort(nums);
	return 0;
}	


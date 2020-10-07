#include <bits/stdc++.h>
using namespace std;

void klargest(vector<int>&nums,int k)
{
	priority_queue<int,vector<int>,greater<int>>minHeap;
	for(int i=0;i<nums.size();i++)
	{
		minHeap.push(nums[i]);
		if(minHeap.size()>k)
		{
			minHeap.pop();
		}

	}
	while(minHeap.size()>0)
	{
		cout<<minHeap.top()<<" ";
		minHeap.pop();
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
	int n,k;
	cin>>n;
	cin>>k;
	vector<int>nums(n);
	for(int i=0;i<n;i++)
	{
		cin>>nums[i];
	}
	klargest(nums,k);
	return 0;
}	


#include <bits/stdc++.h>
using namespace std;

void kclosest(vector<int>&nums,int k,int element)
{
	priority_queue<pair<int,int>>maxHeap;
	for(int i=0;i<nums.size();i++)
	{
		maxHeap.push({abs(nums[i]-element),nums[i]});
		if(maxHeap.size()>k)
		{
			maxHeap.pop();
		}

	}
	while(maxHeap.size()>0)
	{
		cout<<maxHeap.top().second<<" ";
		maxHeap.pop();
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
	cin>>element;
	vector<int>nums(n);
	for(int i=0;i<n;i++)
	{
		cin>>nums[i];
	}
	kclosest(nums,k,element);
	return 0;
}	


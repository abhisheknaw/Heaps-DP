#include <bits/stdc++.h>
using namespace std;

int ksmallest(int nums[],int k,int n)
{
	priority_queue<int>maxHeap;
	for(int i=0;i<n;i++)
	{
		maxHeap.push(nums[i]);
		if(maxHeap.size()>k)
		{
			maxHeap.pop();
		}

	}
	return maxHeap.top();
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
	int n,k1,k2;
	int sum=0;
	cin>>n;
	cin>>k1;
	cin>>k2;
	int nums[n];
	for(int i=0;i<n;i++)
	{
		cin>>nums[i];
	}
	int first=ksmallest(nums,k1,n);
	int second=ksmallest(nums,k2,n);
	for(int i=0;i<n;i++)
	{
		if(nums[i]>first && nums[i]<second)
		{
			sum=sum+nums[i];
		}
	}
	cout<<sum;
	return 0;
}	


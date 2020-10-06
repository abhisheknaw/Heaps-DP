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
	int n,k;
	cin>>n;
	cin>>k;
	int nums[n];
	for(int i=0;i<n;i++)
	{
		cin>>nums[i];
	}
	int answer=ksmallest(nums,k,n);
	cout<<answer;
	return 0;
}	


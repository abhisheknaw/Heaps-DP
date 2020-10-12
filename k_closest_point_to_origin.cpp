#include <bits/stdc++.h>
using namespace std;

void origin(vector<vector<int>>&nums,int k)
{
	int i;
	priority_queue<pair<int,pair<int,int>>>maxH;
	for(i=0;i<nums.size();i++)
	{
		maxH.push({nums[i][0]*nums[i][0]+nums[i][1]*nums[i][1],{nums[i][0],nums[i][1]}});
		if(maxH.size()>k)
		{
			maxH.pop();
		}
	}
	while(maxH.size()>0)
	{
		pair<int,int>p=maxH.top().second;
		cout<<p.first<<" "<<p.second;
		cout<<endl;
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
	int n,m,k;


	
	cin>>n;
	cin>>m;
	cin>>k;
	vector<vector<int>>nums(n,vector<int>(m));
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>nums[i][j];
		}
		cout<<endl;
	}
	origin(nums,k);
	return 0;
}	


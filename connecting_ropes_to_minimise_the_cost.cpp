#include <bits/stdc++.h>
using namespace std;
int connecting(vector<int>ropes)
{
	int cost=0;
	priority_queue<int,vector<int>,greater<int>>minH;
	for(int i=0;i<ropes.size();i++)
	{
		minH.push(ropes[i]);
	}
	while(minH.size()>=2)
	{
		int first=minH.top();
		minH.pop();
		int second=minH.top();
		minH.pop();
		cost=cost+first+second;
		minH.push(first+second);
	}
	return cost;
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
	vector<int>ropes(n);
	for(int i=0;i<n;i++)
	{
		cin>>ropes[i];
	}
	int t_cost=connecting(ropes);
	cout<<t_cost;
	return 0;
}	
#include<stdio.h>
#include<iostream>
#include<map>
#include<set>
#include<vector>
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
map<int ,vector<int>>m;
set<int> s;
int q;
int n,m,lib,road;
int go(v)
{
	int res = 1;
	s.insert(v);
	for(int i = 0;i<m[v].size();i++)
		if(!(s.find(m[v][i]) == s.end())
			res = res+go(m[v][i]);
	return res;
}
int main()
{
	cin>>q;
	while(q-->0)
	{	
		cin>>n>>m>>lib>>road;
		for(int i =1;i<=n;i++)
			m[n].clear();
		for(int i=0;i<m;i++)
		{
			int u,v;
			m[u].push_back(v);
			m[v].push_back(u);
		}	
			
	
	ll res =0;
	for(int i =1;i<=n;i++)
	{
		if(s.find(i) == s.end)
			continue;
		int size = go(i);
		res += lib + (ll)(size-1) * min(road,lib);
		
	}
		cout<<res<<"\n";
	
	}

}

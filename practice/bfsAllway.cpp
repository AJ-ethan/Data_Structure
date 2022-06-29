#include<bits/stdc++.h>
//#include <bits/stdc++.h>
using namespace std;


// this structure stores information
// about a particular cell i.e
// path upto that cell and cell's
// coordinates
struct info {
    vector<int> path;
    int i;
    int j;
};
void printAllpaths(vector<vector<int>>&vec)
{
	int n = vec.size();
	int m=vec[0].size();
	queue<info> q;
	q.push({ {vec[0][0]}, 0,0});
	
	while(!q.empty())
	{
		info p = q.front();
		q.pop();
		
		if(p.i == n-1 && p.j == m-1)
		{
			for(auto x:p.path)
				cout<<x<<" ";
			cout<<"\n";
			
		}
		else if(p.i==n-1)
		{
			vector<int>temp = p.path;
			temp.push_back(vec[p.i][p.j+1]);
			q.push({temp,p.i,p.j+1});
			
		}
		else if(p.j==m-1)
		{
			vector<int>temp = p.path;
			temp.push_back(vec[p.i+1][p.j]);
			q.push({temp,p.i+1,p.j});
		}
		else
		{
			vector<int>temp = p.path;
			temp.push_back(vec[p.i+1][p.j]);
			q.push({temp,p.i+1,p.j});
			
			temp.pop_back();
			temp.push_back(vec[p.i][p.j+1]);
			q.push({temp,p.i,p.j+1});
		}
		
	}
	

}

int main()

{
	vector<vector<int>>vec{
				{1,2,3},
				{4,5,6},
				{7,8,9}
				};
	printAllpaths(vec);
}

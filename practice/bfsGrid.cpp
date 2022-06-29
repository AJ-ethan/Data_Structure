#include<iostream>
#include<queue>
#include<map>

#include <bits/stdc++.h>
using namespace std;
#define row 4
#define col 4

int rd[]={-1,0,1,0};
int cd[]= {0,-1,0,1};

bool isvalid(bool vis[][col],int adjx,int adjy)
{
	if (adjx < 0 || adjy < 0
        || adjx >= row || adjy >= col)
        return false;
 
   	 // If cell is already visited
    		if (vis[adjx][adjy])
        	return false;
 
    	// Otherwise
    	return true;
}

void bfs(int grid[][col],bool vis[][col],int r,int c)
{
	
	queue<pair<int,int>>q;
	
	q.push({r,c}); //take start vertix and take and make it peramanant 
	vis[r][c] = true;
	
	// iterate until q NOT BECOME EMPTY
	while(!q.empty())
	{
		pair<int,int> cell = q.front();
		int x = cell.first;
		int y = cell.second;
		cout << grid[x][y] << " ";
		q.pop();
		
		for(int i =0;i<4;i++)
		{
			int adjx = x + rd[i]; //move to adjacency position in the x 
			int adjy = y + cd[i];
			
			if(isvalid(vis, adjx,adjy))
			{
				q.push({adjx,adjy});
				vis[adjx][adjy] = true;
			}
		}
	}
	 
}


int main()
{
	 int grid[row][col] = { { 1, 2, 3, 4 },
                           { 5, 6, 7, 8 },
                           { 9, 10, 11, 12 },
                           { 13, 14, 15, 16 } };
        bool vis[row][col];
        memset(vis, false, sizeof(vis));
        
        bfs(grid,vis,0,0);
 
}

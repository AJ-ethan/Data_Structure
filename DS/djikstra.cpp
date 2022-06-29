#include<stdio.h>
#include<vector>
#define MAX 100
#define perma 1
#define Nil -1
#define infinity 9999
int n,Temp=0;
using namespace std;
int adj[MAX][MAX];
int predecessor[MAX];
int pathLength[MAX];
int status[MAX];
void create_graph();
void Dijkstra(int s);
int min_temp();





int main()

{
	int s,v;
	create_graph();
	printf("enter the source vertics : ");
	scanf("%d",&s);
	Dijkstra(s);
	while(1)
	{
		printf("enter the destination ");
	}
	
}
void Dijkstra(int s)
{
	int i,current;
	// make all vertices temporary
	for(i=0;i<n;i++)
	{
		predecessor[i] = Nil;
		pathLength[i] = infinity;
		status[i] = Temp;
	}
	pathLength[s] = 0;// shource vertex path lenght must be zero
	while(1)
	{
		// search foe temporary vertex with minimu path length and make it permanant 
		current = min_temp();
		if(current==Nil)
			return;
		status[current] = perma;
		for(i= 0;i<n;i++)
		{
			if(adj[current][i]!=0 && status[i] == Temp)
				if(pathLength[current]+adj[current][i]<pathLength[i])
				{
					predecessor[i] = current;
					pathLength[i] = pathLength[current]+adj[current][i];
				}
		}
		
	}
}// really inmportant function, it checks the all the paths and returns the minimum value from it,check from all predeccesor 
void findPath(int s,int v)
{
	int i,u;
	int path[MAX];
	int shortDist = 0;
	int count = 0;
	while(v!=s)
	{
		count++;
		path[count] = v;
		u = predecessor[v];
		shortDist = 0;
		v = u;
	}
	count++;
	path[count]=s;
	printf("shortest path is : ");
	for(i=count;i>=1;i++)
		printf("%d ",path[i]);
	printf("\n Shortest Distance is %d \n",shortDist);
}
int min_temp()
{
	int i; 
	int min= infinity;
	int k = Nil;
	for(i=0;i<n;i++)
	{
		if(status[i] == Temp && pathLength[i]<min)
		{
			min = pathLength[i];
			k = i;
		}
	}
	return k;
}
void create_graph()
{
	int i,max_edges,origin,destin,wt;
	printf("enter the no vertics : ");
	scanf("%d",&n);
	max_edges = n*(n-1);
	for(i=1;i<=max_edges;i++)
	{
		printf("enter edge %d(-1,-1) to quit : ",i);
		scanf("%d%d",&origin,&destin);
		if(origin==-1||destin ==-1)
			break;
		printf("enter the wieght: ");
		scanf("%d",&wt);
		if(origin >=n || destin>=n || origin <0 || destin<0){
			printf("invalid edge");
			i--;}
		else
			adj[origin][destin] = wt;
			
	}
}


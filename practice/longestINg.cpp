#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int i,j,max=0,sum=0;
	int G,B,H,v;
	cin>>G;
	cin>>B>>H;
	vector<int> h;
	for(i=0;i<G;i++){
		cin>>v;
		h.push_back(v);
		sum += B*v*H;
		}
	int n=h.size(),top=-1;
	int left[n],right[n],stack[n];
	for(i=0;i<n;i++)
	{
	
		if(i==0){
			top++;
			left[i]=0;
			stack[top]=0;
			}
		else{
		//j=i-1;
		while(top!=-1 && h[i]<=h[stack[top]])
			top--;
		left[i] = top==-1?0:stack[top]+1;
		top++;
		stack[top]=i;
		}
	}
	//for(j=0;j<n;j++)
		//cout<<left[j]<<"\n";
	top = -1;
	for(i=n-1;i>=0;i--)
	{
		if(i==n-1)
		{
			top++;
			right[i] = n-1;
			stack[top] = i;
		}
		else
		{
			while(top!=-1 && h[i]<=h[stack[top]])
				top--;
			right[i] = top==-1?n-1:stack[top]-1;
			top++;
			stack[top]=i;
		}

	}
	int temp;
	for(int i=0;i<n;i++)
	{
		temp = h[i]*(right[i]-left[i]+1)*B*H;
		if(max<temp)
			max=temp;
	}
	cout<<sum-max<<"\n";

}

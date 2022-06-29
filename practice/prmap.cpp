#include<iostream>
#include<map>
#include<vector>
using namespace std;

int main()
{
	map<int, vector<int>> m;
	m[1].push_back(5);
	m[8];
	for(int i =0;i<5;i++)
		m[i].push_back(i);
	//for(int i=0;i<5;i++)
	//	for(int j=0;j<m[i].size();j++)
	//		cout<<m[i][j]<<"\t";
	//	cout<<m(
	for(const auto&pair:m)
	{
		cout<<"key: "<<pair.first << " value :[ ";
		
		for(int i:pair.second)
			cout<< i << "  ";
		cout<<"]  \n";
	}

}

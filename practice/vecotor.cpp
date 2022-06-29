#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<vector<int>> v = {
		{1,2},{2,4}
	};
	int a=2,b=4;
	if (find(v.begin(), v.end(), {a,b}) != v.end()) {
        cout << "Element found";
    }
    else {
        cout << "Element not found";
    }
	/*for(int i=0;i<2;i++)
		for(int j=0;j<2;j++)
			cout<<v[i][j]<<endl;
	for(const auto &pair:v)
	{
		cout<<"first "<<pair<<"\n second: "; 
	}*/
	
	
}

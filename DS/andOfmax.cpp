#include <iostream>
#include<vector>
#define ll long long 
using namespace std;

int main() {
	// your code goes here
	vector<ll> v;
	vector<ll> p;
	int t,k,n,c,max,j;
	ll ele;
	cin>>t;
	for(int k=0;k<t;k++){
	   
	cin >>n>>k;
		
		for(int i=0;i<n;i++)
		{
		    cin>>ele;
		    v.push_back(ele);
		}
		if(k>1){
			c = 0;
			while(c<n)
			{
			    max = 0;
			   j =0;
			    while(j<k && c<n)
			    {
				if(max<v[c])
				    max = v[c];
				c++;
				j++;
			    }
			    p.push_back(max);
			    
			}
			ll max = 0;
			for(int i=0;i<p.size();i++)
			    for(j=i+1;j<p.size();j++)
				if((p[i]&p[j])>max)
				    max = (p[i]&p[j]);
			cout<<max;
			v.clear();
			p.clear();}
			
	else{
		ll max = 0;
		for(int i =0;i<n;i++)
			if(v[i]>max)
				max = v[i];
		cout<<max<<"\n";
	}
	}
	return 0;
}


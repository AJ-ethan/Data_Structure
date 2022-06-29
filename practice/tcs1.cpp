#include<iostream>

using namespace std;

int main()
{
	int nw,na,w[1000],a[1000];
	cin>>nw;
	for(int i=0;i<nw;i++)
		cin>>w[i];
	cin>>na;
	for(int i=0;i<na;i++)
		cin>>a[i];
	int i=0,j=0;
	int check =0,s=0;
	if(w[0]>a[0])
		check = 1;
	while(i<nw && j<na)
	{
	if(w[i]<a[j]){
		if(check == 1){
			s += 1;
			check = 0;
			}
		i += 1;
		}
	else{
		if(check == 0){
			s +=1;
			check = 1;}
		j +=1 ;
		}
	}
	if(i<nw && check==1)
		s++;
	if(j<na && check==0)
		s++;
	cout<<s;
}

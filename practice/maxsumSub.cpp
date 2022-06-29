#include<iostream>

using namespace std;

int main()
{
	int arr[100],n,i;
	cout<<"enter the the size of the array :";
	cin>> n;
	int max = -999,temp=0;
	cout<<"enter the eleamants of array : "<<endl ;
	for(i=0;i<n;i++)
		cin>> arr[i];
	
	cout<<"the max sub array is : ";
	for(i=0;i<n;i++)
	{
		temp = temp + arr[i];
		//cout<<temp<<endl;
		if(temp>max)
			max = temp;
		if(temp<0)
			temp = 0;
		
	}
	cout<<max;
}

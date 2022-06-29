#include<iostream>
using namespace std;
char arr[200000];
void straight(int i)
{
	for(int x=0;x<5;x++)
		arr[i+x] = '*';
}
void doub(int i)
{
	for(int x=0;x<5;x++)
	{
		if(x==0 || x==4)
			arr[i+x]='*';
		else
			arr[i+x] = ' ';
	}
}
void left(int i)
{
	for(int x=0;x<5;x++)
	{
		if(x==0)
			arr[i+x]='*';
		else
			arr[i+x] = ' ';
	}
		
}

void right(int i)
{
	for(int x=0;x<5;x++)
	{
		if(x==4)
			arr[i+x]='*';
		else
			arr[i+x] = ' ';
	}
		
}

int main()
{
 	char str[10];
 	cin>>str;
 	int i=0,j=0,cont=0,n=9;
 	while(str[i]!='\0')
 	{
 		if(str[i] =='2')
 		{
			for(int x=0;x<9;x++)
			{
				if(x==0 || x==4 || x==8)
					straight(j);
				else if(x<4)
					right(j);
				else 
					left(j);
				j = j+5;
			}
		}
		else if(str[i] =='3')
 		{
			for(int x=0;x<9;x++)
			{
				if(x==0 || x==4 || x==8)
					straight(j);
				else
					right(j);
				j = j+5;
			}
		}
		else if(str[i] =='4')
 		{
			for(int x=0;x<9;x++)
			{
				if(x==4)
					straight(j);
				else if(x>4)
					right(j);
				else 
					doub(j);
				j=j+5;
			}
		}
		i++;
	}
	for(n = 5;n<10;n++)
		cout<<arr[n];
	cout<<endl;
	cont = 0;
	for(int z =0;z<45;z+=5)
	{
		for(int k =1;k<=i;k++)
		{
			int y = z*k+((k-1)*9*9);
			cont  = y+5;
			while(y++<cont)
				cout<<arr[y-1]<<" ";
			
		}
		cout<<endl;
	}
}

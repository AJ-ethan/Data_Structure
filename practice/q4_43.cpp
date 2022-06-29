#include<iostream>
#include<string.h>

//using namespace std;

class string 
{
	char *p;
	
	public:
		string(char *str="")
		{
			p = new char[strlen(str)+1];
			strcpy(p,str);
		}
		string operator +( string s)
		{
			char *str = new char [strlen(p) + strlen(s.p) +1];
			strcpy(str,p);
			strcat(str,s.p);
			return string(str);
		}
		string operator =(string s)
		{
			strcpy(p,s.p);
			return string(p);
		}
		string operator +=(string s)
		{
			char *temp = p;
			p = new char[strlen(p) + strlen(s.p)+1];
			strcpy(p,temp);
			strcat(p,s.p);
			return string(p);
		}
		void toupper()
		{
			char *temp = p;
			while(*temp)
			{
				if(*temp>='a' && *temp<='z')
					*temp -= 32;
				temp++;
			}
		}
		void tolower()
		{
			char *temp =p;
			while(*temp)
			{
				if(*temp >='A' && *temp <='Z')
					*temp += 32;
				temp++;
			}
			
		}
		void showsize(){
		std::cout<<strlen(p) +1 <<std::endl;
		}
		void showlength()
		{
			std::cout << strlen(p) <<std::endl;
		}
		void display()
		{
			std::cout << p <<std::endl;
			}
		

	};
int main()
{
	string s = "Hi";
	string s1="Hello",s2;
	s2 = s + s1;
	s+= s1;
	s1 = s2;
	s1.toupper();
	s2.tolower();
	s.showsize();
	s.showlength();
	s.display();
	s1.display();
	s2.display();
}

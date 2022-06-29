#include<iostream>
using namespace std;
class sample 
{
	int i=5;
	float f=9.4;
	public:
		void setdata(int i,float f)
		{
			i = i;
			f = f;
			cout << i << "and" << f<<endl;
			cout << "using this" << this->i<<endl;
		}
};

int main()
{
	sample s;
	s.setdata(3,3.33);
}

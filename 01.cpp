#include <iostream>
using namespace std;
int p(int b,int e)
{
	if(e==0)
	{
		return 1;
	}
	return b*p(b,e-1);
}
int main() 
{
            int b,e,r=1;
	cout<<"Enter base and exponent:"<<endl;
	cin>>b>>e;
	r=p(b,e);
	cout<<r;
	return 0;
}

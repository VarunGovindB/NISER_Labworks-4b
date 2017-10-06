#include <iostream>
using namespace std;
int p(int n)
{
	if(n==0)
	{
		return 0;
	}
	else if(n==1)
	{
	            return 1;	
	}
	return n+p(n-2);
}
int main() 
{
            int n,r=1;
	cout<<"Enter n:"<<endl;
	cin>>n;
	r=p(n);
	cout<<r;
	return 0;
}

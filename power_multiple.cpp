#include <iostream>
using namespace std;
int main()
{
	int a,b,i,res=1;
	cout<<"enter a,b :"<<endl;
	cin>>a>>b;
	for(int i=0;i<=b;i++)
	{
		res=res*a;
	}
	cout<<"result is : "<<res<<endl;
	return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int n,temp,swap,rev=0,f,l;
    cin>>n;
    cout<<"Number is : "<<n<<endl;
    temp=n;
    l=n%10;
    while(n>0){
        n=n/10;
    }
    f=n;
    n=temp/10;
    while(n)
    {
    	rev=rev*10+n%10;
    	n=n/10;
	}
   swap=l;
   while(rev)
   {
   	swap=swap*10+rev%10;
   	rev=rev/10;
   }
   swap=swap*10+f;
   printf("%d",swap);
    return 0;
}

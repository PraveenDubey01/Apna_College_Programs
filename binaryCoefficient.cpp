#include <iostream>
using namespace std;
int fact(int n){
    int factorial=1;
    for(int i=2;i<=n;i++)
    {
        factorial*=i;
    }
    return factorial;
}
int main()
{
    int n,r;
    cin>>n>>r;
    int ans=fact(n)/fact(n)*fact(n-r);
    cout<<"Binary Ceffecient of given number is:  "<<ans<<endl;
    return 0;
}

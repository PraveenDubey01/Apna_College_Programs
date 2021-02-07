#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cout<<"Number is : "<<n<<endl;
    int sum=0;
    int originaln=n;
    while(n>0){
        int lastdigit=n%10;
        sum+=pow(lastdigit,3);
        n=n/10;
    }
    if(sum==originaln)
    cout<<originaln<<": is Armstrong Number"<<endl;
    else 
    {
        cout<<originaln<<" : is not an Armstrong Number"<<endl;
    }
    return 0;
}

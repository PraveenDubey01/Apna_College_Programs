#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cout<<"Number is : "<<n<<endl;
    int sum=0;
    while(n>0){
        int lastdigit=n%10;
        sum=sum+lastdigit;
        n=n/10;
    }
    cout<<"total sum of inserted number is : "<<sum<<endl;
    return 0;
}

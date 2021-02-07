#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    bool flag=0;
    cout<<"Number entered is : "<<n<<endl;

    for(int i=2; i<sqrt(n);i++){
        if(n%i==0)
        {
            cout<<"Non_PRIME"<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0)
    cout<<"Number is Prime"<<endl;
    return 0;
}

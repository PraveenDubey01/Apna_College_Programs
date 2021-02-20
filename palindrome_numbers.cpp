#include <iostream>
using namespace std;
int main()
{
    int n,temp;
    cin>>n;
    cout<<"Number is : "<<n<<endl;
    int reverse=0;
    temp=n;
    while(n>0){
        int lastdigit=n%10;
        reverse=reverse*10+lastdigit;
        n=n/10;
    }
    if(reverse==temp)
    printf("number inserted is palindrome");
    else
    printf("number inserted is Not palindrome");
    return 0;
}

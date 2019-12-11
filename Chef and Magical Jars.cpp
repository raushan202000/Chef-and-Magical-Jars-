#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long a[n],s=0,r;
        for(long i=0;i<n;i++)
        cin>>a[i];
        for(long i=0;i<n;i++)
        s=s+a[i];
        r=(s-n)+1;
        cout<<r<<endl;
    }
    return 0;
}

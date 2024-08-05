#include <iostream>
using namespace std;
long long gt(int x)
{
    if(x<0)
    return 0;
    int kq=1;
    for(int i=1;i<=x;i++)
    kq*=i;
    return kq;
}

long long mu(int x, int n)
{
    int kq=1;
    for(int i=0;i<n;i++)
    kq*=x;
    return kq;
}

int main()
{
    int n;
    int x;
    cout<<"nhap gia tri cua x va n";
    cin>>x>>n;
    cout<<n<<"!= "<<gt(n)<<endl;
    cout<<x<<" mu "<<n<<"= "<<mu(x,n);
    return 0;
}

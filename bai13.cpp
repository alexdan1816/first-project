#include <iostream>
#include <math.h>
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
bool checksnt(int n)
{
    int count=0;
    if(n<=0 || n==1)
    {
        return 0;
    }
    else if(n==2)
    {
        return 1;
    }
    else 
    {
        for(int i=1;i<=sqrt(n);i++)
        {
            if(n%i==0)
            count=count+1;
        }
        if(count==1)
        return 1;
        else return 0;
    }

}

int main()
{
    /*
    int n;
    int x;
    cout<<"nhap gia tri cua x va n";
    cin>>x>>n;
    cout<<n<<"!= "<<gt(n)<<endl;
    cout<<x<<" mu "<<n<<"= "<<mu(x,n);*/
    int m;
    cout<<"Nhap so can kiem tra tinh nguyen to"<<endl;
    cin>>m;
    if(checksnt(m))
    {
    cout<<m<<" la so nguyen to"<<endl;
    }
    else cout<<m<<" khong la so nguyen to"<<endl;
    return 0;
}

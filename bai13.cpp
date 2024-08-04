#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Nhap gia tri cua n"<<endl;
    cin>>n;
    if(n<0)
        return 0;
    int kq=1;
    for (int i=1;i<=n;i++)
    {
        kq*=i;
    }
    cout<<"giai thua cua "<<n<<" bang = "<<kq<<endl;

    int x;
    long long kq2=1;
    cout<<"nhap gia tri cua x";
    cin>>x;
    for(int i=0;i<n;i++)
    {
        kq2*=x;
    }
    cout<<"ket qua cua "<<x<<" mu "<<n<<" = "<<kq2;

}
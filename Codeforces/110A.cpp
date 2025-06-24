#include<iostream>
using namespace std;

int main()
{
    unsigned long long n,lucky=0,n2,e=0;
    cin >> n;
    n2=n;
    while(n2!=0) {n2/=10;++e;}
    for(int i=0;i<e;++i)
    {
        if(n%10==7||n%10==4) lucky++;//cout << "Lucky:" << lucky << " N:" << n <<" I:"  << i << endl ;}
        n/=10;
    }
    if(lucky==7||lucky==4) cout << "YES" << endl;
    else cout << "NO" << endl;
}
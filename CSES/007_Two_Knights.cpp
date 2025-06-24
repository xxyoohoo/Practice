#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    for (long long i=1;i<=n;++i) 
    {
        long long t=i*i*(i*i-1)/2; 
        if (i>2) { t-=4*(i-1)*(i-2);}
        
        cout << t << endl;
    }
    cout << endl;

    return 0;
}

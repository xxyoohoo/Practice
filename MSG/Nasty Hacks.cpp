//https://open.kattis.com/submissions/13694276
#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int n,x,y,z;
    cin>>n;
    for(int i=0;i<n;i++){
        cin >> x >> y >> z;
        if(z+x==y) cout << "does not matter" << endl;
        else if (z+x<y)cout << "advertise" << endl;
        else cout << "do not advertise" << endl;
    }
    return 0;
}

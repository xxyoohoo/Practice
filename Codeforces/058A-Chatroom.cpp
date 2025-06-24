#include<iostream>
using namespace std;
int main()
{
    string w,hello="hello";
    cin>>w;
    int j=0,p=0;
    for(int i=0;i<w.length();i++)
    {
        if(w[i]==hello[j]) {j++;p++;}
    }
    if(p==5) cout<<"YES";
    else cout<<"NO";    
    return 0;
}

#include<iostream>
#include<string>
using namespace std;
int main()
{
    int r,eaten=0,c,row[11]={0},col[11]={0};
    string s;
    cin >> r >> c;
    for(int i=0;i<r;++i)
    {
        cin >> s;
        for(int j=0;j<c;++j)
        {
            if(s[j]=='S') {row[i]=1;col[j]=1;}
        }
    }
    for(int i=0;i<r;++i)
    {
        for(int j=0;j<c;++j)
        {
            if(row[i]==0||col[j]==0) eaten++;
        }
    }
    cout << eaten;
}
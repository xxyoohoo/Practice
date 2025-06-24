#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int lens=0;
    char s[2000];
    fgets(s,2000,stdin);
    lens=strlen(s)-1;
    for(int i=0;i<lens;)
    {
        if(s[i]=='.') {cout << '0'; ++i; }
        else if(s[i+1]=='.'){cout << '1'; i+=2; }
        else if(s[i+1]=='-'){cout << '2'; i+=2; }
    }
}
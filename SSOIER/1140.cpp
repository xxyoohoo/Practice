#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s1[100000],s2[100000];
    fgets(s1,100000,stdin);
    fgets(s2,100000,stdin);
    if(strstr(s1,s2)!=NULL) cout << s1 << " is substring of " << s2;
    else if(strstr(s2,s1)!=NULL) cout << s2 << " is substring of " << s1;
    else cout << "No substring";
}
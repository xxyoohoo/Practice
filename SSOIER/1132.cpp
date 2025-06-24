#include<iostream>
#include<cstring>
using namespace std;
void comp(char *s1,char *s2)
{
    int a,b;
    a=strlen(s1);
    b=strlen(s2);
    if(a-b==3||a-b==1||b-a==4) cout <<"Player1" << endl;
    else if(b-a==3||b-a==1||a-b==4)cout <<"Player2" << endl;
    else cout << "Tie" << endl;
}
int main()
{
    int n;
    cin >> n;
    char s1[100],s2[100];
   for(int i=1;i<=n;++i)
   {
    scanf("%s",s1);
    scanf("%s",s2);
    comp(s1,s2);
   }
}
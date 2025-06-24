#include<iostream>
using namespace std;
int main()
{
    int lens;
    string s;
    cin >> s;
    lens = s.length();
    for(int i=1;i<=lens;i+=2)
    {
        //cout << "S[" << i <<"] =" << s[i] << endl;
        if (s[i]=='1')
        {
            cout << "No"; 
            return 0;
        }
    }
    cout << "Yes";
}
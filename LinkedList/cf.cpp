#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int tc;
    cin >> tc;
    while (tc--)
    {
        string s;
        cin>>s;
        int n=s.size();
        set<char>se;
        for (int i=0;i<n;i++)
        {
            se.insert(s[i]);
        }
        if(se.size()==1)
        {
            cout<<"NO"<<"\n";
        }else{
            cout<<"YES"<<"\n";
            string a=s;
            reverse(a.begin(),a.end());
            if(a==s)
            {
                sort(a.begin(),a.end());
            }
            cout<<a<<"\n";
        }
    }
}
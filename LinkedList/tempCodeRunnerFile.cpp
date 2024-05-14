#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{

    int x = max(a, b);
    int y = min(a, b);

    if (x % y == 0)
        return y;
    else
    {
        while (x % y != 0)
        {
            int r = x % y;
            x = y;
            y = r;
        }
        return y;
    }
}

int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        int n,m;
        cin>>n>>m;
      string a,b;
      cin>>a>>b;
      int ans=0;
      unordered_map<int,int>freqb;
      freqb[0]=0;
      freqb[1]=0;
      for(int i=0;i<b.size();i++)
      { if(b[i]=='0')
        freqb[0]++;
          if (b[i] == '1')
              freqb[1]++;
      }
        
      for(int i=0;i<a.size();i++)
        {
            
                if (a[i] == '0')
                {
                    freqb[0]--;
            ans++;
                }
            if (a[i] == '1')
            {
                freqb[1]--;
                ans++;
            }
            if (freqb[0] <= 0 || freqb[1] <= 0)
            {
                break;
            }
        }
        cout << ans << endl;
    }
}

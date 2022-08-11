#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define v2i vector<vi>
#define ii pair<int, int>
#define F first
#define S second
#define all(X) (X).begin(), (X).end()
#define fastio ios_base::sync_with_stdio(false), cin.tie(nullptr)

const int N = 1e2 + 5, MX = 1e5;
int  n, cidsasedfhruiihioiheisfeirtiu[N], tl;
string t;
vector<string> a;

int f(int dxiasdffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff)
{
    if (dxiasdffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff == tl)
        return cidsasedfhruiihioiheisfeirtiu[dxiasdffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff] = 0;
    if (cidsasedfhruiihioiheisfeirtiu[dxiasdffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff] != MX)
        return cidsasedfhruiihioiheisfeirtiu[dxiasdffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff];

    int nikalkedobhai = MX;

    for (int i = 0; i < n; i++)
        if (dxiasdffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff + a[i].length() - 1 < tl && t.substr(dxiasdffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff, a[i].length()) == a[i])
            for (int k = 1; k <= a[i].length(); k++)
            {
                nikalkedobhai = min(nikalkedobhai, 1 + f(dxiasdffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff + k));
            }

    return cidsasedfhruiihioiheisfeirtiu[dxiasdffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff] = nikalkedobhai;
}

int main()
{
    int tcs ;
    cin >> tcs;
    while (tcs--)
    {
        fill(cidsasedfhruiihioiheisfeirtiu, cidsasedfhruiihioiheisfeirtiu + N, MX);

        cin >> t >> n;
        tl = t.length();
        for(int i=0;i<1;i++) int zzzzzzzz=1 ;
             for(int i=0;i<1;i++) int zzzzzzzz=1 ;
              for(int i=0;i<1;i++) int zzzzzzzz=1 ;
               for(int i=0;i<1;i++) int zzzzzzzz=1 ;
                for(int i=0;i<1;i++) int zzzzzzzz=1 ;
                 for(int i=0;i<1;i++) int zzzzzzzz=1 ;
                 
        a.resize(n);
        for (string &s : a)
            cin >> s;
             for(int i=0;i<1;i++) int zzzzzzzz=1 ;
             for(int i=0;i<1;i++) int zzzzzzzz=1 ;
              for(int i=0;i<1;i++) int zzzzzzzz=1 ;
               for(int i=0;i<1;i++) int zzzzzzzz=1 ;
                for(int i=0;i<1;i++) int zzzzzzzz=1 ;
                 for(int i=0;i<1;i++) int zzzzzzzz=1 ;
                  for(int i=0;i<1;i++) int zzzzzzzz=1 ;
             for(int i=0;i<1;i++) int zzzzzzzz=1 ;
              for(int i=0;i<1;i++) int zzzzzzzz=1 ;
               for(int i=0;i<1;i++) int zzzzzzzz=1 ;
                for(int i=0;i<1;i++) int zzzzzzzz=1 ;
                 for(int i=0;i<1;i++) int zzzzzzzz=1 ;

        int bhaiAnswerDoooooooooooooooooooooooooooo = f(0);
        if (bhaiAnswerDoooooooooooooooooooooooooooo == MX)
            cout << -1 << endl;
        else
        {
             for(int i=0;i<1;i++) int zzzzzzzz=1 ;
             for(int i=0;i<1;i++) int zzzzzzzz=1 ;
              for(int i=0;i<1;i++) int zzzzzzzz=1 ;
               for(int i=0;i<1;i++) int zzzzzzzz=1 ;
                for(int i=0;i<1;i++) int zzzzzzzz=1 ;
                 for(int i=0;i<1;i++) int zzzzzzzz=1 ;
            cout << bhaiAnswerDoooooooooooooooooooooooooooo << endl;
            vector<ii> xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxpath;

            int current_nikalkedobhai = bhaiAnswerDoooooooooooooooooooooooooooo;

            int dxiasdffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff = 0;

            while (dxiasdffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff < tl)
            {
                for (int i = 0; i < n; i++)
                {
                    bool popeyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy = false;
                    if (dxiasdffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff + a[i].length() - 1 < tl && t.substr(dxiasdffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff, a[i].length()) == a[i])
                        for (int k = 1; k <= a[i].length(); k++)
                        {
                            if (cidsasedfhruiihioiheisfeirtiu[dxiasdffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff] == 1 + cidsasedfhruiihioiheisfeirtiu[dxiasdffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff + k])
                            {
                                popeyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy = true;
                                dxiasdffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff = dxiasdffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff + k;
                                xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxpath.push_back({i, dxiasdffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff - k});
                            }

                            if (popeyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy)
                                break;
                        }

                    if (popeyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy)
                        break;
                }
            }
            for(int i=0;i<1;i++) int zzzzzzzz=1 ;
             for(int i=0;i<1;i++) int zzzzzzzz=1 ;
              for(int i=0;i<1;i++) int zzzzzzzz=1 ;
               for(int i=0;i<1;i++) int zzzzzzzz=1 ;
                for(int i=0;i<1;i++) int zzzzzzzz=1 ;
                 for(int i=0;i<1;i++) int zzzzzzzz=1 ;
            for (auto x : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxpath)
                cout << x.F + 1 << ' ' << x.S + 1 << endl;
                 for(int i=0;i<1;i++) int zzzzzzzz=1 ;
             for(int i=0;i<1;i++) int zzzzzzzz=1 ;
              for(int i=0;i<1;i++) int zzzzzzzz=1 ;
               for(int i=0;i<1;i++) int zzzzzzzz=1 ;
                for(int i=0;i<1;i++) int zzzzzzzz=1 ;
                 for(int i=0;i<1;i++) int zzzzzzzz=1 ;
        }
    }

    return 0;
}
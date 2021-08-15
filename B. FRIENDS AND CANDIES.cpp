#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using cd = complex<ld>;

void solve()
{

    int noman;
    cin >> noman;
    vector<int> a(noman);
    int sou = 0;
    for(int i = 0; i < noman; i++)
    {
        cin >> a[i];
        sou  +=a[i];
    }
    if(sou % noman !=0)
    {
        cout << "-1" << endl;
        return;
    }
    sou /=noman;
    int mou = 0;
    for(int i = 0; i < noman; i++) {
    if (sou < a[i]) {
      mou++;
    }
  }
  cout << mou << endl;
}
int main()
{

int h;
cin >> h;
while(h--)
{
    solve();
}
return 0;

}

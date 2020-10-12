#include<bits/stdc++.h>
#include<cstring>
//#define Mfc_Tanzim
#define   ll         long long
#define   ull        unsigned long long
#define   pb         push_back
#define   ff         first
#define   ss         second
#define   all(v)     (v.begin(), v.end())
#define   rall(v)    (v.rbegin(), v.rend())
#define   pi         acos(-1.0)
#define   FastRead   ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define   bug(a)     cerr << #a << " : " << a << endl
using namespace std;
const ll mod = 1e9+7;
const ll mx = 2e6+10;

ll posx[] = {1,-1, 0, 0};
ll posy[] = {0, 0, 1,-1};
ll dp[mx];

int main()
{
     FastRead

#ifdef Mfc_Tanzim
    freopen("input.txt","r", stdin);
    // freopen("output.txt","w", stdout);
#endif /// Mfc_Tanzim

    int n, k;
    cin >> n >> k;
    vector<ll>coins;

    for(int i=1,a; i<=n; i++){
            cin >> a;
            coins.pb(a);
    }
    dp[0]=1;

    for(int i=1; i<=k; i++){
            for(auto x: coins){
                     if(x>i) continue;
                     dp[i] += dp[i-x];
                     dp[i]%=mod;
            }
    }
    cout << dp[k] << "\n";
    return 0;
}
/*
3 9
2 3 5

Output: 8

{
2+2+5=9
2+5+2=9
5+2+2=9
3+3+3=9
2+2+2+3=9
2+2+3+2=9
2+3+2+2=9
3+2+2+2=9
}

*/

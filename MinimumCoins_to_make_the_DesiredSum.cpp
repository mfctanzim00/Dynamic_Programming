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
    vector<ll>v;
 
    for(int i=1,a; i<=n; i++){
            cin >> a;
            v.pb(a);
    }
 
    for(int i=1; i<=k; i++){
            dp[i] = INT_MAX;
            for(auto x: v){
                     if(x>i) continue;
                     dp[i] = min(dp[i], dp[i-x]+1);
            }
    }
    cout << (dp[k]==INT_MAX? -1 : dp[k]) << "\n";
    return 0;
}

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
const ll mx = 1e5+7;

ll posx[] = {1,-1, 0, 0};
ll posy[] = {0, 0, 1,-1};
int dp[mx];
int wt[1005], value[1005];

int main()
{
    FastRead

#ifdef Mfc_Tanzim
    freopen("input.txt","r", stdin);
    // freopen("output.txt","w", stdout);
#endif /// Mfc_Tanzim

    int t=1, n, k;

    cin >> n >> k;   /// k = mx_weight

    for(int i=0; i<n; i++)
          cin >> wt[i];
    for(int i=0; i<n; i++)
          cin >> value[i];

    ///KnapSack
    for(int i=0; i<n; i++){
            for(int j=k; j>=wt[i]; j--){
                   dp[j] = max(dp[j], dp[j-wt[i]]+value[i]);
            }
    }

    cout << dp[k] << endl;

    return 0;
}

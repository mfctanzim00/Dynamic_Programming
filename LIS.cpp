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
const ll mx = 1e9+7;

ll posx[] = {1,-1, 0, 0};
ll posy[] = {0, 0, 1,-1};

int main()
{
    FastRead

#ifdef Mfc_Tanzim
    freopen("input.txt","r", stdin);
    // freopen("output.txt","w", stdout);
#endif /// Mfc_Tanzim

    int t=1, k, m, a, b, c, d, n;
    //cin >> t;

    while(t--){
              cin >> n;
              vector<ll>v(n);
              for(auto &i: v){
                       cin >> i;
              }
              vector<ll>seq;
              seq.pb(v[0]);

              for(ll i=1; i<n; i++){
                        if(seq.back()<v[i]){
                                   seq.pb(v[i]);
                        }
                        else{
                                   ll idx = lower_bound(seq.begin(), seq.end(), v[i])-seq.begin();
                                   seq[idx] = v[i];
                        }
              }
              cout << seq.size() << endl;
    }
    return 0;
}
/*
8
7 3 5 3 6 2 9 8

Output: 4

{
3 5 6 9
}

*/

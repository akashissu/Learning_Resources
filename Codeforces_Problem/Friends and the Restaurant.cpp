#include <bits/stdc++.h>
#define ll long long
#define f first
#define s second
#define all(c) c.begin(), c.end()
#define FAST ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
using namespace std;

void Result()
{
    ll n;
    cin >> n;
    vector<ll>x(n),y(n);
    for(int i=0; i<n; i++) cin>>x[i];
    for(int i=0; i<n; i++) cin>>y[i];
    vector<ll> v;
    for (int i = 0; i < n; i++) v.push_back(y[i] - x[i]);
    sort(all(v));
    // for(int x:v) cout << x << " ";
    ll i = 0, j = n - 1,ans=0;
    while(i<j){
        if(i==j) break;
        if(v[i]+v[j]>=0){
             ans++;
             i++;
             j--;
        }
        else i++;
    }
    cout <<ans<< endl;
} 

int main()
{
    FAST int test = 1;
    cin >> test;
    while (test--)
    {
        Result();
    }
    return 0;
}

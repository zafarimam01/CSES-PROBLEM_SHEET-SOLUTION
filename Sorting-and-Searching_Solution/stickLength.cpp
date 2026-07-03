#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<ll>st(n);
    for(ll i=0; i<n; i++){
        cin >> st[i];
    }
    sort(st.begin(),st.end());
    ll x = 0;
    ll median = st[n/2];
    for(ll i=0; i<n; i++){
        x += abs(st[i]-median);
    }
    cout << x << endl;
    return 0;
}
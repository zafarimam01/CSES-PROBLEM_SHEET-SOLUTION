#include<bits/stdc++.h>
#define ll long long 
using namespace std;

void solve(){
    ll x;
    cin >> x;
    int n;
    cin >> n;
    set<int>position;
    multiset<int>length;
    position.insert(0);
    position.insert(x);
    length.insert(x);
    for(int i=0 ;i<n; i++){
        int p;
        cin >> p;
        auto it = position.insert(p).first;
        int l = *prev(it);
        int r = *next(it);
        length.erase(length.find(r - l));
        length.insert(p - l);
        length.insert(r - p);
        cout<<*length.rbegin()<<" ";
    }
    return;
}
int main(){
    solve();
    return 0;

}
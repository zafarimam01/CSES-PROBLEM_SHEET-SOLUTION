#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n , m;
    cin >> n >> m;
    multiset<ll>ms;
    for(ll i=0; i<n; i++){
        int x;
        cin >> x;
        ms.insert(x);
    }
    vector<ll>sm(m);
    for(ll i=0; i<m; i++){
        cin >> sm[i];
    }
    for(ll i=0; i<m; i++){
        auto it = ms.upper_bound(sm[i]);
        if(it==ms.begin()){
            cout <<"-1"<<endl;
        }
        else{
            --it;
            cout<< *it <<endl;
            ms.erase(it);
        }
    }
    return 0;
}
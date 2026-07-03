#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<pair<int,int>>mov(n);// make pair as first second
    for(ll i=0; i<n; i++){
        cin >> mov[i].second >> mov[i].first; //taken end time first because easy for sorting
    }
    sort(mov.begin(),mov.end());//sort by end time;
    int ans = 0;
    int lastEnd = 0;
    for(auto mov : mov){
        if(mov.second >= lastEnd){
            ans++;
            lastEnd = mov.first;
        }
    }
    cout << ans << endl;
    return 0;
}
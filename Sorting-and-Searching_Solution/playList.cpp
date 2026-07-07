#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> s(n);
    for(ll i=0; i<n; i++){
        cin>>s[i];
    }
    int i=0;
    int ans = 0;
    map<int,int>mp;
    for(int r=0; r<n; r++){
        if(mp.count(s[r]) && mp[s[r]] >= i)
            i = mp[s[r]]+1;
        mp[s[r]] = r;
        ans = max(ans,r-i+1);
    }
    cout << ans;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int movieFes(int k, vector<pair<int,int>> &arr){
    multiset<int>st;
    ll ans = 0;
    for(int i=0; i<k; i++){
        st.insert(0); // all viewers initialize with zero
    }
    for(auto mv : arr){
        int start = mv.second;
        int end = mv.first;
        auto it = st.upper_bound(start);
        if(it == st.begin()){
            continue;
        }
        --it;
        st.erase(it);
        st.insert(end);
        ans++;
    }
    return ans;
}
int main(){
    int n,k;
    cin >> n >> k;
    vector<pair<int,int>> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i].second >> arr[i].first; // take end time first easy for easy to sort
    }
    sort(arr.begin(),arr.end());
    cout<< movieFes(k,arr) <<endl;
}
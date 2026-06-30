#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n,x;
    cin >> n >> x;
    vector<ll>arr(n);
    for(ll i = 0; i<n; i++){
        cin >> arr[i];
    }
    sort(arr.begin(),arr.end());
    ll count = 0;
    ll i = 0;
    ll j = n-1;
    while(i <= j){
        if(arr[i]+arr[j]<=x){
            i++;
            j--;
            count++;
        }
        else{
            j--;
            count++;
        }
    }
    cout << count << endl;
    return 0;
}

//Time Complexity:-- O(n log n)
// Space Complexity:-- O(1)
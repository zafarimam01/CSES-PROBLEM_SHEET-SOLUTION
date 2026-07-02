#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<vector<int>> cus(n,vector<int>(2));
    for(ll i=0; i<n; i++){
        cin >> cus[i][0] >> cus[i][1];
    }
    int i = 0, j = 0;
    vector<int>arr(n);
    vector<int>dep(n);
    for(ll i=0; i<n; i++){
        arr[i] = cus[i][0];
        dep[i] = cus[i][1];
    }
    sort(arr.begin(),arr.end());
    sort(dep.begin(),dep.end());
    int customercount = 0,maxcustomers=0;
    while(i<n && j<n){
        if(arr[i] < dep[j]){
            customercount++;
            maxcustomers = max(maxcustomers,customercount);
            i++;
        }
        else{
          customercount--;
          j++;  
        }
    }
    cout << maxcustomers <<endl;
    return 0;
}
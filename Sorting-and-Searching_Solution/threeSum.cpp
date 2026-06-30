#include<bits>/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin >> n >> x;
    vector<vector<int>>arr;
    for(int i=0; i<n; i++){
        int value;
        cin >> value;
        arr.push_back({value,i+1});
    }
    int p1 = 0; p2 = n+1/2, p3 = n-1;
    sort(arr.begin(),arr.end());

    return 0;

}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin >> n >> x;
    vector<pair<int,int>>arr;
    for(int i = 0; i < n; i++){
        int value;
        cin >>value;
        arr.push_back({value,i+1});
    }
    sort(arr.begin(),arr.end());
    int p1 = 0, p2 = n-1;
    while(p1 < p2){
        int curr_Sum = arr[p1].first + arr[p2].first;
        if(curr_Sum == x){
            cout<<arr[p1].second<<' '<<arr[p2].second<< endl;
            return 0;
        }
        else if(curr_Sum > x){
            p2--;
        }
        else p1++;
    }
    cout<<"IMPOSSIBLE"<<endl;

    return 0;
}
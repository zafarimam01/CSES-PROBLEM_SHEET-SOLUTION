#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    long long arr[n];
    for(long long i = 0; i < n; i++){
        cin >> arr[i];
    }
    long long sum = 0,max_sum = arr[0];

    for(long long i = 0; i < n; i++){
        sum+=arr[i];
        max_sum = max(max_sum,sum);
        if(sum < 0){
            sum = 0;
        }

    }
    cout << max_sum << endl;
    return 0;
}
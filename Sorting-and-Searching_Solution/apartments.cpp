#include <bits/stdc++.h>
using namespace std;
int solve(vector<int>& a, vector<int>& b, int n, int m, int k){
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    // ---> pointer to store current value 
    int ptr1 = 0 , ptr2 = 0, ans = 0;
    while(ptr1 < n && ptr2 < m){
        if(b[ptr2] < a[ptr1] - k){ //
            ptr2++;
        }
        else if(b[ptr2] > a[ptr1] + k){
            ptr1++;
        }
        else {
            ans += 1;
            ptr1 += 1;
            ptr2 += 1;;
        }
    }
    return ans;
}
int main(){
    int n,m,k;
    cin >> n >> m >>k; // n = number of applicants , m = of apartments , k = max diff
    vector<int> a(n);
    vector<int> b(m);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < m; i++){
        cin >> b[i];
    }
    int result = solve(a,b,n,m,k);
    cout << result << endl;
    
    return 0;
}
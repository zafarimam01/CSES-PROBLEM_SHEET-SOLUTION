#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,k;
    cin >> n,m,k; // n = number of applicants , m = of apartments , k = max diff
    vector<int> applicant(n);
    vector<int> apartment(m);
    for(int i = 0; i < n; i++){
        cin >> applicant[i];
    }
    for(int i = 0; i < m; i++){
        cin >> apartment[i];
    }
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> vec(n);
    for(int i = 0; i < n; i++){
        cin >> vec[i];
    }
    int count = 1;
    sort(vec.begin(),vec.end());
    for(int i = 1; i < n; i++){
        if(vec[i]!=vec[i-1]){
            count+=1;
        }
    }
    cout << count <<endl;
    return 0;
}

//TIME : (n log n)
// SPACE : O(n)
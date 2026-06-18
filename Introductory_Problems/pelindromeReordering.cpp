#include <bits/stdc++.h>
using namespace std;
string Solve(string s){
    int n = s.length();
    string ans(n, ' ');

    int freq[26] = {};
    for(int i = 0; i<n; i++){
        freq[s[i]-'A'] += 1;
    }
    int count = 0;
    for(int i = 0;i<26;i++){
        if(freq[i]%2!=0){
            count ++;
        }
    }
    if (count > 1)
        return "NO SOLUTION";

    int left = 0, right = n - 1;
    for (int i = 0; i < n; i++) {
        if (freq[s[i] - 'A'] % 2 == 1) {
            ans[n / 2] = s[i];
            freq[s[i] - 'A'] -= 1;
        }
        while (freq[s[i] - 'A'] > 0) {
            ans[left++] = ans[right--] = s[i];
            freq[s[i] - 'A'] -= 2;
        }
    }
    return ans;
}
int main() {
    string s;
    cin >> s;
    cout << Solve(s) << endl;
}

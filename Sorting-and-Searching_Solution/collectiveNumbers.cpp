#include<bits/stdc++.h>
using namespace std;
#define ll long long
//Collective Numbers CSES problem Solution 

int main(){
    int n;
    cin>> n;
    vector<int> ar(n);
    for(int i=0; i<n; i++){
        cin >> ar[i];
    }
    vector<int> pos(n + 1); // store indices of all element in array;
    for(int i = 0; i<n; i++){
        pos[ar[i]] = i+1;
    }
    int rounds = 1;
    for(int i = 2; i<=n; i++){ // Start from 2 and goes till n check for i and i-1;
        if(pos[i] < pos[i-1]) rounds ++; // if pos[i] occure before (i-1) rounds ++;
    }
    cout << rounds << endl;
    return 0;
}
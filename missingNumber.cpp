#include<iostream>
using namespace std;
int main(){
    long long n;
    cin >> n;
    long long sum = n*(n+1)/2;
    long long given =0;
    for(int i=1;i<=n-1;i++){
        long long m;
        cin >> m;
        given += m;
    }
    cout << sum - given;
    return 0;
}
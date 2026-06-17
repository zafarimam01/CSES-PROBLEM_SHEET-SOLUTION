#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    long long zeros = 0;
    int divisor = 5;
    while(divisor<=n){
        zeros += n/divisor;
        divisor *= 5;
    }
    cout << zeros << endl;
    return 0;
}
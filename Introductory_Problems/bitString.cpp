#include<iostream>
using namespace std;
long long bitString(long long n){
    long long ans = 1;
    for(long long i =1 ; i <= n; i++){
        ans = (ans*2)%1000000007;
    }
    return ans;
}
int main(){
    long long n;
    cin >>n;
    long long result = bitString(n);
    cout << result<< endl;

}
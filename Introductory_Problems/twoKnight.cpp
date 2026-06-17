#include<iostream>
using namespace std;
int main(){
    int n;
    cin >>n;
    long long ways = 0;
    long long attack = 0;
    for(int i=1;i<=n;i++){
        ways = 1ll*i*i*(i*i-1)/2;
        attack = 4ll*(i-1)*(i-2);
        cout << ways-attack << " "<<endl;
    }
    return 0;
}
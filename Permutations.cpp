#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n==2 || n==3){
        cout << "NO SOLUTION";
        return 0;
    }
    if(n==1){
        cout << n;
        return 0;
    }
    for(int i=n/2;i>=1;i--){
        cout << i <<" "<< i+n/2 << " ";
    }
    if(n%2==1) cout << n << " ";
    cout << "\n";
    return 0;
}
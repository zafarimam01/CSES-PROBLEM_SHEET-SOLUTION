#include<iostream>
using namespace std;
int main(){
    string n;
    cin >> n;
    long long current = 1;
    long long best = 1;
    for(int i=0;i<n.length()-1;i++){
        if (n[i] == n[i+1]){
            current +=1;
        }
        else current = 1;
        if (current>best){
            best = current;
        }
    }
    cout << best << endl;
    return 0;
}
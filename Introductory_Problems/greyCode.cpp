#include<iostream>
#include<vector>
using namespace std;
vector<string> greycode(int n){
    vector<string> result;
    for(int i=0;i<(1<<n);i++){
        int grey = i^(i>>1);
        string code = "";
        for(int j=n-1;j>=0;j--){
            code += (grey &(1<<j))? '1':'0'; //
        }
        result.push_back(code);
    }
    return result;
}
int main(){
    int n;
    cin >> n;
    vector<string> ans = greycode(n);
    for(string code : ans){
        cout << code << endl;
    }
    return 0;
}
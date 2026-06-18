#include<iostream>
using namespace std;
void towerofhonoi(int n, char right,char middle,char left){
    if(n==0) return;
    towerofhonoi(n-1,right,left,middle);
    cout << right<<" " <<left<<endl;
    towerofhonoi(n-1,middle,right,left);
}
int main(){
    int n;
    cin >> n;
    cout << ((1ll << n)-1) << "\n";
    towerofhonoi(n,'1','2','3');
    return 0;
}
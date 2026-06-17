#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    long long x,y;
    long long ans = 0;
    while(t>=1){
        cin >> x >> y;
        if(x<y){
            if(y%2==0){
                ans = (y-1)*(y-1)+x;
            }
            else ans = y*y-(x-1);
        }
        else{
            if(x%2==0){
                ans = x*x-y+1;
            }
            else ans = (x-1)*(x-1)+y;
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}
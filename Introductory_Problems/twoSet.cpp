#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long total_Sum = 0;
    for(int i=1;i<=n;i++){
        total_Sum += i;
    }
    long long firstSet=0,secondSet =0;
    int count1 = 0;
    if(total_Sum%2==0){
        cout <<"YES"<<endl;
        long long target = total_Sum/2;
        for(int i=n;i>=1;i--){
            if(firstSet+i<=target){
                firstSet += i;
                count1 ++;
            }
        }
        cout << count1 << endl;
        firstSet = 0;
        // first set print
        for(int i=n;i>=1;i--){
            if(firstSet+i<=target){
                firstSet+=i;
                cout << i << " ";
            }
        }
        cout << "\n";
        int count2 = n-count1;
        cout <<count2 <<endl;
        firstSet = 0;
        // Second set print
        for(int i=n;i>=1;i--){
            if(firstSet+i<=target){
                firstSet+=i;
            }else{
                cout << i << " ";
            }
        }
    }  
    else cout <<"NO" << endl;
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    long long move = 0;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i = 0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            move += (arr[i] - arr[i+1]);
            arr[i+1] = arr[i];
            
        }
    }
    cout << move <<endl;
    return 0;
}
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0;i < n;i++){
        if(a[i] < a[i + 1]){
            cout << "1";
        }else if(a[i] > a[i + 1]){
            cout << "0";
        }
    }
    return 0;
}
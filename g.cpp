#include<bits/stdc++.h>

using namespace std;

//print odd matrix

int main(){
    int n;
    cin >> n;
    int a[n][n];
    int cnt = 1;
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            a[i][j] = cnt;
        }
        cnt = cnt + 2;// cnt += 2;
    }
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
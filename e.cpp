#include<iostream>

using namespace std;

int main(){
    int n, cnt = 0;
    cin >> n;
    int a[2*n];
    for(int i = 0;i < 2 * n;i++){
        cin >> a[i];
    }
    for(int i = 0;i < 2 * n;i++){
        if(a[i] == a[i + 1]){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}
//partial solution :(
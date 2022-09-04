//triangle
#include<iostream>

using namespace std;

int main(){
    int x, y, z;
    cin >> x >> y >> z;
    int k = x + y;
    int j = x + z;
    int l = y + z;
    if(k > z && j > y && l > x){
        cout << "Valid";
    }else{
        cout << "Invalid";
    }
    return 0;
}
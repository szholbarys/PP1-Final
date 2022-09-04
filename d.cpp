#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    //the number must be positive and even
    if(n > 0){
      while(n % 2 == 0){
        n /= 2;
      }
      //16 % 2 = 8 % 2 = 4 % 2 = 2 % 2 = 1,so we write like this
      if(n == 1){
          cout << "YES" << endl;
      }
    }
    //and 14 % 2 = 7 % 2 != 0, so we wrtie like this
    if(n == 0 || n != 1){
        cout << "NO" << endl;
    }
    return 0;
}
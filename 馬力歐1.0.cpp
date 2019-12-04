#include <iostream>
using namespace std;

int main() {
int a;
int i;
int j;
  cout << "請輸入三角形行數";
  cin >> a;
  if(a <= 8){
    for(i=1;i<=a;i++){
            cout << "\n";
            for(j=1;j<=i;j++){
                cout << "#";
            }
        }
        cout << "\n";
    }
    else {
        cout << "請輸入小等於8的數值";
    }    
}

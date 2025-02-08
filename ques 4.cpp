#include <iostream> 
using namespace std;

void   printSpiral(  int n) {
    int a[n ][ n];      // udsed as a variableds
     int num = 1;
    int t = 0, b = n - 1, l = 0, r = n - 1;

    while (t <= b && l <= r) {
         for (int i = l; i <= r; i++) a[t][i] = num++;
                t++;
         for (int i = t; i <= b; i++) a[i][r] = num++;
             r--;
   if (t <= b) {
            for (int i = r; i >= l; i--) a[b][i] = num++;
               b--;
        }
                  if (l <= r) {
    for (int i = b; i >= t; i--) a[i][l] = num++;
            l++;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() {
    int n;
      cin >> n;
     printSpiral(n);
       return 0;
       //himanshu
}

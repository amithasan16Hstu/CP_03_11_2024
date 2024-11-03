#include <bits/stdc++.h>
using namespace std;


bool Quin(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int q = abs(arr[i] - arr[i - 1]);
        if (q != 5 && q != 7) {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[50]; 

        for (int i = 0; i < n; i++) 
            cin >> arr[i];

        if (Quin(arr, n)) 
            cout << "YES"<<endl;
        else 
            cout << "NO"<<endl;
        
    }
   
}

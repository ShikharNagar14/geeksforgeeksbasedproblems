
#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
   
    int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
       unordered_set<int> setA(a, a + n);

    int count = 0;

    for (int i = 0; i < m; i++) {
        if (setA.count(b[i]) > 0) {
            count++;
            setA.erase(b[i]); 
        }
    }

    return count;

        
    }
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        for (int i = 0; i < n; i++) cin >> a[i];

        for (int i = 0; i < m; i++) cin >> b[i];
        Solution ob;
        cout << ob.NumberofElementsInIntersection(a, b, n, m) << endl;
    }
    return 0;
}

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        sort(arr.begin(), arr.end());
        int rep;
        int missing = 1;
        for(int i=0; i<n; i++){
            if(arr[i] == missing) {
                missing++;
            }
            if(i < n-1 && arr[i] == arr[i+1]) {
                rep = arr[i];
            }
        }
        return {rep, missing};
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends
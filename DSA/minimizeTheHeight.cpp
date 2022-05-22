// { Driver Code Starts
// https://practice.geeksforgeeks.org/problems/minimize-the-heights3351/1#

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
// 5 10 2 6 3 4 7 2 10 3 2 1
       sort(arr,arr+n);
        int maxV = arr[n-1];
        int minV = arr[0];
        
      
        int dif = maxV-minV;
        for(int i = 1; i<n ; i++){
            if(arr[i]<k)continue;
            minV = min(arr[0]+k,arr[i]-k);
            maxV=max(arr[n-1]-k,arr[i-1]+k);
            dif = min((maxV-minV),dif);
        }
        return dif;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends
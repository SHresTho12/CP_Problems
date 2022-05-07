//https://practice.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1/
#include<iostream>
#include<algorithm>

using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n) ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}// } Driver Code Ends


pair<long long, long long> getMinMax(long long a[], int n) {


    pair<ll,ll> MinMax;


    ll max = a[0], min = a[0] ;
    
    for(ll i = 1 ; i < n ; i++ ){
        if(a[i]< min)min = a[i];
        if(a[i]>max)max = a[i];
    }
    
    MinMax.first = min;
    MinMax.second = max;
    return MinMax;
}
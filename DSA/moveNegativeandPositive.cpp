//https://practice.geeksforgeeks.org/problems/move-all-negative-elements-to-end1813/1
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        // Your code goes here
        vector<int> negative;
        vector<int> positive;
        for(int i = 0 ; i < n ; i++){
            if(arr[i] < 0 ){
                negative.push_back(arr[i]);
            }
             if(arr[i] > 0 ){
                positive.push_back(arr[i]);
            }
        }
        for(int i = 0 ; i < positive.size() ; i++ ) arr[i] = positive[i];
         for(int i = positive.size(),j=0 ; j < negative.size() ; i++,j++ ) arr[i] = negative[j];

    }
};

// { Driver Code Starts.
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}
  // } Driver Code Ends
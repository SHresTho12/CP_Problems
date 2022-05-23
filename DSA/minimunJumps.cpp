//https://practice.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1#
//Solution : https://www.geeksforgeeks.org/minimum-number-of-jumps-to-reach-end-of-a-given-array/

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
      if(n<=1){
           return 0;
       }
   
       int i=0,jump=0,index;
       
       while(i<n){
           
           int max_reach = arr[i]+i;
           
           if(max_reach>=n-1){
               return jump+1;
           }
           
           int max_dist = -1;
           int curr_dist;
           
           for(int j=i+1; j<n && j<=max_reach; j++){
               
               int curr_dist = arr[j]+j;
               
               if(curr_dist >=n-1){
                   return jump+2;
               }
               
               if(curr_dist > max_dist){
                   max_dist = curr_dist;
                   index=j;
               }
           }
           
           i = index;
           if(max_dist<i+1 or max_dist<(arr[i]+i)){
               return -1;
           }
           jump++;
           
       }
       return -1;
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends

  //Recursive
//    int minJumps(int arr[], int n){
//         // Your code here
//         if (n == 1)
//         return 0;
 
//     // Traverse through all the points
//     // reachable from arr[l]
//     // Recursively, get the minimum number
//     // of jumps needed to reach arr[h] from
//     // these reachable points
//     int res = INT_MAX;
//     for (int i = n - 2; i >= 0; i--) {
//         if (i + arr[i] >= n - 1) {
//             int sub_res = minJumps(arr, i + 1);
//             if (sub_res != INT_MAX)
//                 res = min(res, sub_res + 1);
//         }
//     }
 
//     return res;
//     }
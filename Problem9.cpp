//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        // code here

        sort(arr,arr+n);

        int ans=arr[n-1]-arr[0];

        int smallest=arr[0]+k;

        int largest=arr[n-1]-k;

        int minimum,maximum;

        for(int i=0;i<n-1;i++)
        {
            minimum=min(smallest,arr[i+1]-k);
            maximum=max(largest,arr[i]+k);
            if(minimum<0)
            continue;
            ans=min(ans,maximum-minimum);
        }
        return ans;
    }
};

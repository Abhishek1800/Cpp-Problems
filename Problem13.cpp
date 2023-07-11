//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        long long int maxSum=INT_MIN;
        long long int curSum=0;
        
        for(int i=0;i<n;i++)
        {
            curSum=curSum+arr[i];
            if(curSum>maxSum)
            {
                maxSum=curSum;
            }
            if(curSum<0)
            {
                curSum=0;
            }
        }
            return maxSum;
    }
};



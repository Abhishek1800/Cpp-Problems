//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n)
    {
     
        long long int maxSum=arr[0];
        long long int curSum=arr[0];
        
        for(int i=0;i<n;i++)
        {
            
            if(i>0)
            {
              curSum=curSum+arr[i];
            }
      
            if(curSum<arr[i])
            {
             curSum=arr[i];
            }
           
            if(maxSum<curSum)
            {
                maxSum=curSum;
            }
        }
        return maxSum;
    }
};


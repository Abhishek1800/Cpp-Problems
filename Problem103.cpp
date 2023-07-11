//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

// } Driver Code Ends
class Solution
{
    public:

    int solve(int arr[],int i,int n,vector<int> &dp)
    {
        if(i>=n)
        {
            return 0;
        }
        
        if(dp[i] != -1)
        {
            return dp[i];
        }

        int option1 = solve(arr,i+1,n,dp);

        int option2 = solve(arr,i+2,n,dp)+arr[i];
        
        int ans=max(option2,option1);

        dp[i]=ans;

        return dp[i];
    }
    
    int FindMaxSum(int arr[], int n)
    {
        vector<int> dp(n+1,-1);

        int i=0;

        return solve(arr,i,n,dp);
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
	int t;
	cin>>t;
	while(t--)
	{
	    //taking number of houses
		int n;
		cin>>n;
		int a[n];
		
		//inserting money of each house in the array
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;
		//calling function FindMaxSum()
		cout<<ob.FindMaxSum(a,n)<<endl;
	}
	return 0;
}

// } Driver Code Ends

//{ Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;
#define ll long long

// } Driver Code Ends
//User function template for C++

class Solution
{
    public:
    
    ll findSubarray(vector<ll> arr, int n ) 
    {
        unordered_map<ll, ll> mp;
    
        mp[0] = 1;
    
        ll ans = 0;
    
        ll sum = 0;
    
        for(int i=0; i<n; i++)
        {
            sum += arr[i];
            ans += mp[sum];
            mp[sum]++;
        }
        return ans;
    }
 
};

//{ Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n; //input size of array
       
        vector<ll> arr(n,0);
        
        for(int i=0;i<n;i++)
            cin>>arr[i]; //input array elements
        Solution ob;
        cout << ob.findSubarray(arr,n) << "\n";
    }
	return 0;
}
// } Driver Code Ends

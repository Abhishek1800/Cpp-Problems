//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:

    int smallestSubWithSum(int arr[], int n, int x)
    {
        int current_sum = 0;
        int minimum_length = n+1;
        
        int start=0;
        int end=0;
        
        while(end<n)
        {
            while(current_sum <= x && end < n)
            current_sum += arr[end++];
            
            while(current_sum > x && start < n)
            {
                if(end-start < minimum_length)
                minimum_length = end-start;
                
                current_sum -= arr[start++];
            }
        }
        if(minimum_length>n)
        
        return 0;
        
        return minimum_length;
    }
};

//{ Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution obj;
		cout<<obj.smallestSubWithSum(a,n,x)<<endl;
	}
	return 0;
}
// } Driver Code Ends

//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{

    public:
    long long trappingWater(int a[], int n)
    {
        int leftmax[n];
        int rightmax[n]; 
        
        leftmax[0] = a[0]; 
        
        for(int i=1; i<n; i++)
        {
            leftmax[i] = max(leftmax[i-1], a[i]); 
        }
        
        rightmax[n-1] = a[n-1];
        
        for(int i=n-2; i>=0; i--)
        {
            rightmax[i] = max(rightmax[i+1], a[i]); 
        }
        
        long long result=0;
        
        for(int i=1; i<n-1; i++)
        {
            result += (min(leftmax[i], rightmax[i])-a[i]);
        }
        
        return result; 
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends

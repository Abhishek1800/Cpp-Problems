//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            int i=0;
            int j=0;
            int k=0;
            
            vector<int>ans;
            
            int previous1;
            int previous2;
            int previous3;
            
            previous1=previous2=previous3=INT_MIN;
            
            while(i<n1 && j<n2 && k<n3)
            {
                while(A[i]==previous1 && i<n1)
                i++;
                
                while(B[j]==previous2 && j<n2)
                j++;
                
                while(C[k]==previous3 && k<n3)
                k++;
                
                if(A[i]==B[j] && B[j]==C[k])
                {
                    
                ans.push_back(A[i]);
                
                previous1=A[i];
                previous2=B[j];
                previous3=C[k];
                
                i++;
                j++;
                k++;
                
                }
                else if(A[i]<B[j])
                {
                    previous1=A[i];
                    i++;
                }
                else if(B[j]<C[k])
                {
                    previous2=B[j];
                    j++;
                }
                else
                {
                    previous3=C[k];
                    k++;
                }
            }
            return ans;
        }
};

//{ Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
}
// } Driver Code Ends

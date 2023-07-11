//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
public:
    
    vector<int> factorial(int n)
    {
        vector<int> answer;
        answer.push_back(1);
        for(int j=2;j<=n;j++)

        {
            int carry=0;
            for(int i=0;i<answer.size();i++)
            {
                int value= answer[i]*j+carry;
                answer[i]=value%10;
                carry=value/10;    
            }
            
            while(carry!=0)
            {
            answer.push_back(carry%10);
            carry/=10;
            }
            
        }
        reverse(answer.begin(),answer.end());
        return answer;
    }

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends

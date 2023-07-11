//Java Solution

class Solution 
{
    public String countAndSay(int n) 
	{
        
        if(n==1) return "1";
//         Recursion
        String s=countAndSay(n-1);
    
	    StringBuilder res = new StringBuilder();
        // String res="";
    
	    int counter=0;
        
        for(int i=0;i<s.length();i++)
        {
            counter++;
//             Segregating into groups
	        if(i==s.length()-1 || s.charAt(i)!=s.charAt(i+1))
            {
                res.append(counter).append(s.charAt(i));
                // res=res+counter+s.charAt(i);
                counter=0;
            }
        }
          return res.toString();      
    }
}

/*
 C++ Solution 
 
class Solution 
{
public:

    string countAndSay(int n) 
    {
        if(n==1)
            return "1";

        if(n==2)
            return "11";
        
        string str = "11";
        
        for(int i=3; i<=n ; i++)
        {
            string temp = "";
         
            str = str + "&"; 
            
            int cnt = 1;  
            
            for(int j = 1; j<str.length(); j++)
            {
                if(str[j]!=str[j-1])
                {
                    temp = temp + to_string(cnt); 
                    temp = temp + str[j-1]; 
                    cnt = 1; 
                }
                else
                    cnt++; 
            }
            str = temp;
        }
    return str;
    }
};

*/

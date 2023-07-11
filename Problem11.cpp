class Solution {
public:
    int findDuplicate(vector<int>& nums)
    {
        /* Approach 1:-
        int ans=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
                ans=nums[i];
        }
        return ans;
        */

        /*
        Approach 2:-
        int low=1;
        int high=nums.size()-1;
        int count;

        while(low<=high)
        {
            int mid=low+(high-low)/2;

            count=0;

            for(int n:nums)
                {
                    if(n<=mid)
                    count++;
                }

             if(count<=mid)
             low=mid+1;

             else
             high=mid-1;
         }
      return low;
      */

        /*
        Approach 3:-
        while(nums[0]!=nums[nums[0]])
            swap(nums[0],nums[nums[0]]);
            return nums[0];
        */

        // Approach 4:-

        int slow=nums[0];
        int fast=nums[0];

        do
        {
            slow=nums[slow];
            fast=nums[nums[fast]];
        }
        while(slow!=fast);

        fast=nums[0];

        while(slow!=fast)
        {
            slow=nums[slow];
            fast=nums[fast];
        }
        return slow;
    }
};

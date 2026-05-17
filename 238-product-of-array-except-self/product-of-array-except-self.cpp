class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // int n=  nums.size();
        // vector<int> ans(nums.size(),1);

        // for(int i=0; i<n;i++)
        // {
        //     int product =1;

        //     for(int j=0; j<n; j++)
        //     {
        //         if(i != j)
        //         {
        //             ans[i] *= nums[j];
        //         }
        //     }
        // }
        // return ans;  

        // // Optimal approach

        // int n=nums.size();
        // vector<int> ans(n,1);
        // vector<int> prefix(n,1);
        // vector<int> suffix(n,1);

        // //preifx 
        // prefix[0] =1;
        // for(int i=1; i<n; i++)
        // {
        //     prefix[i] = prefix[i-1] * nums[i-1];
        // }                    
        // //suffix
        // suffix[n-1] = 1;
        // for(int i=n-2; i>=0; i--)
        // {
        //     suffix[i] = suffix[i+1]* nums[i+1];
        // }

        // //ans
        // for(int i=0; i<n; i++)
        // {
        //     ans[i] = prefix[i] * suffix[i];
        // }

        // return ans;

        //Space compleaxity optimized

        int n=nums.size();
        vector<int> ans(n,1);

        //preifx => ans
        for(int i=1; i<n; i++)
        {
            ans[i] = ans[i-1] * nums[i-1];
        }                    
        
        //suffix
        int suffix = 1;
        for(int i=n-2; i>=0; i--)
        {
            suffix *= nums[i+1];
            ans[i] *= suffix;
        }

        return ans; //ans 
    }
};
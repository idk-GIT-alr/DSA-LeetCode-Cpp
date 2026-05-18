class Solution {
public: //solved
    int majorityElement(vector<int>& nums) {
        // int n = nums.size();
        // for (int val : nums) {
        //     int count = 0;
        //     for (int element : nums) {
        //         if (val == element) {
        //             count++;
        //         }
        //     }
        //     if (count > n / 2) {
        //         return val;
        //     }
        // }
        // return -1;

        // OPTIMIZED approach

        // int n = nums.size();
        
        // //sort 
        // sort (nums.begin(), nums.end());

        // //frequency count 
        // int freq=1, ans=nums[0];

        // for(int i=1; i<n; i++){
        //     if(nums[i] == nums[i-1]){
        //         freq++;
        //     }
        //     else{
        //         freq =1;
        //         ans = nums[i];
        //     }

        //     if(freq > n/2){
        //         return ans;
        //     }
        // }
        // return ans;

        //moore's majority voting algorithm

        int freq=0, ans=0;

        for(int i=0; i<nums.size(); i++){
            if(freq==0){
                ans= nums[i];
            }
            if(ans == nums[i]){
                freq++;
            }
            else{
                freq--;
            }
        }

        
        return ans;
    }
};
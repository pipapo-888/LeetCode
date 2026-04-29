class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
         int prod = 1, zero_count = 0;
         vector <int> ans(nums.size());

         for (const int& num : nums)
         {
            if (num != 0)
                prod *= num;
            else
                zero_count++;
         }
        
        for (int i = 0; i < nums.size(); i++)
        {
            if (zero_count == 0)
                ans[i] = prod / nums[i];
            else if (zero_count > 1 || (zero_count == 1 && nums[i] != 0))
                ans[i] = 0;
            else
                ans[i] = prod;
        }
        return ans;
    }
};
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int ans = 0;
        int tmp = 0;

        if (nums.size() == 0)
            return 0;

        sort(nums.begin(), nums.end());


        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] == nums[i - 1])
                continue ;
            if (nums[i] == nums[i - 1] + 1)
                tmp++;
            else
            {
                ans = max(ans, tmp + 1);
                tmp = 0;
            }
        }
        return (max(ans, tmp + 1));
    }
};
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size = nums.size();
        unordered_map<int, int> map;

        for (int i = 0; i < size; i++)
        {
            int find = target - nums[i];
            if (map.count(find))
                return {map[find], i};
            map[nums[i]] = i;
        }

        return {};
    }
};
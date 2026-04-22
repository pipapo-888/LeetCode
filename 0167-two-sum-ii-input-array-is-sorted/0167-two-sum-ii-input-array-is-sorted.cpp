class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // two pointerで左右から見ていく
        // right の値がtargetよりでかい分下げていく

        int left = 0, right = numbers.size() - 1;
        while (left < right)
        {
            if (numbers[left] + numbers[right] > target)
                right--;
            else if (numbers[left] + numbers[right] < target)
                left++;
            else
                return (vector<int>{left + 1, right + 1});
        }
        return (vector<int>(0));
    }
};
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // two pointerで左右から見ていく
        // right の値がtargetよりでかい分下げていく

        int left = 0, right = numbers.size() - 1;
        while (left < right)
        {
            if (numbers[left] + numbers[right] == target)
                return {left + 1, right + 1};
            else if (numbers[left] + numbers[right] < target)
                left++;
            else
                right--;
        }
        return (vector<int>(0));
    }
};
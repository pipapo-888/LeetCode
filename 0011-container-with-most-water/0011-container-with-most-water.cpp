class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0, j = height.size() - 1, max = 0;

        while (i < j)
        {
            int temp = (j - i) * min(height[i], height[j]);
            if (temp > max)
                max = temp;
            height[i] > height[j] ? j-- : i++;
        }
        return max;
    }
};
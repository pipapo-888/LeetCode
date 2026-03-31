int threeSumClosest(int* nums, int numsSize, int target) {
    int ans;
    int how_close = 99999;

    for (int i = 0; i < numsSize - 2; i++)
    {
        for (int j = i + 1; j < numsSize - 1; j++)
        {
            for (int k = j + 1; k < numsSize; k++)
            {
                int temp = abs((nums[i] + nums[j] + nums[k]) - target);
                if (temp < how_close)
                {
                    how_close = temp;
                    ans = nums[i] + nums[j] + nums[k];
                }
            }
        }
    }

    return (ans);
}
int cmp(const void* x, const void* y)
{
	if (*(int*)x > * (int*)y)
		return 1;
	else if (*(int*)x < *(int*)y)
		return -1;
	else
		return 0;
}

int threeSumClosest(int* nums, int numsSize, int target) {
    int ans = nums[0] + nums[1] + nums[numsSize - 1];

    if (numsSize == 3)
        return (nums[0] + nums[1] + nums[2]);
    qsort(nums, numsSize, sizeof(int), cmp);

   for (int i = 0; i < numsSize - 2; i++)
   {
        int left = i + 1, right = numsSize -1;

        while (left < right)
        {
            int sum = nums[i] + nums[left] + nums[right];
            if (sum == target)
                return (sum);
            if (abs(sum - target) < abs(ans - target))
                ans = sum;
            if (sum > target)
                right--;
            else
                 left++;    
        }
   }
    return (ans);
}
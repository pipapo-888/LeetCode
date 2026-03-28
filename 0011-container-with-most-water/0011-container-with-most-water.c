int min(int a, int b)
{
    if (a < b)
        return (a);
    return (b);
}

int maxArea(int* height, int heightSize) {
    int max_ans = 0;
    int temp;
    int left = 0, right = heightSize - 1;

    while (left < right)
    {
        temp = min(height[left], height[right]) * (right - left);
        if (temp > max_ans)
            max_ans = temp;
        if (height[left] < height[right])
            left++;
        else
            right--;
    }

    return (max_ans);
}
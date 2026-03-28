bool isPalindrome(int x) {
    if (x < 0)
        return false;
    // if (x < 10)
    //     return true;

    int original = x, temp;
    long rev_x = 0;

    while (x)
    {
        temp = x % 10;
        rev_x = rev_x * 10 + temp;
        x /= 10;
    }
    if (rev_x == original)
        return true;
    return (false);
}
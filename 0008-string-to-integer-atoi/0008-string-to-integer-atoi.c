int myAtoi(char* s) {
    int i = 0, minus = 1, pos = 0;
    long ans = 0;

    while(s[pos] == ' ')
        pos++;
    if (s[pos] == '+' || s[pos] == '-')
    {
        if (s[pos] == '-')
            minus = -1;
        pos++;
    }
    while (s[pos] >= '0' && s[pos] <= '9')
    {
        ans = ans * 10 + (s[pos] - '0');
        pos++;
        if (ans > INT_MAX)
            break ;
    }
    ans = ans * minus;

    if (ans >= INT_MAX)
        return (INT_MAX);
    if (ans <= INT_MIN)
        return (INT_MIN);

    return (ans);
}

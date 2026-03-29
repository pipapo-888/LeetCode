int is_opened(char c)
{
    if (c == '(' || c == '{' || c == '[')
        return (1);
    return (0);
}

int is_pair(int open, int close)
{
    if (open == '(' && close == ')')
        return (1);
    if (open == '[' && close == ']')
        return (1);
    if (open == '{' && close == '}')
        return (1);
    return (0);
}

bool isValid(char* s) {
    char c[strlen(s)];

    int n = 0;

    for (int i = 0; s[i]; i++)
    {
        if (is_opened(s[i]))
        {
            c[n] = s[i];
            n++;
        }
        else if(n > 0 && is_pair(c[n - 1], s[i]))
        {
            n--;
            c[n] = 0;
        }
        else
            return false;
    }
    if (c[0] != 0)
        return false;
    return true;
}
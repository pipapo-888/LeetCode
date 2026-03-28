#define I 1
#define V 5
#define X 10
#define L 50
#define C 100
#define D 500
#define M 1000

int to_c(char c)
{
    if (c == 'I')
        return (I);
    if (c == 'V')
        return (V);
    if (c == 'X')
        return (X);
    if (c == 'L')
        return (L);
    if (c == 'C')
        return (C);
    if (c == 'D')
        return (D);
    if (c == 'M')
        return (M);
    return (0);
}

int romanToInt(char* s) {
    size_t len = strlen(s);
    int ans = 0;

    for (int i = 0; i < len; i++)
    {
        if (s[i + 1] && (to_c(s[i]) < to_c(s[i + 1])))
        {
            ans += (to_c(s[i + 1]) - to_c(s[i]));
            i++;
        }
        else
            ans += to_c(s[i]); 
    }
    
    return (ans);
}
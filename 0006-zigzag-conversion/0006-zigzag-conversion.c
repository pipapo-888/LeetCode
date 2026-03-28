char* convert(char* s, int numRows) {
    size_t s_len = strlen(s);

    if (numRows == 1)
        return (s);
     char *ans = malloc(sizeof(char) * (s_len + 1));

    int ans_pos = 0;
    for (int i = 0; i < numRows; i++)
    {
        int pos = 0;
        if (i == 0 || i == numRows - 1)
        {
            while(s[pos])
            {
                if (pos % ((numRows - 1) * 2) == i)
                {
                    ans[ans_pos] = s[pos];
                    ans_pos++;
                }
                pos++;
            }
        } else {
            while (s[pos])
            {
                if (pos % ((numRows - 1) * 2) == i || pos % ((numRows - 1) * 2) == ((numRows - 1) * 2) - i)
                {
                    ans[ans_pos] = s[pos];
                    ans_pos++;
                }
                pos++;
            }
        }
    }
    ans[strlen(s)] = '\0';
    return (ans);
}
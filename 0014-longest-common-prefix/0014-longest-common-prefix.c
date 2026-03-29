char* longestCommonPrefix(char** strs, int strsSize) {
    char *ans = NULL;

    int pos = 0;

    while (pos < strlen(strs[0]))
    {
        char c = strs[0][pos];
        for (int i = 1; i < strsSize; i++)
        {
            if (!strs[i][pos] || strs[i][pos] != c)
            {
                strs[0][pos] = '\0';
                return (strs[0]);
            }     
        }
        pos++;
    }
    return (strs[0]);
}
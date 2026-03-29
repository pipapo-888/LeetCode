char* longestCommonPrefix(char** strs, int strsSize) {
    char *ans = NULL;
    for (int pos = 0;pos < strlen(strs[0]); pos++)
    {
        for (int i = 1; i < strsSize; i++)
        {
            if (!strs[i][pos] || strs[i][pos] != strs[0][pos])
            {
                strs[0][pos] = '\0';
                return (strs[0]);
            }     
        }
    }
    return (strs[0]);
}
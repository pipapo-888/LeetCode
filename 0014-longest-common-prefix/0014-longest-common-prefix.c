char* longestCommonPrefix(char** strs, int strsSize) {
    int pos = 0;

    while (pos < strlen(strs[0]))
    {
        for (int i = 1; i < strsSize; i++)
        {
            if (!strs[i][pos] || strs[i][pos] != strs[0][pos])
            {
                strs[0][pos] = '\0';
                return (strs[0]);
            }     
        }
        pos++;
    }
    return (strs[0]);
}
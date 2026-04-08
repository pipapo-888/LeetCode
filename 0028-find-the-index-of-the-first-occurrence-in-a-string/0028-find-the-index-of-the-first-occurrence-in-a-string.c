int strStr(char* haystack, char* needle) {
    char *head = haystack;
    char *str;
    if (str = memmem(haystack, strlen(haystack), needle, strlen(needle)))
        return (str - head);
    else
        return (-1);

 


}
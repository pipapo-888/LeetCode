char* intToRoman(int num) {

    char *str = (char *)malloc(20 * sizeof(char));
    int pos = 0;

    while (num >= 1000)
    {
        str[pos++] = 'M';
        num -= 1000;
    }
    while (num >= 900)
    {
        str[pos++] = 'C';
        str[pos++] = 'M';
        num -= 900;
    }
    while (num >= 500)
    {
        str[pos++] = 'D';
        num -= 500;
    }
    while (num >= 400)
    {
        str[pos++] = 'C';
        str[pos++] = 'D';
        num -= 400;
    }
    while (num >= 100)
    {
        str[pos++] = 'C';
        num -= 100;
    }
    while (num >= 90)
    {
        str[pos++] = 'X';
        str[pos++] = 'C';
        num -= 90;
    }
    while (num >= 50)
    {
        str[pos++] = 'L';
        num -= 50;
    }
    while (num >= 40)
    {
        str[pos++] = 'X';
        str[pos++] = 'L';
        num -= 40;
    }
    while (num >= 10)
    {
        str[pos++] = 'X';
        num -= 10;
    }
    while (num >= 9)
    {
        str[pos++] = 'I';
        str[pos++] = 'X';
        num -= 9;
    }
    while (num >= 5)
    {
        str[pos++] = 'V';
        num -= 5;
    }
    while (num >= 4)
    {
        str[pos++] = 'I';
        str[pos++] = 'V';
        num -= 4;
    }
    while (num >= 1)
    {
        str[pos++] = 'I';
        num--;
    }


    str[pos] = '\0';
    return str;
}
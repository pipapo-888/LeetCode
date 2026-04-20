class Solution {
public:
    int lengthOfLastWord(string s) {
        int size = s.size() - 1;

        while(s[size] == ' ')
            size--;
        int ans = 0;
        while (size >= 0 && s[size--] != ' ')
            ans++;

        return (ans);
    }
};
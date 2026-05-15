class Solution {
public:
    bool isPalindrome(string s) {
        int right = s.size() - 1;
        int left = 0;

        

        while (left < right)
        {
            while(!isalpha(s[left]) && left <= right)
                left++;
            while(!isalpha(s[right]) && left <= right)
                right--;
            if (toupper(s[left]) != toupper(s[right]))
                return false;
            left++;
            right--;
        }
        return true;
    }
};
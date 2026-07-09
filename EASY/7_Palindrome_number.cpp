class Solution {
public:
    bool isPalindrome(int x) {

        if (x < 0)
            return false;

        int y = x;
        int digit = 0;

        while (y > 0) {
            int temp = y % 10;
            digit = digit * 10 + temp;
            y /= 10;
        }

        return x == digit;
    }
};
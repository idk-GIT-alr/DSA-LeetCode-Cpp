class Solution { //solved
public:
    bool isPalindrome(int x) {
        int originalNum = x;
        int rem;
        long long  reverseNum = 0;
        while (x > 0) {
            rem = x % 10;
            reverseNum = (reverseNum * 10) + rem;
            x /= 10;
        }

        return originalNum == reverseNum;
    }
};
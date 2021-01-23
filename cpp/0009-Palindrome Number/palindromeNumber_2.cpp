class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
            return false;
        int tmp = x;
        long b = 0;
        while(tmp){
            long a = tmp % 10;
            b = b * 10 + a;
            tmp /= 10;
        }
        return (b == x);
    }
};
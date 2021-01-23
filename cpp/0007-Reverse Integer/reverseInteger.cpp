class Solution {
public:
    int reverse(int x) {
        long long a = 0;
        while(x != 0){
            long long tmp = x % 10;
            x /= 10;
            a = a *10 + tmp;
        }
        if(a > INT_MAX || a < INT_MIN )
                return 0;
        return a;
    }
};
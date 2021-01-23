class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
            return false;
        stringstream ss;
        ss << x;
        string a;
        ss >> a;
        int b = a.size();
        for(int i = 0; i < b/2; i++) {
            if(a[i] != a[b - 1 - i])
                return false;            
        }
        return true;
    }
};
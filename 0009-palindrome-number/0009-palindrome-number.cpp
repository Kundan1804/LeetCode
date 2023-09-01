class Solution {
public:
    bool isPalindrome(int x) {
        int long long y=0;
        int original = x;
        while(x>0){
            int temp =x%10;
            y =y*10 +temp;
            x = x/10;
        }
        return original==y;
    }
};
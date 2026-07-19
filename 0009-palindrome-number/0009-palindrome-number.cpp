class Solution {
public:
    bool isPalindrome(int x) {
        long long reverse = 0;
        int org = x;
        for(; x>0; x=x/10){
            int digit = x%10;
            reverse = reverse*10+digit;
        }
        if(org == reverse){
            return true;
        }
        else{
            return false;
        }
        return 0;
    }
};
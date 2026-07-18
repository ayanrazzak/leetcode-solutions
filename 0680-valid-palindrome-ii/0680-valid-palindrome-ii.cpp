class Solution {
public:
    bool check(string& s,int begin, int end)
    {
        while(begin<end){
            if(s[begin] != s[end]){
                return false;
            }
            begin++;
            end--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int begin = 0;
        int end = s.size()-1;
        while(begin<end){
            if(s[begin]!=s[end]){
                return check (s, begin+1, end) || check(s, begin, end-1);
            }
            begin++;
            end--;
        }
        return true;
    }
};
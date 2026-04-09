class Solution {
public:
    bool isPalindrome(string s) {
        int i=0, n= s.size();
        int j=n-1;
        while(i<j){
            if(!((s[i]>='a' && s[i] <='z') || (s[i]>='A' && s[i] <='Z') || (s[i]>='0' && s[i] <='9'))){
                i++;
                continue;
            }
            if(!((s[j]>='a' && s[j] <='z') || (s[j]>='A' && s[j] <='Z') || (s[j]>='0' && s[j] <='9'))){
                j--;
                continue;
            }
            if(s[i]!=s[j] && !((abs(int(s[i])-int(s[j]))==32) && int(s[i])>64 && int(s[j])>64)){
                return false;
            }
            else{
                i++;
                j--;
            }
        }
        return true;
    }
};

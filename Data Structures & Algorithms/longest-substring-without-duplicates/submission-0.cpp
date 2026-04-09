class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int m = 1;
        int n = s.length();
        if(n==0)
            return 0;
        for(int i=0;i<n-1;i++){
            set<char> ch;
            ch.insert(s[i]);
            int j  = i+1;
            while(j<n && ch.find(s[j])== ch.end()){
                ch.insert(s[j]);
                j++;
            }
            m=max(m,j-i);
        }
        return m;
    }
};

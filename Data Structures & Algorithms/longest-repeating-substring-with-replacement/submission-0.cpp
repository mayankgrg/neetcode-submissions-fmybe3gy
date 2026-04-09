class Solution {
public:
    int characterReplacement(string s, int k) {
        int max_count=0;
        set<char> st;
        map<char, int> m;
        int ans=0;
        int i=0, j=0, n= s.size();
        while(i<n && j<n){
            m[s[j]]++;
            if(max_count<m[s[j]]){
                max_count = m[s[j]];
            }
            if(j-i+1-max_count<=k){
                ans= max(ans, j-i+1);
            }else{
                m[s[i]]--;
                i++;
            }
            j++;
        }
        return ans;
    }
};
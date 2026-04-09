class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> w, np;
        for(auto i : t){
            np[i]++;
        }
        int have = 0, need = np.size(), n= s.size();
        int l=0, e=0, lans = 0, ans = INT_MAX;
        for(int i=0;i<n;i++){
            w[s[i]]++;
            if(np[s[i]]==w[s[i]])
                have++;

            while(have == need){
                if(ans>i-l+1){
                    ans = i-l+1;
                    lans = l;
                }
                w[s[l]]--;
                if(np[s[l]]>w[s[l]]){
                    have--;
                }
                l++;
            }
        }
        if(ans == INT_MAX)
            return "";
        return s.substr(lans, ans);

    }
};

class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> m, n;
        for(auto i : s){
            m[i]++;
        }
        for(auto i : t){
            n[i]++;
        }
        for(auto& [k,v] : m){
            if(n[k]!=v){
                return false;
            }
        }
        for(auto& [k,v] : n){
            if(m[k]!=v){
                return false;
            }
        }
        return true;
    }
};

class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> a(26, 0), b(26, 0);
        for(auto i : s)
            a[i-'a']++;
        for(auto i : t)
            b[i-'a']++;
        for(int i=0;i<a.size();i++){
            if(a[i]!=b[i]){
                return false;
            }
        }
        return true;
    }
};

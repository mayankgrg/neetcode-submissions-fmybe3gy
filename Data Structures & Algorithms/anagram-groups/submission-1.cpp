class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> m;
        for(int i=0;i<strs.size();i++){
            string x = "";
            vector<int> a(26,0);
            for(int j=0;j<strs[i].size();j++){
                a[strs[i][j]-'a']++;
            }
            for(int i=0;i<26;i++){
                if(a[i]>0)
                    x+=('a'+i);
                    x+= to_string(a[i]);
            }
            m[x].push_back(strs[i]);
        }
        vector<vector<string>> ans;
        for(auto& [k,v] : m){
            // cout<<k<<" ";
            // for(int i=0;i<v.size();i++)
            //     cout<<v[i]<<" ";
            // cout<<endl;
            ans.push_back(v);
        }
        return ans;
    }
};

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> ans;
        for(int i=0;i<temperatures.size();i++){
            for(int j=i+1;j<temperatures.size();j++){
                if(temperatures[j]>temperatures[i]){
                    ans.push_back(j-i);
                    break;
                }
            }
            if(ans.size()!=i+1)
                ans.push_back(0);
        }
        return ans;
    }
};

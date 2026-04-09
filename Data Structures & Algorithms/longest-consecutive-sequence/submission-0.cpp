class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map<int,int> dp;
        int m = 0;
        for(int i=0;i<nums.size();i++){
            dp[nums[i]]=1;
        }
        for(auto& [k,v] : dp){
            v = dp[k-1]+1;
            m= max(m,v);
        }
        return m;
    }
};

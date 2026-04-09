class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
         int n = nums.size();
        sort(nums.begin(),nums.end());
        set<vector<int>> ans;
        for(int i=0;i<n;i++){
            int j=i+1,k=n-1;
            while(j<k){
                int sum = nums[i]+nums[j]+nums[k];
                if(sum==0){
                    ans.insert({nums[i],nums[j],nums[k]});
                    j++;k--;
                }else if(sum>0){
                    k--;
                }else{
                    j++;
                }
            }
        }
        vector<vector<int>> a;
        for(auto& t : ans){
            a.push_back(t);
        }
        return a;
    }
};

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(abs(nums[i])<nums.size()){
                nums[abs(nums[i])]*=-1;
            }
        }
        int ans = -1;
        for(int i=0;i<nums.size();i++)
            if(abs(nums[i])<nums.size() && nums[abs(nums[i])]==0){
                nums[abs(nums[i])] = -1;
            }
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=0){
                ans = i;
                break;
            }
        }
        if(ans==-1)
            ans = nums.size();
        return ans;
    }
};

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1;
        if(r==0 && target==nums[0])
            return 0;
        while(l<=r){
            int m = (l+r)/2;
            if(nums[m]==target){
                return m;
            }
            if(nums[m]>=nums[l]){
                if(nums[m]>=target && nums[l]<=target){
                    r=m;
                }else{
                    l=m+1;
                }
            }else{
                if(target<=nums[r] && target>=nums[m]){
                    l=m;
                }else{
                    r=m;
                }
            }
        }
        return -1;
    }
};

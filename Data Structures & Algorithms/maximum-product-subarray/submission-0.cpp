class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max_so_far = nums[0], min_so_far = nums[0];
        int res = max_so_far;
        for(int i=1;i<nums.size();i++){
            int temp_max = max(max_so_far*nums[i], max(min_so_far*nums[i], nums[i]));
            min_so_far = min(max_so_far*nums[i], min(min_so_far*nums[i], nums[i]));

            max_so_far = temp_max;
            res = max(max_so_far, res);
        }
        return res;
    }
};
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> num;
        int n = nums.size();
        for(int i=0;i<n;i++)
            num.push_back({nums[i],i});
        sort(num.begin(), num.end());
        int i=0;
        int j=n-1;
        while(i<j){
            if(num[i].first+num[j].first==target){
                return {min(num[i].second,num[j].second), max(num[i].second,num[j].second)};
            }
            else if(num[i].first+num[j].first>target)
                j--;
            else
                i++;
        }
        return {-1};
    }
};

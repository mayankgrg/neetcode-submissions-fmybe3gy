class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        priority_queue<vector<int>> pq;
        vector<int> ans;

        for(int i=0;i<nums.size();i++){
            pq.push({nums[i], i});
            if(i<k-1)
                continue;
            while(!pq.empty() && i-pq.top()[1]>=k){
                pq.pop();
            }
            ans.push_back(pq.top()[0]);
        }
        return ans;
    }
};

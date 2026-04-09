class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> m;
        priority_queue<tuple<int,int>> pq;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(auto& [k,v] : m){
            pq.push(make_tuple(v,k));
        }
        vector<int> ans;
        while(k>0){
            ans.push_back(get<1>(pq.top()));
            pq.pop();
            k--;
        }
        return ans;
    }
};

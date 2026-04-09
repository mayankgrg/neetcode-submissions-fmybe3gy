class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int mex=0;
        for(int i=0;i<n;i++){
            int ans=0;
            if(i<n-1 && prices[i]<prices[i+1]){
                ans-=prices[i];
                int t = prices[i], m = prices[i];
                while(i<n && prices[i]>=t){
                    m=max(m,prices[i]);
                    i++;
                }
                ans+=m;
                mex=max(ans,mex);
                i--;
            }
        }
        return mex;
    }
};

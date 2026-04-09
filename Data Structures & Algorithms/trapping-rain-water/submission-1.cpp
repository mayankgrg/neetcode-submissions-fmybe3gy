class Solution {
public:
    int trap(vector<int>& height) {
         int ans=0,currMax=0,curr=0,maxElement=0;
        for(int i=0;i<height.size();i++){
            maxElement=max(maxElement,height[i]);
        }
        int i=0;
        for(;i<height.size();i++){
            if(height[i]>=currMax){
                ans+=curr;
                curr=0;
                currMax=height[i];
                if(height[i]==maxElement){
                    break;
                }
            }
            else{
                curr+=currMax-height[i];
            }
        }
        cout<<i;
        currMax=0,curr=0;
        for(int j=height.size()-1;j>=i;j--){
            if(height[j]>=currMax){
                ans+=curr;
                curr=0;
                currMax=height[j];
            }
            else{
                curr+=currMax-height[j];
            }
        }
        return ans;
    }
};

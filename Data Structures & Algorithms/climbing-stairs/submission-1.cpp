class Solution {
public:

    int climbStairs(int n) {
        if(n<3)
            return n;
        int sum=0,prev=2, pre=1;
        for(int i=3;i<=n;i++){
            sum=prev+pre;
            pre = prev;
            prev=sum;
        }
        return sum;
    }
};

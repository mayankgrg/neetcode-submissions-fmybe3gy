class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> v(n+1);
        if(n==0)
            return {0};
        v[0]=0,v[1]=1;
        int track=1;
        for(int i=2;i<=n;i++){
            if(track*2==i){
                track=i;
            }
            v[i]=1+v[i-track];
        }
        return v;
    }
};

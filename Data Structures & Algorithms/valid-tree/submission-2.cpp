class Solution {
public:

    int find(int i, vector<int>& parent){
        int x = parent[i];
        while(parent[x]!=x){
            x=parent[x];
        }
        return x;
    }

    void union1(int a, int b, vector<int>& parent){
        int x = find(a, parent);
        int y = find(b, parent);
        parent[y]=x;
        return;
    }

    bool validTree(int n, vector<vector<int>>& edges) {
        vector<int> parent(n);
        for(int i=0;i<n;i++)
            parent[i]=i;
        for(auto i : edges){
            int x = find(i[0], parent);
            int y = find(i[1], parent);
            if(x==y){
                cout<<"X";
                return false;
            }
            union1(i[0], i[1], parent);
        }
        int x = find(0, parent);
        for(int i=1;i<n;i++){
            int y = find(i, parent);
            if(x!=y)
                return false;
        }
        return true;
    }
};

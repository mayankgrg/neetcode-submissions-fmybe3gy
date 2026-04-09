class MinStack {
public:

    vector<pair<int, int>> v;
    MinStack() {
        v.clear();
    }
    
    void push(int val) {
        if(v.size()==0){
            v.push_back({val, val});
        }else{
            v.push_back({val, min(val, v.back().second)});
        }
        // for(auto i : v)
        //     cout<<i.first<<" "<<i.second<<" ";
        // cout<<endl;
    }
    
    void pop() {
        v.pop_back();
    }
    
    int top() {
        return v.back().first;
    }
    
    int getMin() {
        return v.back().second;
    }
};

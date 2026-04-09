class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<vector<int>> car;
        for(int i=0;i<position.size();i++)
            car.push_back({target - position[i], speed[i]});
        sort(car.begin(), car.end());

        vector<float> time;
        for(int i=0;i<car.size();i++){
            time.push_back(1.00000*car[i][0]/car[i][1]);
        }

        int count = 0;
        stack<float> st;
        st.push(time[0]);
        for(int i=1;i<time.size();i++){
            if(st.top()>=time[i])
                continue;
            st.push(time[i]);
        }
        return st.size();
    }
};

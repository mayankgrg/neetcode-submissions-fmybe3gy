class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        for(auto i : s){
            if(i=='(' || i=='[' || i=='{')
                st.push(i);
            else{
                if(st.size()==0)
                    return false;
                char a = st.top();
                st.pop();
                if(!((a=='(' && i==')') || (a=='{' && i=='}') || (a=='[' && i==']')))
                    return false;
            }
        }
        if(st.size()!=0)
            return false;
        return true;
    }
};
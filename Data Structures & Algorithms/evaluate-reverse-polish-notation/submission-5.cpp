class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int n = tokens.size();
        for(int i=0;i<n;i++){
            if((tokens[i][0]>='0' && tokens[i][0]<='9') || (tokens[i][0]=='-' && tokens[i].size()>1)){
                int x = 0;
                int z = 1;
                for(auto j : tokens[i]){
                    if(j=='-'){
                        z=-1;
                        continue;
                    }
                    x*=10;
                    x+=(j-'0');
                }
                st.push(z*x);
            }
            else{
                int x= st.top();
                st.pop();
                int y = st.top();
                st.pop();
                if(tokens[i][0]=='+')
                    st.push(x+y);
                else if(tokens[i][0]=='-')
                    st.push(y-x);
                else if(tokens[i][0]=='*')
                    st.push(x*y);
                else{
                    st.push(y/x);
                }
                cout<<x<<" "<<y<<endl;
            }
        }
        return st.top();
    }
};

class Solution {
public:
    bool isValid(string st) {
        stack<char> s;
        for(int i=0;i<st.size();i++){
            if(st[i]=='('||st[i]=='['||st[i]=='{'){
                s.push(st[i]);
            }
            else{
                if(s.empty()){
                    return false;
                }
                if((s.top()=='('&&st[i]==')')||
                (s.top()=='{'&&st[i]=='}')||
                (s.top()=='['&&st[i]==']')){
                    s.pop();
                }
                else{
                    return false;
                }
                      
            }
        }
        return s.empty();
    }
};

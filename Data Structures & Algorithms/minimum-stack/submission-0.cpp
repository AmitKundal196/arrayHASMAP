class MinStack {
public:
  stack<pair<int,int>> s;
    MinStack() {
      
    }
    
    void push(int val) {
        if(s.empty()){
           s.push({val,val});
        }
        else{
            int minelement=min(val,s.top().second);
            s.push({val,minelement});
        }
       
    }
    
    void pop() {
        s.pop();
    }
    
    int top() {
        return s.top().first;
    }
    
    int getMin() {
         return s.top().second;
    }
};

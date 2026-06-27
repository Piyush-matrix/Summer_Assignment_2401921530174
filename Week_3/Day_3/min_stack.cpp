cclass MinStack {
public:
    stack<long long> st;
    long long min;

    MinStack() {}

    void push(int val) {

        if(st.empty()){
            st.push(0);       
            min = val;
        }
        else{
            long long diff = (long long)val - min;
            st.push(diff);

            if(diff < 0)
                min = val;
        }
    }

    void pop() {

        long long diff = st.top();
        st.pop();

        if(diff < 0)
            min = min - diff;
    }

    int top() {

        long long diff = st.top();

        if(diff > 0)
            return (int)(min + diff);
        else
            return (int)min;
    }

    int getMin() {
        return (int)min;
    }
};

 */

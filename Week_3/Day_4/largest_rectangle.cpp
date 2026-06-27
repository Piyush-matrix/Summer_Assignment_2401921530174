class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int maxarea=0;
        stack<int> st;
        int nse,pse;
        int n=heights.size();
        for(int i=0;i<n;i++){
            while(!st.empty() && heights[st.top()]>heights[i]){
                int element=st.top();
                st.pop();
                nse=i;
                pse=st.empty()?-1: st.top();
                maxarea=max(maxarea,heights[element]*(nse-pse-1));
           }
            st.push(i);
        } 
        
    
    while(!st.empty()){
        int element=st.top();
        st.pop();
        nse=n;
        pse=st.empty()?-1: st.top();
        maxarea=max(maxarea,heights[element]*(nse-pse-1));
    }
    return maxarea;
    }
};

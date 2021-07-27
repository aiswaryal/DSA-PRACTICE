//Ques : Given an array, print the Next Greater Element (NGE) for every element. The Next greater Element for an element x is the first greater element on the right side of x in array. Elements for which no greater element exist, consider next greater element as -1.

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        stack<int> st;
        int n = nums1.size();
        int m = nums2.size();
        
        
        
                
                    for(int k = m-1 ; k >=0; k--){
                        if(st.empty() == true){
                            v.push_back(-1);
                        }
                        else if(!st.empty() && st.top()>nums2[k]){
                            v.push_back(st.top());
                            
                            
                        }
                        else if(!st.empty() && st.top()<=nums2[k]){
                            while(st.empty() == false && st.top() <= nums2[k] ){
                                st.pop();
                            }
                            if(st.empty() == true){
                                v.push_back(-1);
                            }
                            else{
                                v.push_back(-1);
                            }
                        }
                        st.push(nums2[k]);
                    }
                    reverse(v.begin(),v.end());
                
            
        
        return v;
    }
};

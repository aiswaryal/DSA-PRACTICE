class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>stack;
        map<int,int>map;
        vector<int>ans;
        /*we are using a stack to get the next greater element of each element of list2 in linear time. The next greater element of each element is stored in a map.
Secondly, we will store answer for each element of list1 in our answer array by using the map.*/
        for(int i=0;i<nums2.size();i++){
            /* we will traverse the list2 and repeatedly pop all elements from the top of stack which are smaller than current number and simultaneously, at each pop we will record the current element as the nearest greater answer of each popped element. For this mapping, we will simply use a map.*/
            while(!stack.empty()){
                if(stack.top()<nums2[i]){
                    map.insert(pair<int,int>(stack.top(),nums2[i]));
                    stack.pop();
                }else break;
            }
            stack.push(nums2[i]);
        }
        /*we will traverse the nums1 and store their respective values from map in our answer         list.*/
        for(int i=0;i<nums1.size();i++){
            int val = map[nums1[i]];
            if(val==0)ans.push_back(-1);
            else ans.push_back(val);
        }
        return ans;
    }
};

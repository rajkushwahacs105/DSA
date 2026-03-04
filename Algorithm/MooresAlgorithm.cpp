class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int result = 0;
        for(int val : nums ){
            if(count ==0){
                result = val;
            }
             if(val == result){
                count++;
             }else{
                count--;
             }
        }
        return result;
    }
};
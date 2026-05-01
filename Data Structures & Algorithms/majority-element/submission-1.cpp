class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int t = nums.size();
        for(int num : nums){
            int count=0;
            for(int i : nums){
                if(i==num){
                    count++;
                }
            }
            if(count > t / 2){
                return num;
            }
        }
        return -1;
    }
};
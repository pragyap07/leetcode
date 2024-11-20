class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int res=1;
        int in=1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]!=nums[i+1]){
                nums[in]=nums[i+1];
                in++;
                res++;
            }
        }
        return res;
    }
};
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=k%nums.size();
        int first=nums.size()-n;
        int last=nums.size()-1;
        while(first<last){
            int temp=nums[first];
            nums[first]=nums[last];
            nums[last]=temp;
            first++;
            last--;
        }
        int f=0;
        int l=nums.size()-n-1;
        while(f<l){
            int temp=nums[f];
            nums[f]=nums[l];
            nums[l]=temp;
            f++;
            l--;
        }
        int low=0;
        int high=nums.size()-1;
        while(low<high){
            int temp=nums[low];
            nums[low]=nums[high];
            nums[high]=temp;
            low++;
            high--;
        }
    }

        

};
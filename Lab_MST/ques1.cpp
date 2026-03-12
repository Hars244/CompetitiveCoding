class Solution {
public:

    int cntsubarray(vector<int>&nums,int k){
        int n=nums.size();
        int cnt=0;
        int curr=0;
        for(int i=0;i<n;i++){
            if(nums[i]<=k){
                curr++;
            }else{
                curr=0;
            }
            cnt+=curr;
        }
        return cnt;
    }

    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        int a=cntsubarray(nums,right);
        int b=cntsubarray(nums,left-1);

        return a-b;
    }
};
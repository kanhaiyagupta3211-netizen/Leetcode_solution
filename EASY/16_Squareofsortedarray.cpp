class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        int n=nums.size();
        vector<int> result(n);
        int left=0;
        int right=n-1;
        int position=n-1;
        
        while(left<=right){
            int leftsquare=nums[left]*nums[left];
            int rightsquare=nums[right]*nums[right];

            if(leftsquare<rightsquare){
                result[position]=rightsquare;
                right--;
            }

            else{
                result[position]=leftsquare;
                left++;
            }
            position--;
        }

        return result;
    }
};
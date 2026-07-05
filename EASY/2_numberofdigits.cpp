class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int even=0;
        for(int i=0;i<nums.size();i++){
            int count=0;
            int temp=nums[i];
            while(temp>0){
                count++;
                temp/=10;

            }
            if(count%2==0){
                even+=1;
            }
        }
        return even;
        
    }
};
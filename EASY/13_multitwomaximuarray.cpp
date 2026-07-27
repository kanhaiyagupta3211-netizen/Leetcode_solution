class Solution {
public:
    int maxProduct(vector<int>& nums) {
      
       int largest=nums[0];
       int secondlargest=nums[1];

       if(secondlargest>largest){
        swap(largest,secondlargest);
       }

       for(int i=2;i<nums.size();i++){
        if(nums[i]>largest){
            secondlargest=largest;
            largest=nums[i];
            
        }

        else if(nums[i]>secondlargest){
            secondlargest=nums[i];
        }
       }

       return (largest-1)*(secondlargest-1);
    }
};
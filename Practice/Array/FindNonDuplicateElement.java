class FindNonDuplicateElement {
   
    public int singleNonDuplicate(int[] nums) {
    int high = nums.length-2 , low =0 , mid ;
    // condition for left half
    // first instance even second instance odd 
    // right half first instance odd second even 
    while(low<=high){
        
        mid = (low+high)/2;
        if(nums[mid^1]==nums[mid])
        low = mid+1;
        else 
        high = mid-1; 
    }
    return nums[low];
}
}
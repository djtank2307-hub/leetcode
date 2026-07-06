void moveZeroes(int* nums, int numsSize) {
    int interposition = 0;
    for(int i = 0; i < numsSize; i++)
    {
        if(nums[i] != 0)
        {
            nums[interposition]=nums[i];
            interposition++;
        }
    }   
    
    while(interposition < numsSize)
    {
        nums[interposition++] = 0;
    }
    
}
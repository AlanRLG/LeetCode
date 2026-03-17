/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int suma;
    int *resul = (int*)malloc(numsSize * sizeof(int));
    
    for(int i=0; i < numsSize; i++ ){
        for(int j = i+1; j < numsSize; j++){
            suma = nums[i] + nums[j];
            
            if (suma == target){
                resul[0] = i;
                resul[1] = j;
                *returnSize = 2;
                return resul; 
            }
        }
    }
    return 0;
}
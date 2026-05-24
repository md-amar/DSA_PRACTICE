double findMaxAverage(int* nums, int numsSize, int k) {
    long long sum = 0;
    
    // Step 1: Calculate the exact sum of the first window
    for (int i = 0; i < k; i++) {
        sum += nums[i];
    }
    
    long long max_sum = sum;
    
    // Step 2: Slide the window safely from index k to numsSize - 1
    for (int i = k; i < numsSize; i++) {
        sum += (nums[i] - nums[i - k]); 
        if (sum > max_sum) {
            max_sum = sum;
        }
    }
    
    // Step 3: Perform floating-point division at the end
    return (double)max_sum / k;
}

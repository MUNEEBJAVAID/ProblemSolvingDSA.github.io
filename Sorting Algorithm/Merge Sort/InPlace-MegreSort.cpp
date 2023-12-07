// Merge function to merge two halves of the array
    void merge(vector<int>& nums, int start, int end, int mid) {
        // get the length of leftPart and RightPart
        int total_length = (mid - start + 1) + (end - mid);

        // ceil 
        int gap = (total_length/2) +(total_length % 2);

        while(gap > 0){

            int startIndex = start; int gapIndex = start + gap;
            while(gapIndex <= end){
                if(nums[startIndex] > nums[gapIndex]){
                    swap(nums[startIndex]  , nums[gapIndex]);
                }
               startIndex++; gapIndex++;
            }

            // check if gap value is 1 or less than 1 its mean array is sort otherwise update a            gap 
            gap = gap <= 1? 0: (gap/2) + (gap%2);
        } 
    }

    // Merge Sort function
    void mergeSort(vector<int>& nums, int start, int end) {
        // Base Case: If the array has one element or is empty, it's already sorted
        if (start >= end) {
            return;
        }

        int mid = (start + end) >> 1;

        // Recursive calls to sort the left and right halves
        mergeSort(nums, start, mid);
        mergeSort(nums, mid + 1, end);

        // Merge the sorted halves
        merge(nums, start, end, mid);
    }


    vector<int> sortArray(vector<int>& nums) {
        // Call the mergeSort function to sort the input array
        mergeSort(nums, 0, nums.size() - 1);

        // Return the sorted array
        return nums;
    }

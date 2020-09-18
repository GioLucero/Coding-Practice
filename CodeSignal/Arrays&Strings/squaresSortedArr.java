import java.lang.reflect.Array;
import java.util.Arrays; 

class Solution {
    // Test case:
    int[] nums = {-4, -1, 0, 3, 10};

    public int squareSortedArr(int[] nums) {
        // 1. Get squares of each value in array
        // 2. Sort Arr
        int size = nums.length;
        int[] newArr = new int[size];

        // 1.
        for(int i=0; i<nums.length; i++) {
            // Populate new array 
            newArr[i] = nums[i] * nums[i];
        }

        // 2. 
        Arrays.sort(newArr);

        return newArr;
    }
}
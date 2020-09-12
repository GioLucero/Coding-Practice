boolean alternatingSort(int[] a) {
    // Initialize new array 'b'
    HashMap<Integer, Integer> b = new HashMap<>();
    // Iterate through array and populate 'b'
    // i starts at begining of arr
    for (int i=0; i<a.length; i++) {
        // j starts at the end of array
        for (int j = a.length-1; i>=0; i--) {
            // Count determines the alternating pattern of populating b array
            int count = 0;
            if (count == 0 | count % 2 == 0) {
                b.put(count, a[i]);
                ++count;
                ++i;
            } else {
                b.put(count, a[j]);
                ++count;
                ++j;
            }
        }
    }
    
    for (int i : b) {
        
    }
}

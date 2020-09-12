// Determine if a string has all unique characters

// Test Case: s = 'abcdefg'
// Return : True

class Solution {

}

// Solution 1:
boolean allUniqChars(String s) {
    int size = s.length();
    char c = s.charAt(i);
    HashSet<String> newArr = new HashSet<>();

    for (int i=0; i<size; i++) {
        if(newArr.containsKey(c)) {
            return false;
        } else {
            newArr.add(c);
        }
    }
    if (newArr.length() == size) {
        return true;
    }
    return false;
}

// Solution 2:
boolean allUniqChars(String s) {
    for (int i=0; i<s.length; i++) {
        for (int j=i+1; j<s.length; j++) {
            if (s.charAt(i) == s.charAt(j)) {
                return false;
            }
        }
    }
    return true;
}
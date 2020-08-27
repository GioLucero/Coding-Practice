// Solution 1: Using built-in java functions (indexOf)
char firstNotRepeatingCharacter(String s) {
    for(int i=0 ; i < s.length(); i++) {
        if(s.indexOf(s.charAt(i)) == s.lastIndexOf(s.charAt(i))) {
            return s.charAt(i);
        }
    }
    return '_';
}

// Solution 2: HashMap
char firstNotRepeatingCharacter(String s) {
    HashMap<Character, Integer> count = new HashMap<>();
    for(int i=0; i<s.length(); i++) {
        char c = s.charAt(i);
        // If hashmap contains current index, add to occurence counter
        if (count.containsKey(c)) {
            count.put(c, count.get(c) + 1);
        // Otherwise, set counter to 1
        } else {
            count.put(c, 1);
        }
    }
    // Find min index value
    for (int i=0; i<s.length(); i++) {
        char c = s.charAt(i);
        if (count.get(c) == 1) return c;
    }
    return '_';
}

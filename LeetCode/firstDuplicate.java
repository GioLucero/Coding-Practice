int firstDuplicate(int[] a) {
    HashSet<Integer> newArr = new HashSet();

    for(int i=0; i<a.length; i++) {
        if(newArr.contains(a[i])) {
            return a[i];
        } else {
            newArr.add(a[i]);
        }
    }
    return -1;
}
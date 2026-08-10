class Solution {
    public boolean canBeEqual(String s1, String s2) {
        boolean evenMatch = false;
        boolean oddMatch = false;
        if(s1.charAt(0) == s2.charAt(0) && s1.charAt(2) == s2.charAt(2) || s1.charAt(0) == s2.charAt(2) && s1.charAt(2) == s2.charAt(0)){
            evenMatch = true;
        }
        if(s1.charAt(1) == s2.charAt(1) && s1.charAt(3) == s2.charAt(3) || s1.charAt(1) == s2.charAt(3) && s1.charAt(3) == s2.charAt(1)){
            oddMatch = true;
        }
        return(evenMatch && oddMatch);
    }
}

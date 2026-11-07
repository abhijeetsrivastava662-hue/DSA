class Solution {
    public long countValidSubstrings(String s) {
        int n = s.length(), lastInvalidStart = -1;
        long count = 0;

        for (int i = 0; i < n; i++) {
            if (i >= 2 && s.charAt(i-2) == 'a' && s.charAt(i-1) == 'b' && s.charAt(i) == 'c') {
                lastInvalidStart = i - 2;
            }

            count += (i - lastInvalidStart);
        }


        return count;
    }
}
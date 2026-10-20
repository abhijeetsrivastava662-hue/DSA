class Solution {
    public int sortableIntegers(int[] nums) {
        int n = nums.length;
        int ans = 0;

        for (int k = 1; k <= n; k++) {
            if (n % k != 0) continue;

            boolean possible = true;
            int prevMax = Integer.MIN_VALUE;

            for (int start = 0; start < n; start += k) {
                int min = Integer.MAX_VALUE;
                int max = Integer.MIN_VALUE;
                int drops = 0;

                for (int i = start; i < start + k; i++) {
                    min = Math.min(min, nums[i]);
                    max = Math.max(max, nums[i]);

                    int next = (i == start + k - 1) ? start : i + 1;

                    if (nums[i] > nums[next]) drops++;
                }

                if (drops > 1 || prevMax > min) {
                    possible = false;
                    break;
                }

                prevMax = max;
            }

            if (possible) ans += k;
        }

        return ans;
    }
}
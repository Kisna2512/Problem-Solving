class Solution {

    public int sumOddLengthSubarrays(int[] arr) {
        int n = arr.length;

        int[] preSum = new int[n];

        preSum[0] = arr[0];

        for (int i = 1; i < n; i++) {
            preSum[i] = preSum[i - 1] + arr[i];
        }
        int sum = 0;
        int i = 0;
        while (i < arr.length) {
            sum += preSum[i];
            for (int j = 1; j < preSum.length - i; j++) {
                sum += preSum[i + j] - preSum[j - 1];
            }
            i += 2;
        }

        return sum;
    }
}

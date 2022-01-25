import java.util.Arrays;

public class NonDivisibleSets {
    static int subSetPairNotDivisible(int arr[], int N, int K) {
        int f[] = new int[K];
        Arrays.fill(f, 0);

        for (int i = 0; i < N; i++) {
            f[arr[i] % K]++;
        }

        if (K % 2 == 0) {
            f[K / 2] = Math.min(f[K / 2], 1);
        }

        int res = Math.min(f[0], 1);

        for (int i = 1; i <= K / 2; i++) {
            res += Math.max(f[i], f[K - 1]);
        }
        return res;
    }
}
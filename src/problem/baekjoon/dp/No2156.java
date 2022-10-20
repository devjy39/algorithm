package problem.baekjoon.dp;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class No2156 {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        int[][] dp = new int[n + 1][3];

        for (int i = 1; i <= n; i++) {
            int curNumber = Integer.parseInt(br.readLine());
            dp[i][0] = maxOfThreeArray(dp[i - 1]);
            dp[i][1] = dp[i - 1][0] + curNumber;
            dp[i][2] = dp[i - 1][1] + curNumber;
        }
        br.close();

        System.out.println(maxOfThreeArray(dp[n]));
    }

    private static int maxOfThreeArray(int[] arr) {
        return Math.max(arr[0], Math.max(arr[1], arr[2]));
    }
}
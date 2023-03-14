package Fibonacci;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.StringTokenizer;

public class Main {
	static int[] dp;
	static int[] memo;
	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		StringBuilder sb = new StringBuilder();
		StringTokenizer st = new StringTokenizer(br.readLine());
		int n = Integer.parseInt(st.nextToken());
		dp = new int[n + 1];
		dp[0] = 0;
		dp[1] = 1;
		for(int i = 2; i < n; i++) { // iterator - bottom_up
			dp[i] = dp[i - 1] + dp[i - 2];
		}
		memo = new int[n + 1];
		fibo(n); // recursion - top_down
		sb.append(dp[n - 1] + " " + memo[n - 1]);
		bw.write(sb.toString());
		bw.flush();
		bw.close();
		br.close();
	}
	private static int fibo(int n) {
		// TODO Auto-generated method stub
		if(memo[n] != 0) return memo[n];
		if(n < 0) return -1; // error
		if(n <= 1) return n;
		return memo[n] = fibo(n - 1) + fibo(n - 2); 
	}

}

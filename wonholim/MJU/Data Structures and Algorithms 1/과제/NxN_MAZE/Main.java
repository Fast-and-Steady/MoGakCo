package NxN_MAZE;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.Random;
import java.util.StringTokenizer;

public class Main {

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		StringBuilder sb = new StringBuilder();
		StringTokenizer st;
		System.out.print("배열의 길이 : ");
		st = new StringTokenizer(br.readLine());
		int n = Integer.parseInt(st.nextToken());
		int[][] maze = new int[n + 1][n + 1];
		int[][] dp = new int[n + 1][n + 1];
		Random random = new Random();
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
				maze[i][j] = random.nextInt(10);
			}
		}
		//Iteration
		sb.append("Iterator Result : " + mazeIteration(maze ,dp, n) + "\n");
		//Recursion
		sb.append("Recursion Result : " + mazeRecursion(maze, n, n) + "\n");
		bw.write(sb.toString());
		bw.flush();
		bw.close();
		br.close();
	}

	private static int mazeIteration(int[][] maze, int[][] dp, int n) {
		// TODO Auto-generated method stub
		for(int i = 1; i <= n; i++) {
			for(int j = 1; j <= n; j++) {
				dp[i][j] = maze[i][j] + Math.max(dp[i - 1][j], dp[i][j - 1]);
			}
		}
		return dp[n][n];
	}

	private static int mazeRecursion(int[][] maze, int i, int j) {
		// TODO Auto-generated method stub
		if(i == 0 || j == 0) return 0;
		return (maze[i][j] + Math.max(mazeRecursion(maze, i - 1, j), mazeRecursion(maze, i, j - 1)));
	}

}


import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.StringTokenizer;

public class Main {
	static int[] c;
	static int MOD = 9901;
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		StringBuilder sb = new StringBuilder();
		StringTokenizer st = new StringTokenizer(br.readLine());
		int n = Integer.parseInt(st.nextToken());
		c = new int[n + 1];
		c[0] = 1;
		c[1] = 3;
		for(int i = 2; i <= n; i++) {
			c[i] = (c[i - 1] * 2 + c[i - 2]) % MOD;
		}
		sb.append(c[n]);
		bw.write(sb.toString());
		bw.flush();
		bw.close();
		br.close();
	}
}

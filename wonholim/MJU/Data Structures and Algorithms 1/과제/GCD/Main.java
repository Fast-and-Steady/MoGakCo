package GCD;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.StringTokenizer;

public class Main {

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		StringBuilder sb = new StringBuilder();
		StringTokenizer st = new StringTokenizer(br.readLine());
		int a = Integer.parseInt(st.nextToken());
		int b = Integer.parseInt(st.nextToken());
		sb.append(gcd(a, b) + "\n"); // recursion - top_down
		while(true) { // iterator - bottom_up
			if(a < b) {
				a ^= b;
				b ^= a;
				a ^= b;
			}
			int r = a % b;
			if(r == 0) {
				sb.append(b);
				break;
			}else {
				a = Math.max(b, r);
				b = Math.min(b, r);
			}
			
					
		}
		bw.write(sb.toString());
		bw.flush();
		bw.close();
		br.close();
	}
	public static int gcd(int a, int b) {
		if(b == 0) return a;
		return gcd(b, a % b);
	}
}

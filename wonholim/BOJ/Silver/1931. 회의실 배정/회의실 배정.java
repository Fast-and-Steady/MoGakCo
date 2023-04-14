import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.ArrayList;
import java.util.Collections;
import java.util.StringTokenizer;

public class Main {
	static class Office implements Comparable<Office>{
		int s;
		int e;
		public Office(int s, int e) {
			this.s = s;
			this.e = e;
		}
		public int compareTo(Office o) {
			if(this.e == o.e) return this.s - o.s;
			return this.e - o.e;
		}
	}
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		StringBuilder sb = new StringBuilder();
		StringTokenizer st = new StringTokenizer(br.readLine());
		ArrayList<Office> list = new ArrayList<>();
		int n = Integer.parseInt(st.nextToken());
		while(n --> 0) {
			st = new StringTokenizer(br.readLine());
			int s = Integer.parseInt(st.nextToken());
			int e = Integer.parseInt(st.nextToken());
			list.add(new Office(s, e));
		}
		Collections.sort(list);
		Office o = new Office(0, 0);
		int count = 0;
		for(int i = 0; i < list.size(); i++) {
			Office f = list.get(i);
			if(o.e <= f.s) {
				o.e = f.e;
				count++;
			}
		}
		sb.append(count);
		bw.write(sb.toString());
		bw.flush();
		bw.close();
		br.close();
	}
}

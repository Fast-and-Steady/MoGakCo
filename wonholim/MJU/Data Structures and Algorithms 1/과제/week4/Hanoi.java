package week4;

import java.io.*;
import java.util.*;

public class Hanoi{
	static class Record{
		int num;
		int from;
		int to;
		public Record(int num, int from, int to) {
			this.num = num;
			this.from = from;
			this.to = to;
		}
	}
	static StringBuilder sb = new StringBuilder();
	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		StringTokenizer st = new StringTokenizer(br.readLine());
		int n = Integer.parseInt(st.nextToken());
		sb.append((int)Math.pow(2, n) - 1 + "\n");
		iteration(n, 1, 3);
		bw.write(sb.toString());
		bw.flush();
		bw.close();
		br.close();
	}
	private static void iteration(int n, int i, int j) {
		// TODO Auto-generated method stub
		Stack<Record> s = new Stack<>();
		s.push(new Record(n, i, j));
		while(!s.isEmpty()) {
			Record record = s.pop();
			int num = record.num;
			int from = record.from;
			int to = record.to;
			if(num == 1) {
				sb.append(from + " " + to + "\n");
			}else {
				s.push(new Record(num - 1, 6 - from - to, to));
				s.push(new Record(1, from, to));
				s.push(new Record(num - 1, from, 6 - from - to));
			}
		}
	}

}


import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.PriorityQueue;
import java.util.StringTokenizer;

public class Main {
	static class Node implements Comparable<Node>{
		int x;
		int y;
		int d;
		public Node(int x, int y, int d) {
			this.x = x;
			this.y = y;
			this.d = d;
		}
		@Override
		public int compareTo(Node o) {
			// TODO Auto-generated method stub
			return this.d - o.d;
		}

	}
	static int[] parent;
	static PriorityQueue<Node> pq;
	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		StringBuilder sb = new StringBuilder();
		StringTokenizer st = new StringTokenizer(br.readLine());
		int n = Integer.parseInt(st.nextToken());
		int t = Integer.parseInt(st.nextToken());
		parent = new int[n + 1];
		for(int i = 1; i < n + 1; i++) {
			parent[i] = i;
		}
		pq = new PriorityQueue<>();
		while(t --> 0) {
			st = new StringTokenizer(br.readLine());
			int x = Integer.parseInt(st.nextToken());
			int y = Integer.parseInt(st.nextToken());
			int d = Integer.parseInt(st.nextToken());
			pq.offer(new Node(x, y, d));
			pq.offer(new Node(y, x, d));
		}
		int max = 0;
		while(!pq.isEmpty()) {
			Node cur = pq.poll();
			if(!find(cur.x, cur.y)) {
				unionParent(cur.x, cur.y);
				max = Math.max(cur.d, max);
			}
		}
		sb.append(max);
		bw.write(sb.toString());
		bw.flush();
		bw.close();
		br.close();
	}
	public static void unionParent(int x, int y) {
		x = getParent(x);
		y = getParent(y);
		if(x > y) parent[x] = y;
		else parent[y] = x;
	}
	public static boolean find(int x, int y) {
		x = getParent(x);
		y = getParent(y);
		return x == y ? true : false;
	}
	public static int getParent(int x) {
		if(parent[x] == x) return x;
		return parent[x] = getParent(parent[x]);
	}
}

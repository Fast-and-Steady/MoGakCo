package Hanoi;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.Stack;
import java.util.StringTokenizer;

public class Main {
	static StringBuilder sb;
	static int count;
	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		sb = new StringBuilder();
		System.out.print("원판의 개수 : ");
		StringTokenizer st = new StringTokenizer(br.readLine());
		int size = Integer.parseInt(st.nextToken());
		count = 0;
		//recursion
		hanoiTower(size, 1, 3);
		sb.append("Recursion hanoiTower count : " + count + "\n");
		count = 0;
		bw.write(sb.toString());
		bw.flush();
		bw.close();
		br.close();

	}

	public static void hanoiTower(int size, int start, int end) {
		if(size == 1) {sb.append(start + "에서 " + end + "로 옮김\n"); return;}
		count++;
		hanoiTower(size - 1, start, 6 - start - end);
		sb.append(start + "에서 " + end + "로 옮김\n");
		count++;
		hanoiTower(size - 1, 6 - start - end, end);
	}
}

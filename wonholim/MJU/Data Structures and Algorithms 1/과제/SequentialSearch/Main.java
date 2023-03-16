package SequentialSearch;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.Arrays;
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
		int[] a = new int[n];
		System.out.print("넣을 문자의 값 : " + n + "개를 하나의 줄로 입력하세요 : ");
		st = new StringTokenizer(br.readLine());
		for(int i = 0; i < n; i++) {
			a[i] = Integer.parseInt(st.nextToken());
		}
		System.out.print("찾을 값을 입력하세요 : ");
		int key = Integer.parseInt(br.readLine());
		// Before
		sb.append("Before Result Index : " + seqSearch1(a, key) + "\n");
		Arrays.sort(a);
		// After
		sb.append("After Result Index : " + seqSearch2(a, key) + "\n");
		bw.write(sb.toString());
		bw.flush();
		bw.close();
		br.close();
	}

	private static int seqSearch2(int[] a, int key) {
		// TODO Auto-generated method stub
		for(int i = 0; i < a.length; i++) {
			if(a[i] == key) return i;
		}
		return -1;
	}

	private static int seqSearch1(int[] a, int key) {
		// TODO Auto-generated method stub
		for(int i = 0; i < a.length; i++) {
			if(a[i] == key) return i;
		}
		return -1;
	}

}

package BinarySearch;

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
		Arrays.sort(a);
		System.out.print("찾을 값을 입력하세요 : ");
		int key = Integer.parseInt(br.readLine());
		//Iteration
		sb.append("Iteration Result Index : " + binarySearchIteration(a, key, 0, n - 1) + "\n");
		//Recursion
		sb.append("Recursion Result Index : " + binarySearchRecursion(a, key, 0, n - 1) + "\n");
		bw.write(sb.toString());
		bw.flush();
		bw.close();
		br.close();
	}

	private static int binarySearchRecursion(int[] a, int key, int start, int end) {
		// TODO Auto-generated method stub
		if(start > end) return -1;
		int mid = (start + end) / 2;
		if(a[mid] == key) return mid;
		if(a[mid] > key) return binarySearchRecursion(a, key, start, mid - 1);
		else return binarySearchRecursion(a, key, mid + 1, end);
	}

	private static int binarySearchIteration(int[] a, int key, int start, int end) {
		// TODO Auto-generated method stub
		if(start > end) return -1;
		while(start <= end) {
			int mid = (start + end) / 2;
			if(a[mid] == key) return mid;
			if(a[mid] > key) end = mid - 1;
			else start = mid + 1;
		}
		return -1;
	}

}

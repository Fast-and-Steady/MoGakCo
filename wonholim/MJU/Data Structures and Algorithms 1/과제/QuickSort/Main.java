package QuickSort;

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
		int[] a = new int[n];
		Random random = new Random();
		sb.append("배열 정렬 전 : ");
		for(int i = 0; i < n; i++) {
			a[i] = random.nextInt(100);
			sb.append(a[i] + " ");
		}
		quickSplit(a, 0, n - 1);
		sb.append("\n");
		sb.append("배열 정렬 후 : ");
		for(int i = 0; i < n; i++) {
			sb.append(a[i] + " ");
		}
		sb.append("\n");
		bw.write(sb.toString());
		bw.flush();
		bw.close();
		br.close();
	}

	private static void quickSplit(int[] a, int start, int end) {
		// TODO Auto-generated method stub
		if(start >= end) return;
		
		int pivot = parition(a, start, end);
		
		quickSplit(a, start, pivot - 1);
		quickSplit(a, pivot + 1, end);
	}

	private static int parition(int[] a, int start, int end) {
		// TODO Auto-generated method stub
		int left = start;
		int right = end;
		int pivot = a[start];
		
		while(left < right) {
			while(a[right] > pivot) --right;
			while(a[left] <= pivot && left < right) ++left;
			
			swap(a, left, right);
		}
		swap(a, start, left);
		
		return left;
	}

	private static void swap(int[] a, int left, int right) {
		// TODO Auto-generated method stub
		int tmp = a[left];
		a[left] = a[right];
		a[right] = tmp;
	}

}

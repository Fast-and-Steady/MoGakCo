package MergeSort;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.Arrays;
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
		sb.append("\n");
		a = Arrays.copyOf(mergeSplit(a), n);
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

	private static int[] mergeSplit(int[] a) {
		// TODO Auto-generated method stub
		if(a.length <= 1) return a;
		int mid = a.length / 2;
		int[] left = new int[mid];
		int[] right = new int[mid];
		left = mergeSplit(Arrays.copyOfRange(a, 0, mid));
		right = mergeSplit(Arrays.copyOfRange(a, mid, a.length));
		return mergeSort(left, right);

	}

	private static int[] mergeSort(int[] left, int[] right) {
		// TODO Auto-generated method stub
		int[] merge = new int[left.length + right.length];
		int leftPoint = 0;
		int rightPoint = 0;
		int index = 0;
		while(left.length > leftPoint && right.length > rightPoint) {
			if(left[leftPoint] > right[rightPoint]) {
				merge[index] = right[rightPoint];
				rightPoint++;
			}else {
				merge[index] = left[leftPoint];
				leftPoint++;
			}
			index++;
		}
		while(left.length > leftPoint) {
			merge[index] = left[leftPoint];
			leftPoint++;
			index++;
		}
		while(right.length > rightPoint) {
			merge[index] = right[rightPoint];
			rightPoint++;
			index++;
		}
		
		return merge;
	}

}

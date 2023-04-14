package week4;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Random;
import java.util.StringTokenizer;

public class MergeSort {

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		StringBuilder sb = new StringBuilder();
		System.out.print("원소의 개수 : ");
		StringTokenizer st = new StringTokenizer(br.readLine());
		int n = Integer.parseInt(st.nextToken());
		ArrayList<Integer> arr = new ArrayList<>();
		Random ran = new Random();
		sb.append("배열 정렬 전 : ");
		for(int i = 0; i < n; i++) {
			arr.add(ran.nextInt(100));
			sb.append(arr.get(i) + " ");
		}
		sb.append("\n");
		arr = mergeSort(arr);
		sb.append("배열 정렬 후 : ");
		for(int i = 0; i < n; i++) {
			sb.append(arr.get(i) + " ");
		}
		bw.write(sb.toString());
		bw.flush();
		bw.close();
		br.close();
	}

	private static ArrayList<Integer> mergeSort(ArrayList<Integer> arr) {
		// TODO Auto-generated method stub
		if(arr.size() <= 1) {
			return arr;
		}
		int k = arr.size() / 2;
		ArrayList<Integer> arr1 = new ArrayList<>();
		ArrayList<Integer> arr2 = new ArrayList<>();
		arr1 = mergeSort(new ArrayList<Integer>(arr.subList(0, k)));
		arr2 = mergeSort(new ArrayList<Integer>(arr.subList(k, arr.size())));
		return merge(arr1, arr2);
	}

	private static ArrayList<Integer> merge(ArrayList<Integer> arr1, ArrayList<Integer> arr2) {
		// TODO Auto-generated method stub
		ArrayList<Integer> ans = new ArrayList<>();
		int l = 0;
		int r = 0;
		int idx = 0;
		while(arr1.size() > l && arr2.size() > r) {
			if(arr1.get(l) > arr2.get(r)) {
				ans.add(arr2.get(r++));
			}else {
				ans.add(arr1.get(l++));
			}
		}
		while(arr2.size() > r) {
			ans.add(arr2.get(r++));
		}
		while(arr1.size() > l) {
			ans.add(arr1.get(l++));
		}
		return ans;
	}

}

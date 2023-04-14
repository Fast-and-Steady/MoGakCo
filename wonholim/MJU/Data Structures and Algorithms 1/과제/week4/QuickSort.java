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

public class QuickSort {

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		StringBuilder sb = new StringBuilder();
		StringTokenizer st;
		System.out.print("원소의 개수 : ");
		st = new StringTokenizer(br.readLine());
		int n = Integer.parseInt(st.nextToken());
		ArrayList<Integer> quick = new ArrayList<>();
		Random random = new Random();
		sb.append("배열 정렬 전 : ");
		for(int i = 0; i < n; i++) {
			quick.add(random.nextInt(100));
			sb.append(quick.get(i) + " ");
		}
		sb.append("\n");
		quick = quickSort(quick);
		sb.append("배열 정렬 후 : ");
		for(int i = 0; i < n; i++) {
			sb.append(quick.get(i) + " ");
		}
		sb.append("\n");
		bw.write(sb.toString());
		bw.flush();
		bw.close();
		br.close();
	}

	private static ArrayList<Integer> quickSort(ArrayList<Integer> quick) {
		// TODO Auto-generated method stub
		if(quick.size() <= 1) {
			return quick;
		}
		ArrayList<Integer> l = new ArrayList<>();
		ArrayList<Integer> r = new ArrayList<>();
		int pivot = quick.get(0);
		for(int i = 1; i < quick.size(); i++) {
			if(pivot < quick.get(i)) r.add(quick.get(i));
			else l.add(quick.get(i));
		}
		ArrayList<Integer> merge = new ArrayList<>();
		merge.addAll(quickSort(l));
		merge.addAll(Arrays.asList(pivot));
		merge.addAll(quickSort(r));
		
		return merge;
	}

}

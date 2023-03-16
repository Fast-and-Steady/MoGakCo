package Insertion;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.StringTokenizer;

public class Main {

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		StringBuilder sb = new StringBuilder();
		StringTokenizer st = new StringTokenizer(br.readLine());
		int size = Integer.parseInt(st.nextToken());
		int[] arr = new int[size];
		
		st = new StringTokenizer(br.readLine());
		for(int i = 0; i < size; i++) arr[i] = Integer.parseInt(st.nextToken());
		
		sb.append("배열 정렬 전\n");
		for(int i = 0; i < size; i++) sb.append(arr[i] + " ");
		
		// Insertion-Sort 삽입 정렬 알고리즘 
		for(int i = 0; i < size - 1; i++) {
			for(int j = i + 1; j > 0; j--) {
				if(arr[j - 1] > arr[j]) {
					arr[j] ^= arr[j - 1];
					arr[j - 1] ^= arr[j];
					arr[j] ^= arr[j - 1];
				}else {
					break;
				}
			}
		}
		
		sb.append("\n배열 정렬 후\n");
		for(int i = 0; i < size; i++) sb.append(arr[i] + " ");
		bw.write(sb.toString());
		bw.flush();
		bw.close();
		br.close();
	}

}

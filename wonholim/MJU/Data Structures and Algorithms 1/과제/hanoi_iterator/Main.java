package hanoi_iterator;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.Stack;
import java.util.StringTokenizer;

public class Main {
	static Stack<Integer> A;
	static Stack<Integer> B;
	static Stack<Integer> C;
	static StringBuilder sb;
	static int n;
    public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		sb = new StringBuilder();
		StringTokenizer st = new StringTokenizer(br.readLine());
		n = Integer.parseInt(st.nextToken());
		hanoi(n);
		bw.write(sb.toString());
		bw.flush();
		bw.close();
		br.close();
    }
    public static void hanoi(int n) {
        A = new Stack<>();
        B = new Stack<>();
        C = new Stack<>();
        for (int i = n; i > 0; i--) {
            A.push(i);
        }
        int totalCount = (int) Math.pow(2, n) - 1;
        for (int i = 1; i <= totalCount; i++) {
        	if(n % 2 == 0) {
	        	if(((i - 1) / 3) % 2 == 0) {
		            if (i % 3 == 1) {
		                if(!move(A, B, 1)) {
		                	notMove(B, A, 1);
		                }
		            } else if (i % 3 == 2) {
		                if(!move(A, C, 2)) {
		                	notMove(C, A, 2);
		                }
		            } else if (i % 3 == 0) {
		                if(!move(B, C, 3)){
		                	notMove(C, B, 3);
		                }
		            }
	        	}else {
	        		if (i % 3 == 1) {
		                if(!back(A, B, 1)) {
		                	notBack(B, A, 1);
		                }
		            } else if (i % 3 == 2) {
		                if(!back(C, A, 2)) {
		                	notBack(A, C, 2);
		                }
		            } else if (i % 3 == 0) {
		                if(!back(C, B, 3)) {
		                	notBack(B, C, 3);
		                }
		            }
	        	}
        	}else {
	        	if(((i - 1) / 3) % 2 == 0) {
		            if (i % 3 == 1) {
		                if(!move(A, C, 1)) {
		                	notMove(C, A, 1);
		                }
		            } else if (i % 3 == 2) {
		                if(!move(A, B, 2)) {
		                	notMove(B, A, 2);
		                }
		            } else if (i % 3 == 0) {
		                if(!move(C, B, 3)){
		                	notMove(B, C, 3);
		                }
		            }
	        	}else {
	        		if (i % 3 == 1) {
		                if(!back(A, C, 1)) {
		                	notBack(C, A, 1);
		                }
		            } else if (i % 3 == 2) {
		                if(!back(B, A, 2)) {
		                	notBack(A, B, 2);
		                }
		            } else if (i % 3 == 0) {
		                if(!back(B, C, 3)) {
		                	notBack(C, B, 3);
		                }
		            }
	        	}
        	}
        	sb.append("A번 기둥 : " + A + "\n");
        	sb.append("B번 기둥 : " + B + "\n");
        	sb.append("C번 기둥 : " + C + "\n");
        }
    }
    private static boolean notMove(Stack<Integer> from, Stack<Integer> to, int ABC) {
    	if(from.isEmpty()) return false;
        int disc = from.pop();
        if (to.isEmpty() || disc < to.peek()) {
            to.push(disc);
        } else {
            from.push(disc);
            return false;
        }
        if(n % 2 == 0) {
        	if(ABC == 1) sb.append("원판 " + disc + " 가  B 에서 A 로 이동한다.\n");
        	else if(ABC == 2) sb.append("원판 " + disc + " 가  C 에서 A 로 이동한다.\n");
        	else sb.append("원판 " + disc + " 가  C 에서 B 로 이동한다.\n");
        }else {
        	if(ABC == 1) sb.append("원판 " + disc + " 가  C 에서 A 로 이동한다.\n");
            else if(ABC == 2) sb.append("원판 " + disc + " 가  A 에서 B 로 이동한다.\n");
            else sb.append("원판 " + disc + " 가  B 에서 C 로 이동한다.\n");
        }
        return true;
    }
    
    private static boolean notBack(Stack<Integer> from, Stack<Integer> to, int ABC) {
    	if(from.isEmpty()) return false;
        int disc = from.pop();
        if (to.isEmpty() || disc < to.peek()) {
            to.push(disc);
        } else {
            from.push(disc);
            return false;
        }
        if(n % 2 == 0) {
	        if(ABC == 1) sb.append("원판 " + disc + " 가  B 에서 A 로 이동한다.\n");
	        else if(ABC == 2) sb.append("원판 " + disc + " 가  A 에서 C 로 이동한다.\n");
	        else sb.append("원판 " + disc + " 가  B 에서 C 로 이동한다.\n");
        }else {
            if(ABC == 1) sb.append("원판 " + disc + " 가  C 에서 A 로 이동한다.\n");
            else if(ABC == 2) sb.append("원판 " + disc + " 가  A 에서 B 로 이동한다.\n");
            else sb.append("원판 " + disc + " 가  C 에서 B 로 이동한다.\n");
        }
	    return true;
    }
    
    private static boolean move(Stack<Integer> from, Stack<Integer> to, int ABC) {
    	if(from.isEmpty()) return false;
        int disc = from.pop();
        if (to.isEmpty() || disc < to.peek()) {
            to.push(disc);
        } else {
            from.push(disc);
            return false;
        }
        if(n % 2 == 0) {
	        if(ABC == 1) sb.append("원판 " + disc + " 가  A 에서 B 로 이동한다.\n");
	        else if(ABC == 2) sb.append("원판 " + disc + " 가  A 에서 C 로 이동한다.\n");
	        else sb.append("원판 " + disc + " 가  B 에서 C 로 이동한다.\n");
        }else {
	        if(ABC == 1) sb.append("원판 " + disc + " 가  A 에서 C 로 이동한다.\n");
	        else if(ABC == 2) sb.append("원판 " + disc + " 가  A 에서 B 로 이동한다.\n");
	        else sb.append("원판 " + disc + " 가  C 에서 B 로 이동한다.\n");
        }
	    return true;
    }
    private static boolean back(Stack<Integer> from, Stack<Integer> to, int ABC) {
    	if(from.isEmpty()) return false;
        int disc = from.pop();
        if (to.isEmpty() || disc < to.peek()) {
            to.push(disc);
        } else {
            from.push(disc);
            return false;
        }
        if(n % 2 == 0) {
	        if(ABC == 1) sb.append("원판 " + disc + " 가  A 에서 B 로 이동한다.\n");
	        else if(ABC == 2) sb.append("원판 " + disc + " 가  C 에서 A 로 이동한다.\n");
	        else sb.append("원판 " + disc + " 가  C 에서 B 로 이동한다.\n");
        }else {
	        if(ABC == 1) sb.append("원판 " + disc + " 가  A 에서 C 로 이동한다.\n");
	        else if(ABC == 2) sb.append("원판 " + disc + " 가  B 에서 A 로 이동한다.\n");
	        else sb.append("원판 " + disc + " 가  B 에서 C 로 이동한다.\n");
        }
        return true;
    }

}

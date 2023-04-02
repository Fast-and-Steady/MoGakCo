import java.io.BufferedWriter;
import java.io.IOException;
import java.io.OutputStreamWriter;
import java.util.Scanner;

public class Main {
    static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    static int f(int start, int mid, int end, int n) throws IOException {
        if (n == 0) {
            return 0;
        }
        int prev = f(start, end, mid, n - 1);
        bw.write(start + " " + end + "\n");
        int next = f(mid, start, end, n - 1);

        return prev + 1 + next;
    }

    public static void main(String[] args) throws IOException {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        bw.write((int)(Math.pow(2, n) - 1) + "\n");
        f(1, 2, 3, n);
        bw.flush();
        bw.close();
    }
}
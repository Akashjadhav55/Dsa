// Q18: Print increasing alphabet per row (A, AB, ABC, ABCD, ABCDE).
// Input: An integer n
// Output: Increasing alphabet pattern

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j <= i; j++) {
                System.out.print((char) ('A' + j));
            }
            System.out.println();
        }
    }
}

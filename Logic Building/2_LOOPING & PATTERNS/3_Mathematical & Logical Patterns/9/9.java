// Q9: Print first n terms of an arithmetic progression (a, d).
// Input: First term a and common difference d, and n terms
// Output: First n terms of the AP

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int d = sc.nextInt();
        int n = sc.nextInt();
        for (int i = 0; i < n; i++) {
            System.out.print(a + i * d + " ");
        }
        System.out.println();
    }
}

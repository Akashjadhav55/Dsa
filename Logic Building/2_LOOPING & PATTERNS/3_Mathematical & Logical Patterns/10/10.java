// Q10: Print first n terms of a geometric progression (a, r).
// Input: First term a and common ratio r, and n terms
// Output: First n terms of the GP

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int r = sc.nextInt();
        int n = sc.nextInt();
        int term = a;
        for (int i = 0; i < n; i++) {
            System.out.print(term + " ");
            term *= r;
        }
        System.out.println();
    }
}

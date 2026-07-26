// Q14: Print single digit repeating pattern (1, 11, 111, 1111).
// Input: An integer n
// Output: Repeating digit pattern

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j < i; j++) {
                System.out.print(1);
            }
            System.out.println();
        }
    }
}

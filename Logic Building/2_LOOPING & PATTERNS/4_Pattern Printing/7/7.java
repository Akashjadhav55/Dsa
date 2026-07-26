// Q7: Print stars in even numbers (2, 4, 6, 8, 10).
// Input: An integer n
// Output: Rows with 2, 4, 6... stars

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j < 2 * i; j++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }
}

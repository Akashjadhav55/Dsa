// Q8: Print factorial of each number from 1 to n.
// Input: An integer n
// Output: Factorials of 1 to n

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        long fact = 1;
        for (int i = 1; i <= n; i++) {
            fact *= i;
            System.out.println(i + "! = " + fact);
        }
    }
}

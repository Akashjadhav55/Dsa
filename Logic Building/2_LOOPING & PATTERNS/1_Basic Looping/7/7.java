// Q7: Print the sum of all even numbers up to n.
// Input: An integer n
// Output: Sum of all even numbers from 2 to n

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int sum = 0;
        for (int i = 2; i <= n; i += 2) {
            sum += i;
        }
        System.out.println(sum);
    }
}

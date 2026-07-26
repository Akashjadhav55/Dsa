// Q1: Print the squares of numbers from 1 to n.
// Input: An integer n
// Output: Squares of 1 to n

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for (int i = 1; i <= n; i++) {
            System.out.println(i * i);
        }
    }
}

// Q1: Print a multiplication table in a formatted grid (10x10).
// Input: None
// Output: 10x10 multiplication table

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        for (int i = 1; i <= 10; i++) {
            for (int j = 1; j <= 10; j++) {
                System.out.printf("%4d", i * j);
            }
            System.out.println();
        }
    }
}

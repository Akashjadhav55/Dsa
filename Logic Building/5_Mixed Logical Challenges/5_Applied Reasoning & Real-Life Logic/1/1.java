// Q1: Given marks of students, find how many passed (>= 40).
// Input: Number of students, then their marks
// Output: Count of students who passed

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (sc.nextInt() >= 40) count++;
        }
        System.out.println(count);
    }
}

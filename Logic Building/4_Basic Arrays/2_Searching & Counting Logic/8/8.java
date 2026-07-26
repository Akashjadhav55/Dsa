// Q8: Find the count of prime numbers in the array.
// Input: Size n, then n integers
// Output: Count of primes

import java.util.Scanner;

public class Main {
    public static boolean isPrime(int num) {
        if (num < 2) return false;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) return false;
        }
        return true;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        int count = 0;
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
            if (isPrime(arr[i])) count++;
        }
        System.out.println(count);
    }
}

// Q9: Count how many prime numbers are there in an array.
// Input: Size n, then n integers
// Output: Count of primes

import java.util.Scanner;

public class Main {
    static boolean isPrime(int n) {
        if (n < 2) return false;
        for (int i = 2; i <= Math.sqrt(n); i++) {
            if (n % i == 0) return false;
        }
        return true;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (isPrime(sc.nextInt())) count++;
        }
        System.out.println(count);
    }
}

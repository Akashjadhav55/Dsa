// Q7: Print all prime numbers between 1 and N.
// Input: An integer N
// Output: All primes from 1 to N

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for (int i = 2; i <= n; i++) {
            boolean isPrime = true;
            for (int j = 2; j <= Math.sqrt(i); j++) {
                if (i % j == 0) { isPrime = false; break; }
            }
            if (isPrime) System.out.println(i);
        }
    }
}

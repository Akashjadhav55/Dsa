// Q6: Convert a number to binary recursively.
// Input: An integer
// Output: Binary representation

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        System.out.println(toBinary(n));
    }

    static String toBinary(int n) {
        if (n <= 1) return String.valueOf(n);
        return toBinary(n / 2) + (n % 2);
    }
}

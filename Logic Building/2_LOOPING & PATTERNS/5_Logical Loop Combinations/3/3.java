// Q3: Print all numbers that are palindromes between 1-500.
// Input: None
// Output: All palindromic numbers 1-500

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        for (int i = 1; i <= 500; i++) {
            int original = i, reversed = 0, temp = i;
            while (temp != 0) {
                reversed = reversed * 10 + temp % 10;
                temp /= 10;
            }
            if (original == reversed) {
                System.out.println(i);
            }
        }
    }
}

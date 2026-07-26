// Q7: Print digits of a number in words recursively (e.g., 123 -> "one two three").
// Input: An integer
// Output: Digits in words

import java.util.Scanner;

public class Main {
    static String[] words = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        printDigitsInWords(n);
    }

    static void printDigitsInWords(int n) {
        if (n == 0) return;
        printDigitsInWords(n / 10);
        System.out.print(words[n % 10] + " ");
    }
}

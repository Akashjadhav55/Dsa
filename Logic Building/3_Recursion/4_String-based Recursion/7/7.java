// Q7: Print all characters of a string one by one recursively.
// Input: A string
// Output: Each character on a new line

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        printChars(s, 0);
    }

    static void printChars(String s, int i) {
        if (i == s.length()) return;
        System.out.println(s.charAt(i));
        printChars(s, i + 1);
    }
}

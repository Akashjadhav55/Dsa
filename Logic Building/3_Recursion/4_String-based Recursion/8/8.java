// Q8: Print the string in reverse order recursively (without using loops).
// Input: A string
// Output: Reversed string

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        printReverse(s, s.length() - 1);
    }

    static void printReverse(String s, int i) {
        if (i < 0) return;
        System.out.print(s.charAt(i));
        printReverse(s, i - 1);
    }
}

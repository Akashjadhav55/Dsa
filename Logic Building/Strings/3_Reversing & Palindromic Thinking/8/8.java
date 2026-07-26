// Q8: Remove the first and last character and print remaining.
// Input: A string
// Output: String without first and last character

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        if (s.length() <= 2) System.out.println("");
        else System.out.println(s.substring(1, s.length() - 1));
    }
}

// Q8: Check if two strings are rotations of each other.
// Input: Two strings
// Output: "Yes" or "No"

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s1 = sc.next();
        String s2 = sc.next();
        if (s1.length() != s2.length()) {
            System.out.println("No");
        } else {
            String combined = s1 + s1;
            System.out.println(combined.contains(s2) ? "Yes" : "No");
        }
    }
}

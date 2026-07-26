// Q5: Check if two strings are the reverse of each other.
// Input: Two strings
// Output: "Yes" or "No"

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s1 = sc.nextLine();
        String s2 = sc.nextLine();
        String rev = "";
        for (int i = s2.length() - 1; i >= 0; i--) {
            rev += s2.charAt(i);
        }
        System.out.println(s1.equals(rev) ? "Yes" : "No");
    }
}

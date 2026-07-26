// Q8: Compare two strings lexicographically.
// Input: Two strings
// Output: "String 1 comes first", "String 2 comes first", or "Equal"

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s1 = sc.nextLine();
        String s2 = sc.nextLine();
        int result = s1.compareTo(s2);
        if (result < 0) System.out.println("String 1 comes first");
        else if (result > 0) System.out.println("String 2 comes first");
        else System.out.println("Equal");
    }
}

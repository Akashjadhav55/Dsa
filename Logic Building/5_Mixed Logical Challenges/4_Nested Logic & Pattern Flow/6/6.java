// Q6: Find all pairs of characters in a string that are the same (nested loop).
// Input: A string
// Output: All matching character pairs with indices

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        for (int i = 0; i < s.length(); i++) {
            for (int j = i + 1; j < s.length(); j++) {
                if (s.charAt(i) == s.charAt(j)) {
                    System.out.println("'" + s.charAt(i) + "' at index " + i + " and " + j);
                }
            }
        }
    }
}

// Q7: Count alphabets before 'm' and after 'm' in a string.
// Input: A string
// Output: Count before and after 'm'

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine().toLowerCase();
        int before = 0, after = 0;
        boolean found = false;
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == 'm') {
                found = true;
            } else if (Character.isLetter(s.charAt(i))) {
                if (!found) before++;
                else after++;
            }
        }
        System.out.println("Before m: " + before);
        System.out.println("After m: " + after);
    }
}

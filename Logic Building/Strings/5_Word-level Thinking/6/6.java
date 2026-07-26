// Q6: Print all words that start and end with the same letter.
// Input: A sentence
// Output: Words starting and ending with same letter

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String[] words = sc.nextLine().trim().split("\\s+");
        for (String w : words) {
            if (Character.toLowerCase(w.charAt(0)) == Character.toLowerCase(w.charAt(w.length() - 1))) {
                System.out.println(w);
            }
        }
    }
}

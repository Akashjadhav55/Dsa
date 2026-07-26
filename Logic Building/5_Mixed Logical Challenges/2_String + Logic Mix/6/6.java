// Q6: Count words that start and end with the same letter.
// Input: A sentence
// Output: Count of such words

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String[] words = sc.nextLine().toLowerCase().split(" ");
        int count = 0;
        for (String w : words) {
            if (w.length() > 0 && w.charAt(0) == w.charAt(w.length() - 1)) {
                count++;
            }
        }
        System.out.println(count);
    }
}

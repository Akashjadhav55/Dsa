// Q10: Remove duplicate words from a sentence.
// Input: A sentence
// Output: Sentence without duplicate words

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String[] words = sc.nextLine().split(" ");
        String[] seen = new String[words.length];
        int seenCount = 0;
        StringBuilder sb = new StringBuilder();
        for (String w : words) {
            boolean dup = false;
            for (int i = 0; i < seenCount; i++) {
                if (seen[i].equals(w)) { dup = true; break; }
            }
            if (!dup) {
                seen[seenCount++] = w;
                sb.append(w).append(" ");
            }
        }
        System.out.println(sb.toString().trim());
    }
}

// Q2: Count vowels in each word of a sentence.
// Input: A sentence
// Output: Vowel count per word

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String line = sc.nextLine();
        String[] words = line.split(" ");
        for (String w : words) {
            int count = 0;
            for (char c : w.toLowerCase().toCharArray()) {
                if ("aeiou".indexOf(c) != -1) count++;
            }
            System.out.println(w + ": " + count);
        }
    }
}

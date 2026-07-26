// Q9: Find the word with maximum vowels in a sentence.
// Input: A sentence
// Output: Word with most vowels

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String[] words = sc.nextLine().split(" ");
        String maxWord = "";
        int maxCount = 0;
        for (String w : words) {
            int count = 0;
            for (char c : w.toLowerCase().toCharArray()) {
                if ("aeiou".indexOf(c) != -1) count++;
            }
            if (count > maxCount) {
                maxCount = count;
                maxWord = w;
            }
        }
        System.out.println(maxWord);
    }
}

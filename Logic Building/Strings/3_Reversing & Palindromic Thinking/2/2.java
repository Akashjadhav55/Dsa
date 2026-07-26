// Q2: Reverse each word in a sentence.
// Input: A sentence
// Output: Sentence with each word reversed

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String[] words = sc.nextLine().split(" ");
        for (int i = 0; i < words.length; i++) {
            String rev = "";
            for (int j = words[i].length() - 1; j >= 0; j--) {
                rev += words[i].charAt(j);
            }
            System.out.print(rev + " ");
        }
        System.out.println();
    }
}

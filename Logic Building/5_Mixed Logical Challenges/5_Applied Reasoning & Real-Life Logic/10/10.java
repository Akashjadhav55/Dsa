// Q10: Print all palindromic words from a sentence.
// Input: A sentence
// Output: Palindromic words

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String[] words = sc.nextLine().split(" ");
        for (String w : words) {
            String rev = new StringBuilder(w).reverse().toString();
            if (w.equals(rev)) System.out.println(w);
        }
    }
}

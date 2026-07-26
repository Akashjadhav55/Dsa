// Q7: Count how many words contain the letter 'a'.
// Input: A sentence
// Output: Count of words containing 'a'

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String[] words = sc.nextLine().trim().split("\\s+");
        int count = 0;
        for (String w : words) {
            if (w.toLowerCase().contains("a")) count++;
        }
        System.out.println(count);
    }
}

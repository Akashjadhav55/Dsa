// Q1: Print each word of a sentence on a new line.
// Input: A sentence
// Output: Each word on a new line

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String[] words = sc.nextLine().trim().split("\\s+");
        for (String w : words) {
            System.out.println(w);
        }
    }
}

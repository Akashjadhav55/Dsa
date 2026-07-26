// Q5: Count how many times a coin lands on heads/tails (use random).
// Input: Number of tosses
// Output: Count of heads and tails

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int heads = 0, tails = 0;
        for (int i = 0; i < n; i++) {
            if (Math.random() < 0.5) heads++;
            else tails++;
        }
        System.out.println("Heads: " + heads);
        System.out.println("Tails: " + tails);
    }
}

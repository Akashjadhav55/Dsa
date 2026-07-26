// Q4: Print numbers from 10 down to 1.
// Input: None
// Output: Numbers 10 to 1, each on a new line

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        for (int i = 10; i >= 1; i--) {
            System.out.println(i);
        }
    }
}

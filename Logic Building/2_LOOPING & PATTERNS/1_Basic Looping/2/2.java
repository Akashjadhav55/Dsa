// Q2: Print all even numbers between 1 and 100.
// Input: None
// Output: All even numbers from 2 to 100

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        for (int i = 2; i <= 100; i += 2) {
            System.out.println(i);
        }
    }
}

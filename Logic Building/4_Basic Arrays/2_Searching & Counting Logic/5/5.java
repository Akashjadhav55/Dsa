// Q5: Check if all elements in an array are unique.
// Input: Size n, then n integers
// Output: "All Unique" or "Has Duplicates"

import java.util.Scanner;
import java.util.HashSet;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        HashSet<Integer> set = new HashSet<>();
        boolean hasDuplicates = false;
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
            if (!set.add(arr[i])) {
                hasDuplicates = true;
            }
        }
        System.out.println(hasDuplicates ? "Has Duplicates" : "All Unique");
    }
}

// Q10: Print all unique elements (those that occur exactly once).
// Input: Size n, then n integers
// Output: Elements that occur exactly once

import java.util.Scanner;
import java.util.LinkedHashMap;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        LinkedHashMap<Integer, Integer> freq = new LinkedHashMap<>();
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
            freq.put(arr[i], freq.getOrDefault(arr[i], 0) + 1);
        }
        for (var entry : freq.entrySet()) {
            if (entry.getValue() == 1) {
                System.out.println(entry.getKey());
            }
        }
    }
}

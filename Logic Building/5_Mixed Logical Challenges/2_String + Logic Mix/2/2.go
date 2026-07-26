// Q2: Count vowels in each word of a sentence.
// Input: A sentence
// Output: Vowel count per word

package main

import (
    "bufio"
    "fmt"
    "os"
    "strings"
)

func main() {
    reader := bufio.NewReader(os.Stdin)
    line, _ := reader.ReadString('\n')
    line = strings.TrimSpace(line)
    for _, w := range strings.Fields(line) {
        count := 0
        for _, c := range strings.ToLower(string(w)) {
            if strings.ContainsRune("aeiou", c) {
                count++
            }
        }
        fmt.Printf("%s: %d\n", w, count)
    }
}

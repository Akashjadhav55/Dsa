

## ⭐ STRONG YOUR LOGIC BUILDING ⭐
## WITH STAR PATTERNS
Solve these 25 questions to master your logic and thinking ability.
It will help you think faster and build better logic for DSA questions.

=>Print the following Patterns:
- Print a Single Star (
## *
## )
## Code:

## Explanation:
We only have to print one single
## *
, so no need for loops here.

## 2. Print Four Stars (
## ****
## )
## Code:

## Explanation:
Again, just a simple single print statement — no loops needed!

## 3. Print
n
Stars on Same Line
## ✅ Code:


## Explanation:
## ●
for (int i = 0; i < n; i++)
→ Loop from
i = 0
to
i = n-1
## .
● Inside the loop, print
## *
without newline using
## System.out.print("*");
## .
● So all stars come in the same line.

- Print Square of Stars (n x n Stars)
## Code:

## Code:

## Explanation:
● Outer loop → Runs
n
times to print
n
rows.
● Inner loop → In each row, print
n
stars.
● After each row, do
## System.out.println();
to move to the next line.

- Print an Increasing Triangle of Stars


code:

## Explanation:
● Outer loop runs from
i = 1
to
i = n
## .
● In each row, print
i
stars.
● After printing all stars in a row, move to the next line using
## System.out.println();
## .

- Print a Right-Aligned Triangle of Stars

## Code:



## Explanation:
● First inner loop: Print
## (n-i-1)
spaces.
● Second inner loop: Print
## (i+1)
stars after spaces.
● After printing spaces and stars for one row, use
## System.out.println();
to
move to the next line.

- Print Stars in Even Numbers (2, 4, 6, 8, 10)

## Code:

## Explanation:
● Outer loop runs from
i = 1
to
i = n
## .
● In each row, print
## 2*i
stars.
● After printing stars for a row, move to the next line with
## System.out.println();
## .

- Print Stars in Odd Numbers (1, 3, 5, 7, 9)


## Code:

## Explanation:
● Outer loop runs from
i = 0
to
i = n-1
## .
● For each row:
○ Number of stars =
## 2*i + 1
(always an odd number).
○ Think like for every i we need 2*i+1
● After printing stars for the row, move to the next line with
## System.out.println();
## .

- Print a Centered Pyramid of Stars
## Pattern:



## 易 Explanation:
● Outer loop runs from
i = 0
to
i = n-1
## .
● First inner loop: Print
## (n-i-1)
spaces to shift stars to the center.
● Second inner loop: Print
## (2*i + 1)
stars (1, 3, 5, 7, 9...).
● After printing spaces + stars for one row, move to the next line with
## System.out.println();
## .

- Print Stars and Spaces Alternating (Stars and Blank Spaces)

I have added b instead of space . Think like b is your blank space

## .



## Explanation:
● Outer loop runs from
i = 0
to
i = n-1
## .
● First inner loop: Print
## (n-i-1)
spaces (
b
) to align stars correctly.
● Second inner loop: Alternate between printing stars (
## *
) and blank spaces (
b
) using
if (j % 2 == 0)
to check for even and odd positions.
● After printing stars and spaces for one row, move to the next line with
## System.out.println();
## .

- Print Numbers in an Increasing Sequence (1, 12, 123, 1234, 12345)


## Explanation:
● Outer loop runs from
i = 1
to
i = n
## .
● Inner loop prints numbers starting from
## 1
up to
i
in each row.
● After printing the numbers in each row, move to the next line with
## System.out.println();
## .




- Print Repeated Numbers per Row (Same Number Repeated)

## Code:

We have two
for
loops:
● Outer loop runs for each row (from 1 to 5).
● Inner loop prints the current row number (
i
) exactly
i
times.
● After printing for one row, we move to the next line using
## System.out.println()
## .

## 13.




## Code:

explanation:
● Start from
num = 1
## .
● For each row
i
, print
i
numbers.
● After each number, add a space.
● After each row, go to the next line.
● Keep incrementing
num
after printing.
## 14.



## Explanation:
## ●
num
starts at
## 1
and increases after every print.
## ●
num % 10
keeps only the last digit (wraps after 9 to 0).
● Outer loop runs for each row.
● Inner loop prints
i
numbers in row
i
## .
● After each row, move to the next line.

## 15.

## Explanation:
● Loop runs for 5 rows.
● Inner loop prints
i
values in row
i
## .
● The value to print is
(i + j) % 2
## :
○ This alternates between 0 and 1 based on the sum of row and column
indexes.
● The pattern starts with
## 1
and alternates accordingly.





## 16


## Explanation:
## ●
char ch = 'A'
initializes the starting alphabet.
● Outer loop runs from 1 to 5 (for 5 rows).
● Inner loop runs
i
times for row
i
## .
● Each character is printed and then incremented (
ch++
## ).
● Output continues alphabetically from
## A
to
## O
## .

## 17


## Code:

## Explanation:
## ●
rows = 5
→ pattern has 5 rows.
● Outer loop runs from
## 0
to
## 4
## .
● In each row, calculate the character as
'A' + i
## :
## ○ Row 0 → A, Row 1 → B, ..., Row 4 → E.
● Inner loop prints the same character
i+1
times.
## ●
## System.out.println()
moves to next line.

## 18.

## Code:


## Explanation:
## ●
rows = 5
→ 5 rows in the pattern.
● Outer loop runs from
## 1
to
## 5
(row count).
● Inner loop runs
j < i
to print increasing letters in each row.
## ●
'A' + j
gives the next character (A, B, C, ...).
● Characters always start from
## 'A'
in each row.
## ●
## System.out.println()
moves to the next line.

## 19.

## Code:



## Explanation:
## ●
rows = 5
: Defines the number of rows.
## ●
char ch = 'A'
: Start from character 'A'.
● Outer loop (
i
) runs for each row.
● Leading spaces: Inner loop prints spaces to align the characters in a pyramid
shape.
● Print characters: The second inner loop prints
2 * i - 1
characters for row
i

(odd number of characters).
● After printing, increment the character (
ch++
) and move to the next line using
## System.out.println()
## .

## 20.


## 易 Explanation:
## ●
rows = 5
: Defines the number of rows.
● Outer loop (
i
) runs from
## 1
to
## 5
(for 5 rows).
● Inner loop (
j
) prints numbers from
## 1
to
i
for each row.
## ●
## System.out.println()
moves to the next line after printing each row.


## 21.


## Explanation:
## ●
rows = 5
: Defines the number of rows.
● Outer loop (
i
) runs from
## 1
to
## 5
(for 5 rows).
● Leading spaces: Inner loop prints spaces for alignment to form the pyramid shape.
● Ascending numbers: Print numbers from
## 1
to
i
## .
● Descending numbers: Print numbers from
i-1
down to
## 1
## .
## ●
## System.out.println()
moves to the next line after each row.




## 22.


## Explanation:
## ●
rows = 5
: Defines the number of rows for the upper half of the pattern.
● The first loop prints the upper part of the pattern, starting from 1 star up to
rows

stars.
● The second loop prints the lower half of the pattern, starting from
rows-1
stars down
to 1 star.
## ●
## System.out.println()
moves to the next line after printing each row.



## 23.


## Explanation:
## ●
rows = 5
: Defines the number of rows for the first half of the pattern.
● The first loop prints the upper part of the pattern, from 1 star to
rows
stars.
● The second loop prints the lower half, starting from
rows
stars down to 1 star.
## ●
## System.out.println()
moves to the next line after printing each row.




## 24

## Code:



## Explanation:
## ●
rows = 5
: Defines the number of rows for the upper part of the pattern (excluding
the middle row).
● The first loop prints the upper half of the pattern:
○ For each row, print the leading spaces first, then the stars (
2 * i - 1
stars
for row
i
## ).
● The second loop prints the lower half of the pattern:
○ Similar to the first loop but starts from
rows - 1
and prints fewer stars as the
row number decreases.
## ●
## System.out.println()
moves to the next line after printing each row.

## 25.



## Explanation:
## ●
rows = 5
: Defines the number of rows.
● The first loop prints the leading spaces to center-align the pattern.
● The second loop prints numbers in descending order, starting from
## 5
and decreasing
until the appropriate number for each row.
● The third loop prints numbers in ascending order, starting from the number after the
descending ones.
## ●
## System.out.println()
moves to the next line after each row.

SHOW SOME LOVE BY FOLLOWING CodeWithNishchal
## ❤
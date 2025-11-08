## 🌀 push_swap

A sorting algorithm project using two stacks and a limited set of operations.
Part of the 42 curriculum (focus: algorithms, parsing, complexity, and optimization).

### 📦 Project Overview

push_swap is a program that takes a list of integers as input and outputs a sequence of instructions to sort them in ascending order, using only two stacks (a and b) and a limited set of operations:

sa, sb, ss – swap

ra, rb, rr – rotate

rra, rrb, rrr – reverse rotate

pa, pb – push

The goal is to sort stack a using the fewest operations possible, while ending with stack b empty.

### ⚙️ Compilation

```bash
make
```
This will create the push_swap executable at the root of the project.

To clean up:
```bash
make clean # Remove object files
make fclean # Remove objects and executable
make re # Full rebuild
```
### ▶️ Usage
```bash
./push_swap [list of integers]
```
Example:
```bash
./push_swap 3 2 1
```
Might output:
```bash
sa
rra
```
Each line is an operation to perform. You can pass this output to the checker to verify correctness.

### ✅ Testing with the Official Checker

Download the official 42 checker (checker_linux or checker_Mac) from a reliable repository like:

https://github.com/lmalki-h/push_swap_tester

Example usage:
```bash
ARG="4 3 2 1"
./push_swap $ARG | ./checker_linux $ARG
```
If your program is correct, it will output:

OK

If the list is not sorted correctly:

KO

🧪 Automatic Testing Script

If you have a script like test_push_swap.sh, you can use it to run multiple tests automatically.

Make sure it's executable:

chmod +x test_push_swap.sh

Then run:

./test_push_swap.sh ./push_swap

It will test:

Parsing errors

Sorting for small and large inputs

Display green [OK] or red [KO] depending on the result

🛠️ Project Structure

Your src/ folder may include subfolders like:

src/
├── main/
├── move/
├── stack/
├── sorting/
├── parsing/
├── init/
├── utils/

Organize your source files by functionality (moves, stack operations, input parsing, sorting algorithms, etc.).

🚀 Tips

Optimize for 3, 5, 100, and 500 elements

Use different algorithms depending on input size (e.g. hardcoded for 3/5, radix for 100+)

Always check for input errors (non-numeric, duplicates, overflows)

📚 Resources

Subject PDF: available on your intra
Visualizer: https://pteufel.github.io/push-swap-visualizer/

Tester: https://github.com/lmalki-h/push_swap_tester

Good luck and happy sorting! 🧠✨
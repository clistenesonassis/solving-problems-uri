import 'dart:io';

/**
 * Factorial.
 */
int factorial(int x) {
  int value = 1;

  if (x == 0) return 1;

  for (int i = 1; i <= x; i++) {
    value *= i;
  }

  return value;
}

/**
 * Recursive factorial.
 */
int factorialRecursive(int x) {
  if (x == 0) return 1;

  return x * factorialRecursive(x - 1);
}

void main() {
  while (true) {
    try {
      var m = stdin.readLineSync();
      var n = stdin.readLineSync();

      if (m == null || n == null) break;

      int factorialN = factorial(int.parse(n));
      int factorialM = factorial(int.parse(m));

      int sum = factorialN + factorialM;

      print("$sum");
    } on IOException catch (e) {
      break;
    }
  }
}

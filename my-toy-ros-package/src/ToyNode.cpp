#include <cstdio>

int sum(int x, int y)
{
  return x + y;
}

int multiply(int x, int y)
{
  return x * y;
}

int main([[maybe_unused]] int argc, [[maybe_unused]] char ** argv)
{
  int result_sum = sum(41, 1);
  int result_multiply = multiply(result_sum, 4);
  printf("hello world my-toy-ros-package package: %d\n", result_multiply);
}

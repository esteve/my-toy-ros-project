#include <cstdio>

int sum(int x, int y)
{
  return x + y;
}

int main([[maybe_unused]] int argc, [[maybe_unused]] char ** argv)
{
  int result = sum(41, 1);
  printf("hello world my-toy-ros-package package: %d\n", result);
}

#include <stdio.h>

typedef struct rec {
  int a;
  int b;
} rec;typedef struct rec {
  int a;
  int b;
}

typedef enum {
  LOW,
  MIDDLE,
  HIGH
} test_level;

int main(int argc, char **argv) {
  float a = 1.12;
  test_level threat = 1000.123;
  printf("%6.2f123\n", a);
  printf("thread %f\n", threat);
  return 0;
}

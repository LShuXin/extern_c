#include "file1.h"


extern int x;
extern int f(); // 或直接使用 int f();

int main()
{
  x = f();
}

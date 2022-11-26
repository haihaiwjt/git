#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

int main()
{
  int *p, x = 0, op[N][N];
  char b = 'A'; // b为上一次字母的值//
  srand((unsigned int)time(NULL));
  for (p = &op[0][0]; p <= &op[N - 1][N - 1]; p++)
  { //初始化
    *p = '.';
  }
  op[0][0] = 'A';
  int row = 0, lei = 0, pace; // row为行数，lei为列数//
  for (;;)
  {
    if (b == 'Z' || x > 20)
    {
      for (row = 0; row < 10; row++)
      { //打印结果//
        for (lei = 0; lei < 10; lei++)
          printf("%c", op[row][lei]);
        printf("\n");
      }
      return 0;
    }
    else
    {
      pace = (rand() % 4); // pace 是要走的方向，0是左，1是下，2是右，3是上//
      switch (pace)
      {
      case 0:
        if (row == 0)
          break;
        else
        {
          row--;
          if (op[row][lei] == '.')
          { //判断是否为'.'//
            b++;
            op[row][lei] = b;
            x = 0;
          }
          else
          {
            row++;
            x++;
          }
          break;
        }

      case 1:
        if (lei == 9)
          break;
        else
        {
          lei++;
          if (op[row][lei] == '.')
          { //判断是否为'.'//
            b++;
            op[row][lei] = b;
            x = 0;
          }
          else
          {
            lei--;
            x++;
          }
          break;
        }

      case 2:
        if (row == 9)
          break;
        else
        {
          row++;
          if (op[row][lei] == '.')
          { //判断是否为'.'//
            b++;
            op[row][lei] = b;
            x = 0;
          }
          else
          {
            row--;
            x++;
          }
          break;
        }
      case 3:
        if (lei == 0)
          break;
        else
        {
          lei--;
          if (op[row][lei] == '.')
          { //判断是否为'.'//
            b++;
            op[row][lei] = b;
            x = 0;
          }
          else
          {
            lei++;
            x++;
          }
          break;
        }
      default:;
      }
    }
  }
  return 0;
}

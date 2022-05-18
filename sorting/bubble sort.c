#include <stdio.h>
int main()
{

  int n;
  scanf("%d", &n);

  int arr[n];
  for (int f = 0; f <= n; f++)
  {

    scanf("%d", &arr[f]);
  }

  int counter = 1;
  while (counter < n)
  {
    for (int i = 0; i < (n - counter); i++)
    {
      if (arr[i] > arr[i + 1])
      {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
      }
    }
    counter++;
  }

  for (int j = 0; j <= n; j++)
  {

    printf("%d", arr[j]);
  }

  return 0;
}

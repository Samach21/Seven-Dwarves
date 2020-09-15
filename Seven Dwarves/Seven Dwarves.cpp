#include<stdio.h>

int process(int);

int main()
{
	int x[10];
	int* n = x;
	int sum = 0, a = 0, b = 1, save[2];
	bool set = false;
	for (int i = 0; i < 9; i++)
	{
		if (scanf_s("%d", &x[i]) != 1)
		{
			printf("ERROR");
			return 1;
		}
		else if (x[i] < 1 || x[i] > 99)
		{
			printf("ERROR");
			return 1;
		}
	}
	for (int j = 0; j < 36; j++)
	{
		if (set)
		{
			a++;
			b = a + 1;
			set = false;
		}
		save[0] = x[a];
		save[1] = x[b];
		x[a] = 0;
		x[b] = 0;
		for (int i = 0; i < 9; i++)
		{
			sum += x[i];
		}
		if (process(sum) == 1)
		{
			for (int i = 0; i < 9; i++, n++)
			{
				if (*n != 0)
				{
					printf("\n%d", *n);
				}
			}
			j = 40;
		}
		else
		{
			x[a] = save[0];
			x[b] = save[1];
			b++;
		}
		if (b == 9)
		{
			set = true;
		}
		sum = 0;
	}
	return 0;
}

int process(int a)
{
	if (a == 100)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

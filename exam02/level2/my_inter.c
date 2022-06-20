// Write a program that takes two strings and displays, without doubles, the
// characters that appear in both strings, in the order they appear in the first one.
// The display will be followed by a \n.
// If the number of arguments is not 2, the program displays \n.
// Examples:
// $>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
// padinto$
// $>./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
// df6ewg4$
// $>./inter "rien" "cette phrase ne cache rien" | cat -e
// rien$
// $>./inter | cat -e
// $

#include <unistd.h>
int check(char *s, char c, int pos)
{
	int i = 0;
	while (i < pos)
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int main (int ac, char **av)
{
	int i = 0;
	int j = 0;

	if (ac == 3)
	{
		j = 0;
		while (av[1][i])
		{
			if (av[1][i] == av[2][j])
			{
				if (check(av[1], av[1][i], i) == 0)
					write (1, &av[1][i], 1);
				i++;
			}
			j++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
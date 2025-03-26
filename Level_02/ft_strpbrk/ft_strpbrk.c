#include <stddef.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	while (*s1)
	{
		int i = 0;
		while (s2[i])
		{
			if (*s1 == s2[i])
				return ((char *)s1);
			i++;
		}
		s1++;
	}
	return (NULL);
}

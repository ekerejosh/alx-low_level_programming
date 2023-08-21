#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1: the first string.
 * @s2: the second string.
 *
 * Return: pointer to the concatenated string or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int len_s1 = 0, len_s2 = 0;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len_s1])
		len_s1++;
	while (s2[len_s2])
		len_s2++;
	concat_str = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (concat_str == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		concat_str[i] = s1[i];
	for (j = 0; s2[j]; j++)
		concat_str[i + j] = s2[j];
	concat_str[i + j] = '\0';
	return (concat_str);
}

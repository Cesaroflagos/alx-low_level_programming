#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);
/**
 * word_len - locates index
 * @str: string
 * Return: index
 */
int word_len(char *str)
{
int i = 0, l = 0;

while (*(str + i) && *(str + i) != ' ')
{
l++;
i++;
}
return (l);
}

/**
 * count_words - Starting point
 * @str: string
 * Return: number of words within string
 */
int count_words(char *str)
{
int i = 0, words = 0, l = 0;

for (i = 0; *(str + i); i++)
l++;
for (i = 0; i < l; i++)
{
if (*(str + i) != ' ')
{
words++;
i += word_len(str + i);
}
}
return (words);
}

/**
 * strtow - Starting point
 * @str: string character
 * Return: NULL
 */
char **strtow(char *str)
{
char **ss;
int i = 0, words, c, alphabets, l;

if (str == NULL || str[0] == '\0')
return (NULL);
words = count_words(str);

if (words == 0)
return (NULL);
ss = malloc(sizeof(char *) * (words + 1));
if (ss == 0)
return (NULL);

for (c = 0; c < words; c++)
{
while (str[i] == ' ')
i++;
alphabets = word_len(str + i);
ss[c] = malloc(sizeof(char) * (alphabets + 1));

if (ss[c] == NULL)
{
for (; c >= 0; c--)
free(ss[c]);

free(ss);
return (NULL);
}

for (l = 0; l < alphabets; l++)
ss[c][l] = str[i++];
ss[c][l] = '\0';
}
ss[c] = NULL;
return (ss);
}

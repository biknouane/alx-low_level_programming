#include <stdlib.h>

/**
  * _strlen - counts the len of the word
  * @str: the word
  *
  * Return: the length of the string
  */
int _strlen(char *str)
{
	int i = 0;

	while (*(str + i))
		i++;
	return (i);
}

/**
  * words_count - counts the word of a string
  * @str: the string
  *
  * Return: the number of words
  */
int words_count(char *str)
{
	int i = 0;
	int count = 0;
	int len = 0;

	if (str == NULL || !str[0])
		return (0);
	len = _strlen(str);
	while (i <= len)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

/**
  * free_words - frees an array of trings
  * @words: array of strings
  * @wcount: number of words
  *
  * Return: void
  */
void free_words(char **words, int wcount)
{
	int i = 0;

	while (i < wcount)
	{
		free(words[i]);
		i++;
	}
	free(words);
}

/**
 * dup_word - copies a word from a string
 * @str: string to copy from
 * @start: start index of word
 * @end: end index of word
 *
 * Return: pointer to word
 */
char *dup_word(char *str, int start, int end)
{
	char *word;
	int i = 0;

	word = malloc(sizeof(char) * (end - start + 1));
	if (!word)
		return (NULL);

	while (i < end - start)
	{
		word[i] = str[start + i];
		i++;
	}
	word[i] = '\0';

	return (word);
}

/**
  * strtow - splits a string into words
  * @str: the string to split
  *
  * Return: 2d array of words
  */
char **strtow(char *str)
{
	int i = 0;
	int j = 0;
	int start = 0;
	int end = 0;
	int str_len = 0;
	int wcount = 0;
	char **words;

	if (str == NULL || !str[0])
		return (NULL);
	wcount = words_count(str);
	if (!wcount)
		return (NULL);
	words = (char **) malloc(sizeof(char *) * (wcount + 1));
	if (!words)
		return (NULL);
	str_len = _strlen(str);
	while (i < str_len)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || !str[i + 1]))
		{
			end = i + 1;
			words[j] = dup_word(str, start, end);
			if (!words[j])
				return (free_words(words, j), NULL);
			j++;
		}
		else if (str[i] != ' ' && str[i + 1] != ' ')
		{
			i++;
			continue;
		}
		else
			start = i + 1;
		i++;
	}
	words[i] = '\0';
	return (words);
}

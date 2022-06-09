
/**
 * _isupper -  Find if a given letter is upper case
 * @c: given letter
 *
 * Return: Return 1 if c is uppercase, 0 if otherwise
 */

char _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);

}

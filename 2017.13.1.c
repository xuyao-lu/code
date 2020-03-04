void swap(void *a, void *b, unsigned int n)
{
	char *p = (char *)a;
	char *q = (char *)b;

	for(int i = 0; i < n; i++)
	{
        	char temp = *(p + i);
		*(p + i) = *(q + i);
		*(q + i) = temp;         
	}
}


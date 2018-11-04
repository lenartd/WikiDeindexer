#include <stdio.h>
#include <string.h>


int main()
{
	int i;
	char storage;
	bool write = true;
	FILE *file, *fileout;
	file = fopen("textoupgrade.txt", "r");
	fileout = fopen("output.txt", "w");
	if(file==NULL)
	{
		printf("Error occurred");
		return 1;
	}

	while(fscanf(file, "%c", &storage) != EOF)
	{
		if(storage==91)
		{write=false;}
		if(write)
		{
			printf("%c", storage);
	     	fprintf(fileout, "%c", storage);
		}
		if(storage==93)
		{write=true;}
		
	}
	fclose(file);
	fclose(fileout);
}

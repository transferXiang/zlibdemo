#include <stdio.h>
#include <string.h>
#include "zlib.h"

void main()
{
	//const int len = 125 * 1024;
	//char* test = new char[len];
	//for (int i = 0; i < len; i++)
	//{
	//	test[i] = 'a';
	//}
	//test[len - 1] = '\n';
	//gzFile file = gzopen("test.txt", "wb");
	//gzwrite(file, test, len);
	//gzclose(file);
	//delete[] test;

	FILE* file = fopen("test.txt", "rb");
	int len = sizeof(int);
	fseek(file, -len, SEEK_END);
	int fileLen = 0;
	fread(&fileLen, len, 1, file);
	fclose(file);

	char* buffer = new char[fileLen];
	gzFile gfile = gzopen("test.txt", "rb");
	if (fileLen != gzread(gfile, buffer, fileLen))
	{
		printf("ddd");
	}
	gzclose(gfile);
}
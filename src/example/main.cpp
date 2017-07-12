/*!
 * \file main.cpp
 * \date 2017/04/09 0:08
 *
 * \author transfer
 * Contact: 448217518@qq.com
 *
 * \brief
 *
 * TODO: long description
 *
 * \note
*/

#include <stdlib.h>
#include <stdio.h>
#include "fileio.h"


static bool CompareBuffer(const char* buffer1, int len1, const char* buffer2, int len2)
{
	if (len1 != len2)
	{
		return false;
	}

	for (int i = 0; i < len1; i++)
	{
		if (buffer1[i] != buffer2[i])
		{
			return false;
		}
	}

	return true;
}


int main()
{
	const char* filePath = "test.txt.zip";
	int bufferWriteLen = rand();
	char* bufferWrite = new char[bufferWriteLen];
	for (int i = 0; i < bufferWriteLen; i++)
	{
		bufferWrite[i] = rand() * 1.0 / RAND_MAX * 128;
	}
	printf("%s\n", bufferWrite);
	writeZipFile(filePath, bufferWrite, bufferWriteLen);

	char* bufferRead = NULL;
	int bufferReadLen = 0;
	readZipFile(filePath, &bufferRead, bufferReadLen);
	printf("%s\n", bufferRead);

	if (!CompareBuffer(bufferWrite, bufferWriteLen, bufferRead, bufferReadLen))
	{
		printf("test fail\n");
	}

	delete[] bufferWrite;
	delete[] bufferRead;

	return 0;
}

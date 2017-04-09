/*!
 * \file fileio.cpp
 * \date 2017/04/09 0:01
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
#include "fileio.h"
#include <stdio.h>
#include <string.h>
#include "zlib.h"

static int GetZipFileOrgLen(const char* filePath)
{
	int len = 0;

	FILE* file = fopen(filePath, "rb");
	if (file == NULL)
	{
		return len;
	}

	int offset = -1 * (int)sizeof(int);
	fseek(file, offset, SEEK_END);
	fread(&len, sizeof(int), 1, file);
	fclose(file);

	return len;
}

// 读取文件
bool readZipFile(const char* filePath, char** buffer, int& bufferLen)
{
	bool success = false;
	bufferLen = GetZipFileOrgLen(filePath);
	if (bufferLen <= 0)
	{
		return success;
	}

	gzFile file = gzopen(filePath, "rb");
	if (file == NULL)
	{
		return success;
	}

	do 
	{
		*buffer = new char[bufferLen];
		if (-1 == gzread(file, *buffer, bufferLen))
		{
			break;
		}
		success = true;
	} while (0);
	
	gzclose(file);
	return success;
}

// 写入文件
bool writeZipFile(const char* filePath, char* buffer, int bufferLen)
{
	bool success = false;
	gzFile file = gzopen(filePath, "wb");
	if (file == NULL)
	{
		return success;
	}

	do
	{
		if (0 == gzwrite(file, buffer, bufferLen))
		{
			break;
		}
		success = true;
	} while (0);

	gzclose(file);
	return success;
}
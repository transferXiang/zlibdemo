/*!
 * \file fileio.h
 * \date 2017/04/08 23:50
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
#ifndef FILEIO_H
#define FILEIO_H

// ��ȡ�ļ�
bool readZipFile(const char* filePath, char** buffer, int& bufferLen);

// д���ļ�
bool writeZipFile(const char* filePath, char* buffer, int bufferLen);

#endif //FILEIO_H
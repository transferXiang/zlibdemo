/*!
 * \file fileio.h
 * \date 2017/04/08 23:50
 *
 * \author transfer
 * Contact: 448217518@qq.com
 *
 * \brief 
 *
 * 在zlib的基础上进行包装实现
 *
 * \note
*/
#ifndef FILEIO_H
#define FILEIO_H

// 读取文件
bool readZipFile(const char* filePath, char** buffer, int& bufferLen);

// 写入文件
bool writeZipFile(const char* filePath, char* buffer, int bufferLen);

#endif //FILEIO_H
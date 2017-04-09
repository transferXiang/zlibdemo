# zlib使用基础
### 一. 保存zip文件
1. 打开文件
> gzFile  gzopen OF((const char *path, const char *mode));
2. 写入文件
> int gzwrite OF((gzFile file, voidpc buf, unsigned len));
3. 关闭文件
> gzclose OF((gzFile file));

### 二. 读取zip文件
1. 获得文件大小。  
我们知道zip文件是经过压缩后的文件，那么怎么获得压缩前的文件大小呢？通过使用发现原来zip文件末尾的4个字节即32位是用来保存压缩前文件长度的。所以这里通过以下代码获取压缩前的文件大小：
> int offset = -1 * (int)sizeof(int);  
> fseek(file, offset, SEEK_END);  
> fread(&len, sizeof(int), 1, file);
2. 打开文件
3. 读取文件
> int gzread OF((gzFile file, voidp buf, unsigned len));
4. 关闭文件

# zlibʹ�û���
### һ. ����zip�ļ�
1. ���ļ�
> gzFile  gzopen OF((const char *path, const char *mode));
2. д���ļ�
> int gzwrite OF((gzFile file, voidpc buf, unsigned len));
3. �ر��ļ�
> gzclose OF((gzFile file));

### ��. ��ȡzip�ļ�
1. ����ļ���С��  
����֪��zip�ļ��Ǿ���ѹ������ļ�����ô��ô���ѹ��ǰ���ļ���С�أ�ͨ��ʹ�÷���ԭ��zip�ļ�ĩβ��4���ֽڼ�32λ����������ѹ��ǰ�ļ����ȵġ���������ͨ�����´����ȡѹ��ǰ���ļ���С��
> int offset = -1 * (int)sizeof(int);  
> fseek(file, offset, SEEK_END);  
> fread(&len, sizeof(int), 1, file);
2. ���ļ�
3. ��ȡ�ļ�
> int gzread OF((gzFile file, voidp buf, unsigned len));
4. �ر��ļ�

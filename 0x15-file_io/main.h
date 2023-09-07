#ifndef IO_
#define IO_
int _putchar(char c);
int _strlen(const char *s);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
ssize_t read_textfile(const char *filename, size_t letters);
#endif

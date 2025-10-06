#ifndef My_string
void *my_memchr(const void *startaddress, int character, unsigned int length);
int   my_memcmp(const void *firstaddress, const void *secondaddress,  unsigned int length);
void *my_memcpy(void *dest, const void * src, unsigned int length);
void *my_memmove(void *firstaddress, const void *secondaddress, unsigned int length);
void *my_memset(void *startaddress, int character, unsigned int length);
char *my_strncat(char *dest, const char *src, unsigned int length);
char *my_strcat(char *dest, const char *src);
char *my_strchr(const char *str, int character);
int   my_strcmp(const char *firstaddress, const char *secondaddress);
int   my_strncmp(const char *firstaddress, const char *secondaddress, unsigned int length);
int   my_strcoll(const char *firstaddress, const char *secondaddress);
char *my_strcpy(char *dest, const char *src);
char *my_strncpy(char *dest, const char *src, unsigned int length);
unsigned int my_strcspn(const char *str1, const char *str2);
unsigned int my_strlen(const char *str);
char *my_strpbrk(const char *str1, const char *str2);
char *my_strrchr(const char *secondstring, int charachter);
unsigned int my_strspn(const char *str1, const char *str2);
char *my_strstr(const char *haystack, const char *needle);
char *my_strtok(char *str, const char *delim);
unsigned int my_strxfrm(char *dest, const char *src, unsigned int length);

#endif // My_string

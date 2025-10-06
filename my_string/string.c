#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "string.h"


void *my_memchr(const void *startaddress, int character, unsigned int length)
{
    unsigned char *ptr = startaddress;
    unsigned char *ptrreturn = startaddress;
    if(NULL == ptr)
    {
        printf("The function failed");
    }
    else
    {
        while(length--)
        {
            if(*ptr++ == character)
            {
                ptrreturn=ptr;
                break;
            }
        }
    }
    return ptrreturn;

}

int my_memcmp(const void *firstaddress, const void *secondaddress,  unsigned int length)
{
    unsigned char *firstptr = firstaddress;
    unsigned char *secondptr = secondaddress;
    char Returnstate = 0 ;

    if((NULL ==firstptr) || (NULL ==secondptr))
    {
        printf("The function failed");
    }
    else
    {
        if(firstptr == secondptr)
        {
            Returnstate = 0;

        }
        else
        {
            while(length)
            {
                if(*firstptr != *secondptr)
                {
                    if(*firstptr > *secondptr)
                    {
                        Returnstate = 1;
                        break;
                    }
                    else if(*firstptr < *secondptr)
                    {
                        Returnstate = -1;
                        break;
                    }
                }
                else
                {
                    length--;
                    *firstptr++;
                    *secondptr++;
                }
            }
        }
    }

    return Returnstate;
}

void *my_memcpy(void *dest, const void * src, unsigned int length)
{
    unsigned char *destptr = dest;
    unsigned char *srcptr = src  ;

    if((NULL ==destptr) || (NULL ==srcptr))
    {
        printf("The function failed");
    }
    else
    {
        while(length--)
        {
            *destptr++ = *srcptr++;
        }
    }

    return dest;
}

void *my_memmove(void *firstaddress, const void *secondaddress, unsigned int length)
{
    unsigned char *firstaddressptr = firstaddress;
    unsigned char *secondaddressptr = secondaddress  ;

    if((NULL ==firstaddressptr) || (NULL ==secondaddressptr))
    {
        printf("The function failed");
    }
    else
    {
        while(length--)
        {
            *firstaddressptr++ = *secondaddressptr++;
        }
    }

    return firstaddress;

}
void *my_memset(void *startaddress, int character, unsigned int length)
{
    unsigned char *ptrfaddress = startaddress;

    if(NULL == ptrfaddress)
    {
        printf("The function failed");
    }
    else
    {
        while(length--)
        {
            *ptrfaddress++ = character;
        }
    }
    return startaddress;
}

char *my_strcat(char *dest, const char *src)
{
    unsigned char *firstptr = dest;

    if((NULL == dest) || (NULL == src))
    {
        printf("The function failed");
    }
    else
    {

        while(*firstptr)
        {
            firstptr++;
        }
        while(*src)
        {
            *firstptr++ = *src++;
        }
        *firstptr='\0';
    }
    return dest;

}


char *my_strncat(char *dest, const char *src, unsigned int length)
{
    unsigned char *firstptr = dest;
    unsigned int lengthofinput = 0;

    if((NULL == dest) || (NULL == src))
    {
        printf("The function failed");
    }
    else
    {

        while(*dest)
        {
            dest++;
            lengthofinput++;
            if(lengthofinput == length)
            {
                break;
            }
        }
        while(*src)
        {
            *dest++ = *src++;
        }
        *dest='\0';
    }
    return firstptr;
}
char *my_strchr(const char *startaddress, int character)
{
    unsigned char *ptr = startaddress;
    if(NULL == ptr)
    {
        printf("The function failed");
    }
    else
    {
        while(*ptr++)
        {
            if(*ptr == character)
            {
                *ptr++;
                startaddress=ptr;
                break;
            }
        }
    }
    return startaddress;

}

int my_strcmp(const char *firstaddress, const char *secondaddress)
{
    unsigned char *firstptr = firstaddress;
    unsigned char *secondptr = secondaddress;
    char Returnstate = 0 ;

    if((NULL ==firstptr) || (NULL ==secondptr))
    {
        printf("The function failed");
    }
    else
    {
        while(*firstptr != '\0' && *firstptr == *secondptr)
        {
            *firstptr++;
            *secondptr++;
        }
        Returnstate =(int)*firstptr -(int)*secondptr;
    }

    return Returnstate;
}
int my_strncmp(const char *firstaddress, const char *secondaddress, unsigned int length)
{
    unsigned char *firstptr = firstaddress;
    unsigned char *secondptr = secondaddress;
    char Returnstate = 0 ;

    if((NULL ==firstptr) || (NULL ==secondptr))
    {
        printf("The function failed");
    }
    else
    {
        while(length--)
        {
            if(*firstptr != '\0' && *firstptr == *secondptr)
            {
                *firstptr++;
                *secondptr++;
            }
            Returnstate =(int)*firstptr -(int)*secondptr;
        }
    }

    return Returnstate;

}

/*int   my_strcoll(const char *firstaddress, const char *secondaddress)
{
    unsigned char *firstptr = firstaddress;
    unsigned char *secondptr = secondaddress;
    char Returnstate = 0 ;

    if((NULL ==firstptr) || (NULL ==secondptr))
    {
        printf("The function failed");
    }
    else
    {
        if(firstptr == secondptr)
        {
            Returnstate = 0;
            printf("%i\t%i\n",*firstptr,*secondptr);
        }
        else
        {
            while((*firstptr!='\0') && (*secondptr!='\0'))
            {
                if(*firstptr != *secondptr)
                {
                    Returnstate = (*firstptr > *secondptr)? -1 : 1 ;
                    printf("%i\t%i\n",*firstptr,*secondptr);
                    break;
                }
                else
                {
                    firstptr++;
                    secondptr++;
                }
            }
        }
    }
    return Returnstate;
}
*/
    char *my_strcpy(char *dest, const char *src)
    {
        unsigned char *ptr = dest;
        if((NULL == dest) || (src == NULL))
        {
            printf("The function field");
        }
        else
        {
            while(*src)
            {
                *dest++ = *src++;
            }
        }
        return ptr;
    }
char *my_strncpy(char *dest, const char *src, unsigned int length)
{
    unsigned char *ptr = dest;
    if((NULL == dest) || (src == NULL))
    {
        printf("The function field");
    }
    else
    {
        while(length--)
        {
            *dest++ = *src++;
        }
    }
    return ptr;
}

unsigned int my_strcspn(const char *firststr, const char *secondstr)
{
    unsigned char *firststrptr  = firststr ;
    unsigned char *secondstrptr = secondstr;
    unsigned int Returnstate = 0 ;

    if((NULL == firststrptr) || (NULL == secondstrptr))
    {
        printf("this function failed");
    }
    else
    {
        while(*firststrptr != '\0')
        {
            if(*firststrptr == *secondstrptr)
            {
                break;
            }
            else
            {
                Returnstate++;
                *firststrptr++;
            }

        }
    }

    return Returnstate;
}

unsigned int my_strlen(const char *str)
{
    unsigned char *ptr = str;
    unsigned int Returnstate = 0;

    while(*ptr)
    {
        Returnstate++;
        *ptr++;
    }
    return Returnstate;
}
char *my_strpbrk(const char *firststr, const char *secondstr)
{
    unsigned char *firststrptr  = firststr ;
    unsigned char *secondstrptr = secondstr;

    if((NULL == firststrptr) || (NULL == secondstrptr))
    {
        printf("this function failed");
    }
    else
    {
        while(*firststrptr != '\0')
        {
            if(*firststrptr == *secondstrptr)
            {
                *firststrptr = *secondstrptr;
                break;
            }
            else
            {
                *firststrptr++;
            }
        }
            if((*firststrptr != *secondstrptr) && (*firststrptr == '\0'))
            {
                printf("not found");
            }
    }

    return *firststrptr;
}
char *my_strrchr(const char *secondstring, int charachter)
{
    unsigned char *searchptr1 = secondstring + (strlen(secondstring));
    unsigned char *searchptr2 = secondstring;


    if(NULL == secondstring)
    {
        printf("The function failed");
    }
    else
    {
        while(*searchptr1 != *searchptr2)
        {
            if(*searchptr1 == charachter)
            {
                break;
            }
            else
            {
                *searchptr1--;
            }
        }
    }
    return searchptr1;
}
unsigned int my_strspn(const char *str1, const char *str2)
{
    unsigned char *ptrstr1 = str1;
    unsigned char *ptrstr2 = str2;
    unsigned int Returnstate = 0;

    while(*ptrstr1)
    {
        if(*ptrstr1 == *ptrstr2)
        {
            Returnstate++;
            *ptrstr1++;
            *ptrstr2++;
        }
        else
        {
            break;
        }
    }
    return Returnstate;
}
char *my_strstr(const char *haystack, const char *needle)
{
    unsigned char *ptrhaystack = haystack;
    unsigned char *ptrneedle = needle;

    if((NULL == ptrhaystack) || (NULL == ptrneedle))
    {
        printf("This function failed");
    }
    else
    {
        while(*ptrhaystack != '\0')
        {
            if(*ptrhaystack == *ptrneedle)
            {
                break;
            }
            else
            {
                *ptrhaystack++;
            }
        }
    }

    return ptrhaystack;
}
char *my_strtok(char *str, const char *delim) //
{
    static char *lastToken = NULL ;
    char *token = NULL ;

    if((NULL == str) || (NULL == delim))
    {
        printf("this function failed");
    }
    else
    {
        if (str != NULL)
        {
            lastToken = str;
        }
        else
        {
            if (lastToken == NULL)
            {
                return NULL;
            }
            str = lastToken;
        }
        token = strpbrk(str, delim);
        if (token != NULL)
        {
            *token++ = '\0';
            lastToken = token;
        }
    }
    return str;
}
unsigned int my_strxfrm(char *dest, const char *src, unsigned int length)
{
    unsigned char *destptr = dest;
    unsigned char *srcptr = src;
    unsigned int counter = 0;

    if((NULL == dest) || (NULL == src))
    {
        printf("This function failed ");
    }
    else
    {
        while(*srcptr++ != '\0')
        {
            *destptr = *srcptr ;
            counter++;
        }
    }
    return counter;
}















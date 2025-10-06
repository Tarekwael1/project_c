#include <stdio.h>
#include <stdlib.h>

//char arrmemchr[30]="htt/www,lamburgini.com"; /*memchr*/

/*char arr1[5]={1,2,3,4,5};
char arr2[5]={1,2,3,4,5};*/         //memcmp

/*char src[30]="good";
char dest[30];*/    // memcpy

/*char arr[10]="tarek wael";*/  //memset

/*char dest[30]="tarek wael";
char src[30]=" fahmy ali abo elez";*/  //strncat

/*char dest[30]="mmmmmmmmmmm";
char src[30]=" hhhhhhhhhhhhhh";*/ //strcat

//char arrstrchr[30]="htt/www,lamburgini.com"; //strchr

char arr1[15]= "ahmed ";
char arr2[15]= "ahmed"  ;      //strcmp

/*char arr1[15]= "ahmed ";
char arr2[15]= "ahmed mohamed";*/   //strncmp

/*char arr1[15]= "a";
char arr2[15]= "A";*/    //strcoll


/*char dest[30];
char src[30]="htt/www,lamburgini.com";*/
/*char dest[30];
char src[30]="htt/www,lamburgini.com";*/



/*char str1[]="ABC1DEF2GHI0";
char str2[]="AJK";*/  //strcspn


/*char str1[]="ABC DEF GHI JKL MNO";
char str2[]="AJK";*/    // strlen

/*char str1[]="1BC D2F G6I J5L MNO";
char str2[]="BJK";*/

//char arrstrrchr[50]="htt/www.lambu/rgini.com.hhhh.tarek";



/*char str1[]="1BC D2F G6I J5L MNO";
char str2[]="1BC D2F G";*/  // strspn

/*char str1[]="tarekwaelfahmyali ";
char str2[]="a";*/   // strstr




/*char str1[]="tarek-wael-fahmy-ali ";
char str2[2]= "-" ;*/   // strtok


char dest[30];
char src[30]="Tutorials Point";


int main()
{




/*
    int retstate =my_strxfrm(dest,src,30);
    printf("%i",retstate);
*/


  /*  int retstate =strtok(str1,str2);

     while( retstate != NULL ) {
      printf( " %s\n", retstate );

      retstate = strtok(NULL, str2);
     }*/


    /*int retstate =my_strstr(str1,str2);
    printf("%s",retstate);*/


    /*int retstate =my_strspn(str1,str2);
    printf("%i",retstate);*/





    /*int retstate =my_strrchr(arrstrrchr,'.');
    printf("%s",retstate);*/


    /*int retstate =my_strpbrk(str1,str2);
    printf("%c",retstate);*/



   /*int retstate =my_strlen(str1);
    printf("%i",retstate);*/


    /*int retstate =my_strcspn(str1,str2);
    printf("%i",retstate);*/


    /*printf("%s\n",dest);
    int retstate =my_strncpy(dest,src,22);
    printf("%s\n",dest);*/


    /*printf("%s\n",dest);
    int retstate =my_strcpy(dest,src);
    printf("%s\n",dest);*/


    /*int retstate =strcoll(arr1,arr2);
    printf("%i",retstate);*/


    /*int retstate =my_strncmp(arr1,arr2,15);
    printf("%i",retstate);*/


    int retstate =my_strcmp(arr1,arr2);
    printf("%c",(char)retstate);


    /*int retstate =my_strchr(arrstrchr,'.');
    printf("%s",retstate);*/

    /*int retstate = my_strcat(dest,src);
    printf("%s",retstate);*/

    /*int retstate = my_strncat(dest,src,5);
    printf("%s",retstate);*/

    /*int retstate =my_memset(arr,'*',5);
    printf("%s",retstate);*/


    /*int retstate =my_memcpy(dest,src,30);
    printf("%s",retstate);*/

    /*int retstate =my_memcmp(arr1,arr2,5);
    printf("%i",retstate);*/ // memcmp

   /* int retstate =my_memchr(arrmemchr,'/',4);
    printf("%s",retstate);*/  //memchr

    return 0;
}


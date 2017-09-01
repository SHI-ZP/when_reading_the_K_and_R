#include <stdio.h>
#define MAXLINE 80 /* maximum input line length */

int getline_(char line[], int maxline);
void copy_(char to[], char from[]);
/* print the longest input line */

main()
{
    int len; /* current line length */
    int max; /* maximum length seen so far */
    char line[MAXLINE]; /* current input line */
    char longest[MAXLINE]; /* longest line saved here */
    max = 0;
    while ((len = getlinev2_(line, MAXLINE)) > 0)
    {
        if (len > max) {
            max = len;
            copy_(longest, line);
        }    
    }

    if (max > 0) /* there was a line */
        printf("The longest line is : %s", longest);
        printf("The length of the longest line is: %d \n", max + 1);
    return 0;
}

/* getline_: read a line into s, return length */
int getline_(char s[],int lim)
{
    int c, i;
    for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
    {
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

int getlinev2_(char s[],int lim)
{
    int c;
    int i;
    int k = 0;printf("49");
    for (i = 0; (c=getchar())!=EOF && c!='\n'; ++i)
    {   printf("51");
        if(i < lim- 1){
            s[k] = c;
            k++;   printf("54");
        }
    }
    printf("57");
    if (c == '\n') {
        s[k] = c;
        k++;
    }
    s[k] = '\0';
    printf("63");
    return i;
    
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy_(char to[], char from[])
{
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}


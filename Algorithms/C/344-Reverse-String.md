# 344-Reverse String

Write a function that takes a string as input and returns the string reversed.

**Example:**

Given s = "hello", return "olleh".

```c
char* reverseString(char* s) {
    int i=strlen(s)-1,j=0;
    char* str=(char*)malloc(strlen(s)+1); 
    for(;i>=0;i--)
      str[j++]=s[i];
    str[i]='\0';
    return str;
}
```

```c
char* reverseString(char* s) {
    int i=strlen(s)-1;
    char* str=(char*)malloc(strlen(s)+1);
    while(i>=0){
        *str=s[i--];
        str++;
    }
    *str='\0';
    str-=strlen(s);
    
    return str;
}
```

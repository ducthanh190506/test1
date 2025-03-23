#include <iostream>
using namespace std;

int strlen(const char *a){
    int len=0;
    while (*a++) len++;
    return len;
}

void reverse(char *a){
    int len=strlen(a);
    char *left=a,*right=a+len-1;
    while (left<right){
        swap(*left,*right);
        left++;
        right--;
    }
}

void delete_char(char *a,char c){
    char *src=a,*dst=a;
    while (*src){
        if (*src!=c){
            *dst++=*src;
        }
        src++;
    }
    *dst='\0';
}

void pad_right(char *a,int n){
    int len=strlen(a);
    if (len>=n) return;
    for (int i=len;i<n;i++){
        a[i]=' ';
    }
    a[n]='\0';
}

void pad_left(char *a,int n){
    int len=strlen(a);
    if (len>=n) return;
    int shift=n-len;
    for (int i=len-1;i>=0;i--){
        a[i+shift]=a[i];
    }
    for (int i=0;i<shift;i++){
        a[i]= ' ';
    }
    a[n]='\0';
}

void truncate(char *a, int n){
    if (strlen(a)>n){
        a[n]='\0';
    }
}

bool is_palindrome(const char *a){
    int len=strlen(a);
    const char *left=a,*right=a+len-1;
    while (left<right){
        if (*left!=*right) return false;
        left++;
        right--;
    }
    return true;
}

void trim_left(char *a){
    char *start=a;
    while (*start==' ')start++;
    char *dst=a;
    while (*start){
        *dst++=*start++;
    }
    *dst='\0';
}

void trim_right(char *a){
    char *end=a+strlen(a)-1;
    while (end>=a && *end==' ') end--;
    *(end+1)='\0';
}


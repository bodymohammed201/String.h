#include <stdio.h>
#include <string.h>
void *my_memchr(const void *s, int c, unsigned n);
int my_memcmp(const void *str1, const void *str2, size_t n);
void *my_memcpy(void *dest, const void * src, size_t n);
void *my_memmove(void *dest, const void * src, size_t n);
void *my_memset(void *str, int c, size_t n);
char *my_strcat(char *dest, const char *src);
char *my_strncat(char *dest, const char *src, size_t n);
char *my_strchr(const char *str, int c);
int my_strcmp(const char *str1, const char *str2);
int my_strncmp(const char *str1, const char *str2,size_t n);
size_t my_strcspn(const char *str1, const char *str2);
size_t my_strcspn2(const char *str1, const char *str2);


   
/*--------------------------------------------------------
---------------------------------------------------------*/
void *my_memchr(const void *s, int c, unsigned n)
{
   unsigned char * ptr = ( unsigned char * )s;
   if(s ==NULL){}
  
   else
   {
    for(int i = 0 ;i<n;i++)
    {
        if((unsigned char )c==(*(unsigned char *)ptr))
         {
              break;
         }
       else
       {
         ptr++; 
       }
     
    }
    return ptr;
   }
}
/*--------------------------------------------------------
---------------------------------------------------------*/
int my_memcmp(const void *str1, const void *str2, size_t n){
    unsigned char * ptr1 = ( unsigned char * )str1;
    unsigned char * ptr2 = ( unsigned char * )str2;
     int ret= 0;
     for(int i = 0 ; i<n;i++){
      if(*(ptr1+i)==*(ptr2+i)){
        ret=0; 
      }
      else if(*(ptr1+i)>*(ptr2+i)){
        ret = 1;
        break;
      }
      else{
        ret = -1;
        break;
      }

     }
     return ret;

}
/*--------------------------------------------------------
---------------------------------------------------------*/
void *my_memcpy(void *dest, const void * src, size_t n){
  unsigned char * dest1= (unsigned char *) dest;
  unsigned char * src1= (unsigned char *) src;
  for(int i = 0;i<n;i++){
    *(dest1 + i)=*(src1+i);
  }
}
/*--------------------------------------------------------
---------------------------------------------------------*/
void *my_memmove(void *dest, const void * src, size_t n){
  unsigned char * dest1= (unsigned char *) dest;
  unsigned char * src1= (unsigned char *) src;
  for(int i = 0;i<n;i++){
    *(dest1 + i)=*(src1+i);
  }
}
/*--------------------------------------------------------
---------------------------------------------------------*/
void *my_memset(void *str, int c, size_t n){

         
  for(int i = 0;i<n;i++){
    *((unsigned char*) str+i)=(unsigned char)c;
  }
}
/*--------------------------------------------------------
---------------------------------------------------------*/
char *my_strcat(char *dest, const char *src){
char *ptr = dest + strlen(dest);
while(*src!='\0'){
  *(ptr++)=*(src++);

}
*ptr= '\0';

return dest;

}
/*--------------------------------------------------------
---------------------------------------------------------*/
char *my_strncat(char *dest, const char *src, size_t n){
char *ptr = dest + n;
while(*src!='\0'){
  *(ptr++)=*(src++);

}
*ptr= '\0';

return dest;

}
/*--------------------------------------------------------
---------------------------------------------------------*/
char *my_strchr(const char *str, int c){
char *ptr=(char *)str;
while(*ptr !='\0'){
  if(*ptr==(char)c){
      break;
  }
  ptr++;
  

}
return ptr;

}
/*--------------------------------------------------------
---------------------------------------------------------*/
int my_strcmp(const char *str1, const char *str2){
char *ptr1 = (char *)str1;
char *ptr2 = (char *)str2;
int value = 0;
while(*ptr1!='\0'){
 if(*ptr1==*ptr2){
    value=0;
 }
 else if((*ptr1-*ptr2)>0){
    value= *ptr1-*ptr2;
    break;
 }
 else{
        value= *ptr1-*ptr2; 
        break;
 }
ptr1++;
ptr2++;

}
return value;
}
/*--------------------------------------------------------
---------------------------------------------------------*/
int my_strncmp(const char *str1, const char *str2,size_t n){
char *ptr1 = (char *)str1;
char *ptr2 = (char *)str2;
int value = 0;
char check= *(str1+n);
while(*ptr1!=check){
 if(*ptr1==*ptr2){
    value=0;
 }
 else if((*ptr1-*ptr2)>0){
    value= *ptr1-*ptr2;
    break;
 }
 else{
        value= *ptr1-*ptr2; 
        break;
 }
ptr1++;
ptr2++;

}
return value;
}
/*--------------------------------------------------------
---------------------------------------------------------*/
/*  هتحسب عدد الارقام اللي مش موجوده  في 2 */
size_t my_strcspn(const char *str1, const char *str2){
size_t counter = 0;
size_t value = 0 ;
char *ptr1 = (char *)str1;
char *ptr2 = (char *)str2;
for(int i = 0 ;i <strlen(ptr1);i++){
  for(int j = 0 ;j<strlen(ptr2);j++){
    if(ptr1[i]==ptr2[j]){
      break;
    }
    else{
      counter++;
    }
  }
  if(counter >0){
    counter = 0;
     value+=1;
  }
}

return value ;
}
/*--------------------------------------------------------
---------------------------------------------------------*/
/*  هتحسب اول ظهور لحروف التاتي في الاول */
size_t my_strcspn2(const char *str1, const char *str2){
size_t counter = 0;
size_t value = 0 ;
char *ptr1 = (char *)str1;
char *ptr2 = (char *)str2;
for(int i = 0 ;i <strlen(ptr2);i++){
  for(int j = 0 ;j<strlen(ptr1);j++){
    if(ptr2[i]==ptr1[j]){
      value =j ;
      counter ++ ; 
      break;
      
      
    }
    
}
if(counter>0)  break;
}

return value ;
}
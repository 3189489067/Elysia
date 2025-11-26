#include <stdio.h>
int main()
{
    int a = 0x11223344;
    int* p = &a;
    char* pi =(char*)&a;
    printf("p=%p\n",p);  
    printf("p+1=%p\n",p+1); 
    printf("pi=%p\n",pi);  
    printf("pi+1=%p\n",pi+1);  
return 0;
}
    
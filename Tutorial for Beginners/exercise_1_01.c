#include <stdio.h>
#include <windows.h>

int main(void)
{
    int a=3;
    int b =5;
    DWORD ppid;

    int sum=a+b;

    printf("sum is %d\n", sum);

    ppid = GetParentProcessId(GetCurrentProcessId());
    printf("my ppid is %u\n",  ppid);

    return 0;
}

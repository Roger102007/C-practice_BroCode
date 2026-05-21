#include <stdio.h>
//global scope(hard to debug)

int add(int x, int y)
{
    int result = x + y;
    return result;
}

int subtract(int x, int y)
{
    int result = x - y;
    return result;
}
int main()
{
    //variable scope = Refer to where a variable is recognized and accessible.
    //                 Varibles can share the same name if they're in different scopes{}
    int result = add(3, 4);
    printf("%d\n", result);

    result = subtract(3, 4);
    printf("%d\n", result);





    return 0;
}
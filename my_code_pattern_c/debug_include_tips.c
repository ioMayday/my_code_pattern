#include <stdio.h>

static char city_name[][20] = {
    #include "city.h"
};

//主函数调用
int main()
{
	printf("%s\n", city_name[0]);
	printf("%s\n", city_name[1]);
	printf("%s\n", city_name[2]);
    printf("%s\n", city_name[3]);

    return 0;
}

// output is 
// beijing
// sh
// gz
// sz
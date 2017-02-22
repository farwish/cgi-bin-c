/**
 * cgi-bin-c
 *
 * https://github.com/farwish/cgi-bin-c
 *
 * @farwish <farwish@foxmail.com>
 */
#include <stdio.h>
#include "common_macro.h"

int main(void)
{
    printf("content-type:text/html;charset=utf-8%s", CGI_EOL);
    printf("hello.%s", CGI_EOL);

    printf("<font color='blue'>copyright(a) farwish.com</font>%s", CGI_EOL);

    return 0;
}

/**
 * cgi-bin-c
 *
 * https://github.com/farwish/cgi-bin-c
 *
 * @farwish <farwish@foxmail.com>
 */
#include <stdio.h>
#include <uuid/uuid.h>
#include "common_macro.h"

/**
 * system uuid_generate wrapper.
 *
 * TODO: return value.
 */
static void
uuid_create(char *out) {
    uuid_t uu;

    uuid_generate(uu);
    uuid_unparse(uu, out);
}

int main(void)
{
    char out[37];
    uuid_create(out);

    printf("content-type:text/html;charset=utf-8%s", CGI_EOL);

    printf("uuid: %s<br/>%s", (char*)out, CGI_EOL);

    printf("<font color='blue'>copyright@farwish.com</font>%s", CGI_EOL);

    return 0;
}

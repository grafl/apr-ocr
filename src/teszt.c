#include "teszt.h"

APR_DECLARE(void) teszt(apr_pool_t *p_mp) {
    char *buf1 = apr_pstrdup(p_mp, "Laci");
    printf("%s\n", buf1);
}

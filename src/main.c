/**
 * apr tutorial sample code
 * http://dev.ariel-networks.com/apr/
 */
#ifdef HAVE_CONFIG_H
    #include <config.h>
#endif

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#include <apr_general.h>
#include <apr_pools.h>

#include "teszt.h"

#define MEM_ALLOC_SIZE		1024

/**
 * memory pool sample code
 * @remark Error checks omitted
 */
int main(int argc, const char *argv[]) {
    apr_status_t rv;
    apr_pool_t *mp;
    char *buf1;
    char *buf2;
    /* per-process initialization */
    rv = apr_initialize();
    if (rv != APR_SUCCESS) {
        assert(0);
        printf("Error initializing the APR.\n");
        return -1;
    }
    /* create a memory pool. */
    apr_pool_create(&mp, NULL);
    printf("Main memory pool created.\n");
    /* allocate memory chunks from the memory pool */
    buf1 = apr_palloc(mp, MEM_ALLOC_SIZE);
    buf2 = apr_palloc(mp, MEM_ALLOC_SIZE);
    /* destroy the memory pool. These chunks above are freed by this */

    teszt(mp);

    apr_pool_destroy(mp);
    apr_terminate();
    return 0;
}

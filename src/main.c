#include <apr_general.h>

int main(int argc, const char *argv[]) {
    apr_pool_t *mp;
    apr_initialize();
    apr_pool_create(&mp, NULL);
    apr_terminate();
    return 0;
}

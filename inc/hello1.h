#include <linux/ktime.h>

struct my_list_head {
    struct my_list_head *next;
    ktime_t time;
    ktime_t post_time;
    //int a[1048576];
};

int print_hello(uint count);

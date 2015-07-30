#ifndef __SMARTJS_HAL_H_
#define __SMARTJS_HAL_H_

/*
 * Interfaces that need to be implemented for each devices.
 */

#include <stdlib.h>
#include <v7.h>

/* Get system free mamory. */
size_t sj_get_free_heap_size();

/* Get filesystem memory usage */
size_t sj_get_fs_memory_usage();

/* Feed watchdog */
void sj_wdt_feed();

/* Restart system */
void sj_system_restart();

/* Delay usecs */
void sj_usleep(int usecs);

/* Setup timer with msecs timeout and cb as a callback */
void sj_set_timeout(int msecs, v7_val_t *cb);

#endif /* __SMARTJS_HAL_H_ */

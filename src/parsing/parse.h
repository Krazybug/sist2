#ifndef SIST2_PARSE_H
#define SIST2_PARSE_H

#include "src/sist.h"

#define PARSE_BUF_SIZE 4096

int fs_read(struct vfile *f, void *buf, size_t size);
void fs_close(struct vfile *f);

void parse(void *arg);

#endif

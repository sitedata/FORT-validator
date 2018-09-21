#ifndef SRC_FILE_H_
#define SRC_FILE_H_

#include <stddef.h>

/*
 * The entire contents of the file, loaded into a buffer.
 *
 * Instances of this struct are expected to live on the stack.
 */
struct file_contents {
	unsigned char *buffer;
	size_t buffer_size;
};

int file_load(const char *file_name, struct file_contents *fc);
void file_free(struct file_contents *fc);

#endif /* SRC_FILE_H_ */

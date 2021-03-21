#include <dirent.h>
#include <stdlib.h>
#include <unistd.h>

/* Repair the use-after-free defect from Listing 6-4. */

int closedir(DIR *dirp) {
    free(dirp->d_buf);
    free(dirp);
    return close(dirp->d_fd);  // dirp has already been freed
}

int closedir_repaired(DIR *dirp) {
    free(dirp->d_buf);
    int i = close(dirp->d_fd)
    free(dirp);
    return i;
}

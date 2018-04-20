#include <stdio.h>
#include <dirent.h>

/**
 * Main
 */
int main(int argc, char **argv)
{
  // Parse command line
  DIR *checkDirectory;
  char defaultDir[2] = ".";
  // Open directory
  checkDirectory = argc < 2 ? opendir(defaultDir) : opendir(argv[1]);
  if (checkDirectory == NULL)
  {
    printf("'%s' is not a valid directory!", argv[1]);
    return 1;
  }
  // Repeatly read and print entries

  // Close directory
  closedir(checkDirectory);
  return 0;
}

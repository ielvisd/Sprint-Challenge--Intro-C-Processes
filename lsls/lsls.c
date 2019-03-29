#include <stdio.h>
#include <dirent.h>

/**
 * Main
 */
int main(int argc, char **argv)
{
  // Parse command line
  int i;

  printf("There are %d command line argument(s):\n", argc);

  for (i = 0; i < argc; i++)
  {
    printf("   %s\n", argv[i]);
    // Open directory
    DIR *dir = opendir(argv[i]);
    struct dirent *entry;

    if (dir == NULL)
      perror("opendir() error");
    else
    {
      puts("contents of root:");
      // Repeatly read and print entries
      while ((entry = readdir(dir)) != NULL)
        printf("  %s\n", entry->d_name);

      // Close directory
      closedir(dir);
    }
  }

  return 0;
}
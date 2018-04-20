#include <stdio.h>
#include <dirent.h>

/**
 * Main
 */
int main(int argc, char **argv)
{
  
  struct dirent *de;

 	if(argv[1] == NULL) {
  	DIR *dr = opendir(".");
    if (dr == NULL) {
      printf("Could not open directory\n");
      return 0;
  	}
    while ((de = readdir(dr)) != NULL){
      printf("%s\n", de->d_name);
    }
    closedir(dr);    
    return 0;
		}

 		else if(argv[1] != NULL) {
 			char *x = argv[1];
 			DIR *dr = opendir(x);
	    if (dr == NULL)
	    {
	        printf("Could not open current directory\n");
	        return 0;
	    }
	    while ((de = readdir(dr)) != NULL){
				printf("%s\n", de->d_name);
	    }
	    closedir(dr);    
	    return 0;
 		}
}
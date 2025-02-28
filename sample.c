// #include <stdio.h>
// int main() {
// 	char last_name[20];
// 	printf ("Enter your last name: ");
// 	scanf ("%s", last_name);
// 	printf("Entered last name is %s\n", last_name);
// }

#include <stdio.h>
#include <stdlib.h>
    
int main(int argc, char **argv) {
    char *items[] = {"boat", "car", "truck", "train"};
    int index = atoi(argv[1]);
    printf("You selected %s\n", items[index-1]);
}

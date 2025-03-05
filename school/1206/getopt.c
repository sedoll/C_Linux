#include <stdio.h>
#include <unistd.h>

main(int argc, char *argv[]){
	int opt;
	while((opt = getopt(argc, argv, "if:lr")) != -1) {
		switch(opt) {
			case 'i': /* option */
			case 'l': /* option */
			case 'r':
				printf("option: %c\n", opt); break;
			case 'f': /* option with argument */
				printf("filename: %s\n", optarg); break;
			case ':': /* can’t get argument */
				printf("option needs a value\n"); break;
			case '?':
				printf("unknown option: %c\n", optopt); 
				break;
		}
	}
	for(; optind < argc; optind++)
	printf("argument: %s\n", argv[optind]);
}

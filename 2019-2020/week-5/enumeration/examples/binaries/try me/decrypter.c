#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	if (argc != 4) {
		printf("Usage: ./decrypter <seed> <input_file> <output_file>\n");
		exit(1);
	}

	int seed = atoi(argv[1]);
	srand(seed);

	printf("Seed: %d\n", seed);

	// open input file
	FILE* fp = fopen(argv[2], "rb");
	// get length of file
	fseek(fp, 0, SEEK_END);
	int size = ftell(fp);
	printf("Size of data: %d\n", size);

	// allocate buffer equal to file size
	unsigned char* buffer = (unsigned char*) calloc(size + 1, 1);
	// read file data
	fseek(fp, 0, SEEK_SET);
	fread(buffer, 1, size, fp);
	fclose(fp);

	printf("Data: %s\n", buffer);

	// array for rand numbers
	int rands[2000];

	// generate random numbers
	for (int i=0; i<2000; i++) {
		rands[i] = rand();
	}

	char temp;
	int swap1, swap2;
	int swap1_ind = 1998;
	int swap2_ind = 1999;
	int switch1, switch2;
	// perform swapping
	for (int i=0; i<1000; i++) {
		swap1 = rands[swap1_ind];
		swap2 = rands[swap2_ind];
		switch1 = swap1 % (size-1);
		switch2 = swap2 % (size-1);
		temp = buffer[switch1];
		buffer[switch1] = buffer[switch2];
		buffer[switch2] = temp;
		swap1_ind -= 2;
		swap2_ind -= 2;
	}

	printf("%s\n", buffer);

	char* name = argv[3];
	FILE* wp = fopen(argv[3], "wb");
	if (wp == NULL) {
	    printf("Error opening file to write to\n");
	    exit(1);
	}
	if (fwrite(buffer, sizeof(char), size, wp) < 0) {
	    printf("Error writing to file\n");
	    goto done;
	}
	// close new file
	fclose(wp);
    done:
    // free buffer
    free(buffer);
}

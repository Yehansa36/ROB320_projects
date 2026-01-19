#include <stdio.h>
#include <stdlib.h>

// Struct to store address and name pairs
typedef struct {
    void *address;
    char *name;
} AddressNamePair;

// Decalre uninitialized Global Variables
unsigned long global_a;
short global_b;
unsigned long long global_c;
char global_d;

// Declare Initialized Global Variables
unsigned long global_e = 1;
short global_f = 2;
unsigned long long global_g = 4;
char global_h = 8;

// Functions
void find_address_extrema(AddressNamePair *pairs, int size,
                          unsigned long long *min_address,
                          unsigned long long *max_address) {
    // TODO: Find the minimum and maximum addresses in the pairs array.
    //       Store the results in min_address and max_address.
}

int compare(const void *a, const void *b) {
    // TODO: Implement comparison function for qsort. You must cast the void
    //       pointers to AddressNamePair pointers before accessing the member
    //       variables.
    //       Sort by address in ascending order
    //       Return negative if a < b, 0 if a == b, positive if a > b
}

int sort_and_print_addresses(AddressNamePair *pairs, int size,
                             long long min_address) {
    qsort(pairs, size, sizeof(AddressNamePair), compare);
    for (int i = 0; i < size; i++) {
        printf("%s\n", pairs[i].name);
    }
    return 0;
}

int main(int argc, char *argv[]) {
    // Declare stack Variables
    unsigned long stack_a;
    short stack_b;
    unsigned long long stack_c;
    char stack_d;

    // TODO: Use malloc to allocate heap variables
    unsigned long *heap_a = NULL;
    short *heap_b = NULL;
    unsigned long long *heap_c = NULL;
    char *heap_d = NULL;

    // Store addresses and names in an array
    AddressNamePair pairs[] = {
        {&global_a, "global_a"},
        {&global_b, "global_b"},
        {&global_c, "global_c"},
        {&global_d, "global_d"},
        {&global_e, "global_e"},
        {&global_f, "global_f"},
        {&global_g, "global_g"},
        {&global_h, "global_h"},
        {&stack_a, "stack_a"},
        {&stack_b, "stack_b"},
        {&stack_c, "stack_c"},
        {&stack_d, "stack_d"},
        {heap_a, "heap_a"},
        {heap_b, "heap_b"},
        {heap_c, "heap_c"},
        {heap_d, "heap_d"},
        {&argc, "argc"},
        {argv, "argv"},
        {&compare, "compare"},
        {&find_address_extrema, "find_address_extrema"},
        {&sort_and_print_addresses, "sort_and_pint_addresses"},
        {&main, "main"},
        {&printf, "printf"},
        {&malloc, "malloc"},
        {&free, "free"},
        {&qsort, "qsort"},
    };
    const unsigned long num_pairs = sizeof(pairs) / sizeof(pairs[0]);

    // Get the minimum and maximum addresses
    unsigned long long min_address, max_address;
    find_address_extrema(pairs, num_pairs, &min_address, &max_address);

    // Print sorted addresses
    sort_and_print_addresses(pairs, num_pairs, min_address);

    // TODO: Use free to deallocate heap variables

    return 0;
}
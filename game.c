#include "game.h"

// REQUIRED
FILE * open_data_file(int argc, char** argv) {
    return NULL;
}

// REQUIRED
FILE * open_dict_file(int argc, char** argv) {
    return NULL;
}

// REQUIRED - DO NOT EDIT
void print_instructions(strand_t * strand) {
    printf("\n  +-- Welcome to Strands! --+\n");
    printf("\nInstructions:\n");
    printf("\tFind all %d %d-letter words\n", strand->numWords, strand->wordLen);
    printf("\tEach word's letters must touch\n");
    printf("\tA letter can be repeated in a word\n");
    printf("\tType a word then press 'Enter'\n");
    printf("\tType 'quit' when done\n");
}

// REQUIRED
void play_game(strand_t * strand) {

}

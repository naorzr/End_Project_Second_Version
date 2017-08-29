#ifndef ENDPROJECT_ASSEMBLER_H
#define ENDPROJECT_ASSEMBLER_H


#include <stdio.h>
#include "error_handler.h"

#define MAX_LINE 81

/* Enums for the assembler pass indicators */
enum{FIRST_PASS, SECOND_PASS};
/* TODO: might want to consider making the return type err_t , thus making the error process more natural */

ErrorTypes parse_file(FILE *inpf,int passage);

void export_assembly_files(char *outName);

#endif /*ENDPROJECT_ASSEMBLER_H*/
#ifndef ENDPROJECT_ERROR_HANDLER_H
#define ENDPROJECT_ERROR_HANDLER_H

enum ErrorTypes{
    ERR_LABEL,
    ERR_EXPECTED_ARG,
    ERR_EXPECTED_LABEL,
    ERR_INV_WORD,
    ERR_INV_DATA_PARAM,
    ERR_INV_DATA_SIZE,
    ERR_INV_STRING_PARAM,
    ERR_INV_DIRECTIVE,
    ERR_INV_MAT_INIT,
    ERR_INV_MAT_PARAM_SIZE,
    ERR_STOP,
    ERR_LABEL_REDECLARED,
    NO_ERR_OCCURRED,
    E_LABEL_REDEC,    /* label redeclaration */
    E_INVALID_LABEL,
    E_INVALID_SRC_OP,
    E_INVALID_DEST_OP,
    E_INVALID_ADDMODE,
    E_INVALID_SRCOP_ADDMODE,
    E_INVALID_DESTOP_ADDMODE
};

void print_error(enum ErrorTypes err, int lineNum, char *line);
#endif //ENDPROJECT_ERROR_HANDLER_H

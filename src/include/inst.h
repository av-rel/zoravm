#ifndef _INST_H
#define _INST_H

typedef enum {
  //
  INST_PUSH = 0,
  INST_POP,
  INST_STORE,
  INST_LOAD,
  INST_PRINT,
  INST_SCAN,
  INST_RET,
  INST_HALT,
  //
  INST_ADD,
  INST_SUB,
  INST_MUL,
  INST_DIV,
  INST_MOD,
  //
  INST_JMP,
  INST_CMP,
  INST_JZ,
  INST_JE,
  INST_JG,
  INST_JL,
  INST_JGE,
  INST_JLE,
  //
  INST_NCMP,
  INST_JNZ,
  INST_JNE,
  INST_JNL,
  INST_JNLE,
  INST_JNG,
  INST_JNGE,
  //
  INST_AND,
  INST_OR,
  INST_XOR,
  INST_NOT,
  INST_NEG,
  INST_SHL,
  INST_SHR,
  //
  INST_INC,
  INST_DEC,
  INST_POW,
  //
  INST_FOPEN,
  INST_FCLOSE,
  INST_FREAD,
  INST_FWRITE,
  INST_FAPPEND,
  INST_FSEEK,
  INST_FTELL,
  INST_FFLUSH,
  INST_FEOF,
  INST_FERROR,
  //
  INST_DUMP_STACK,
  INST_DUMP_MEM,
  //
  TOTAL_INST
} Inst;

#endif

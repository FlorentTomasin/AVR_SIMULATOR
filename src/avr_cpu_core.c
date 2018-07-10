/*
 * AVR architecture use a HARVARD architecture to maximize performances
 * and parallelism (separate memory for data and program).
 *
 * It has a level of pipeline for program instruction
 *
 *
 */

#include "register_file.h"
#include "program_counter.h"
#include "flash_program_memory.h"
#include "instruction_register.h"
#include "instruction_decode.h"
#include "data_memory.h"
#include "stack_pointer.h"
#include "status_register.h"
#include "alu.h"


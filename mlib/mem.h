#ifndef MEM_H
#define MEM_H

#include "types.h"

extern uint32_t placement_address;

uint32_t kmalloc_a(uint32_t sz);  // page aligned.
uint32_t kmalloc_p(uint32_t sz, uint32_t *phys); // returns a physical address.
uint32_t kmalloc_ap(uint32_t sz, uint32_t *phys); // page aligned and returns a physical address.
uint32_t kmalloc(uint32_t sz); // vanilla (normal).
uint32_t kmalloc_internal(uint32_t sz, int align, uint32_t* phys_address);

#endif
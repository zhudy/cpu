#ifndef _INC_STATICMEMORY_H
#define _INC_STATICMEMORY_H

#include "memorymodule.h"

class StaticMemory : public MemoryModule {
public:
    StaticMemory(SizeType size);
    virtual int readMemory(SizeType offset, SizeType len, void *buffer);
    virtual int writeMemory(SizeType offset, SizeType len, const void *buffer);

private:
    void *buffer;
};

#endif//_INC_STATICMEMORY_H
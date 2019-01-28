#pragma once

#include "types.h"

namespace agl
{
    class GPUMemBlockBase;

    namespace detail
    {
        class GPUMemBlockMgrHeapEx;
        enum MemoryPoolType;

        class MemoryPoolHeap
        {
        public:
            MemoryPoolHeap(void *, u64, u64, agl::detail::MemoryPoolType const &, void *, u64, agl::detail::GPUMemBlockMgrHeapEx *);
            ~MemoryPoolHeap();
        
            static agl::detail::MemoryPoolHeap* create(u64, s32, u64, s32, u64, u64, agl::detail::MemoryPoolType const &, agl::detail::GPUMemBlockMgrHeapEx *);
            static void destroy(agl::detail::MemoryPoolHeap *);

            void pushBack(agl::GPUMemBlockBase *);
            u64* allocFromMemoryPool(u64, s32);
            void freeToHeap(agl::GPUMemBlockBase *);
            bool isAllocatable(agl::detail::MemoryPoolType const &, u64, s32) const;

            agl::GPUMemBlockBase* _120;
        };
    };
};
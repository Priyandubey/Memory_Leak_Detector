#ifndef __allocation_info
#define __allocation_info

#include <vector>
#include <string>

#include <pthread.h>

namespace myName
{
    namespace memory
    {
        class allocation_info
        {
        public:
            typedef long long address_type;

        private:
            allocation_info::address_type address;
            size_t size;
            pthread_t thread_id;
        public:
            allocation_info(void* address, size_t size, pthread_t thread_id);

            allocation_info::address_type get_address() const;
            size_t get_size() const;
            pthread_t get_thread_id() const;
        };
    }
}
    
#endif

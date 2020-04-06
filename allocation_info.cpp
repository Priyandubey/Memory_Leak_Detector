#include "allocation_info.hpp"

namespace myName
{
  namespace memory
  {
    allocation_info::allocation_info(void* address, size_t size, pthread_t thread_id)
    {
      this->address = reinterpret_cast<allocation_info::address_type>(address);
      this->size = size;
      this->thread_id = thread_id;
    }

    allocation_info::address_type allocation_info::get_address() const
    {
      return address;
    }

    size_t allocation_info::get_size() const
    {
      return size;
    }

    pthread_t allocation_info::get_thread_id() const
    {
      return thread_id;
    }
  }
}

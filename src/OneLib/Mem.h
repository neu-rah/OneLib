/* -*- C++ -*- */
#ifndef ONEMEM_DEF
  #define ONEMEM_DEF

  #ifdef DEBUG
    #include <streamFlow.h>
  #endif

  namespace OneLib {
    //memory handler --------------------------------------------------------
    template<class T>
    struct Mem {
      static inline T get(const T* addr) {return *addr;}
      static inline T set(T* addr,const T v) {return *addr=v;}
    };
  }
#endif
#include <bimath/vec.hpp>
#include <bimath/half.hpp>
#include "_serialization.h"
#define _NAPALM_TYPE_OP(T, Label) _EXPORT_TYPES(T, Label)
#include "../types/type_enable.h"

#ifdef ENABLE_NAPALM_TYPES_IMATH
#ifdef ENABLE_NAPALM_TYPES_VEC
#ifdef ENABLE_NAPALM_TYPES_VEC4

#ifdef ENABLE_NAPALM_TYPES_BASED_ON_HALF
_NAPALM_TYPE_OP(Imath::Vec4<half>,				V4h)
#endif

#endif
#endif
#endif

#undef _NAPALM_TYPE_OP

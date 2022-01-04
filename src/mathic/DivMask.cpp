#include "DivMask.h"

#ifdef MATHIC_TRACK_DIV_MASK_HIT_RATIO
namespace mathic {
  namespace DivMaskStats {
    unsigned long maskComputes = 0;
    unsigned long maskChecks = 0;
    unsigned long maskHits = 0;
    unsigned long divChecks = 0;
    unsigned long divDivides = 0;
    unsigned long divHits = 0;
  }
}
#else
// The purpose of dummy is to silence a MSVC linker warning
// that says that this file is not adding anything to the build.

// But this gives an unused function warning on clang++, so we comment it out for now.
// If it remains a problem on MSVC, we can ifdef for that situation.
// namespace {void dummy(){}}
#endif

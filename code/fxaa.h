#ifndef __
_H_
#define __FXAA_H_

#include "bsp.h"
#include "cudabsp.h"

namespace CUDAFXAA {
    void antialias_lightsamples(CUDABSP::CUDABSP* pCudaBSP);
}

#endif

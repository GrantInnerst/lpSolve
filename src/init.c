#include "lp.h"
#include <Rconfig.h>
#include <Rinternals.h>
#include <R_ext/Rdynload.h>

static const
  R_CMethodDef cMethods[ ] = {
    {"lpslink", (DL_FUNC) &lpslink, 28},
    NULL
  };


void R_init_lpsolve(DllInfo *info){
  R_registerRoutines(info,cMethods, NULL, NULL,NULL);
  R_RegisterCCallable("lpSolve", "lpslink", (DL_FUNC) &lpslink);
}

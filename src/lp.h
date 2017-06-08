#include <R.h>
#include <Rinternals.h>
#include <Rdefines.h>

#ifdef BUILDING_FOR_R
#define LONG_OR_INT int
#else
#define LONG_OR_INT long
#endif

void lpslink (LONG_OR_INT *direction,         /* 1 for max, 0 for min        */
              LONG_OR_INT *x_count,           /* Number of x's               */
              double *objective,              /* Objective function          */
              LONG_OR_INT *const_count,       /* Number of constraints       */
              double *constraints,            /* Has extra element on front  */
              LONG_OR_INT *int_count,         /* Number of integer variables */
              LONG_OR_INT *int_vec,           /* Indices of int. variables   */
              LONG_OR_INT *bin_count,         /* Number of binary variables  */
              LONG_OR_INT *bin_vec,           /* Indices of bin. variables   */
              LONG_OR_INT *num_bin_solns,     /* # of all-bin solns to find  */
              double *obj_val,                /* Objective function value    */
              double *solution,               /* Result of call              */
              LONG_OR_INT *presolve,          /* Value of presolve           */
              LONG_OR_INT *compute_sens,      /* Want sensitivity?           */
              double *sens_coef_from,         /* Sens. coef. lower limit     */
              double *sens_coef_to,           /* Sens. coef. upper limit     */
              double *duals,                  /* Dual values                 */
              double *duals_from,             /* Lower limit dual values     */
              double *duals_to,               /* Lower limit dual values     */
              LONG_OR_INT *scale,             /* lpsolve scaling parameter   */
              LONG_OR_INT *use_dense,         /* Use dense constraint matrix?*/
              LONG_OR_INT *dense_col,         /* Dense constraint columns    */
              double *dense_val,              /* Dense constraint values     */
              LONG_OR_INT *dense_mat_nrow,    /* Dense constraint #entries   */
              double *dense_ctr,              /* Dense constraint info       */
              LONG_OR_INT *use_rw_file,       /* See notes below             */
              char **rw_file,                 /* See notes below             */
              LONG_OR_INT *status);           /* Holds return value          */

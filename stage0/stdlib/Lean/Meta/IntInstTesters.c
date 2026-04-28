// Lean compiler output
// Module: Lean.Meta.IntInstTesters
// Imports: public import Lean.Meta.Basic
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isDefEqI(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Int_mkInstHSub;
extern lean_object* l_Lean_Int_mkInstAdd;
extern lean_object* l_Lean_Int_mkInstHAdd;
extern lean_object* l_Lean_Int_mkInstNeg;
extern lean_object* l_Lean_Int_mkInstLT;
extern lean_object* l_Lean_Int_mkInstMul;
extern lean_object* l_Lean_Int_mkInstSub;
extern lean_object* l_Lean_Int_mkInstLE;
extern lean_object* l_Lean_Int_mkInstHMul;
static lean_once_cell_t l_Lean_Meta_Structural_isInstOfNatInt___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Structural_isInstOfNatInt___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_Structural_isInstOfNatInt___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Structural_isInstOfNatInt___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstOfNatInt___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstOfNatInt___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstOfNatInt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstOfNatInt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Structural_isInstNegInt___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Structural_isInstNegInt___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_Structural_isInstNegInt___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Structural_isInstNegInt___redArg___closed__1;
static lean_once_cell_t l_Lean_Meta_Structural_isInstNegInt___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Structural_isInstNegInt___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstNegInt___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstNegInt___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstNegInt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstNegInt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Structural_isInstAddInt___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Structural_isInstAddInt___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_Structural_isInstAddInt___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Structural_isInstAddInt___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstAddInt___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstAddInt___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstAddInt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstAddInt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Structural_isInstSubInt___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Structural_isInstSubInt___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_Structural_isInstSubInt___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Structural_isInstSubInt___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstSubInt___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstSubInt___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstSubInt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstSubInt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Structural_isInstMulInt___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Structural_isInstMulInt___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_Structural_isInstMulInt___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Structural_isInstMulInt___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstMulInt___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstMulInt___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstMulInt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstMulInt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Structural_isInstDivInt___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Structural_isInstDivInt___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_Structural_isInstDivInt___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Structural_isInstDivInt___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstDivInt___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstDivInt___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstDivInt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstDivInt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Structural_isInstModInt___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Structural_isInstModInt___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_Structural_isInstModInt___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Structural_isInstModInt___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstModInt___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstModInt___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstModInt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstModInt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Structural_isInstDvdInt___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Structural_isInstDvdInt___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_Structural_isInstDvdInt___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Structural_isInstDvdInt___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstDvdInt___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstDvdInt___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstDvdInt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstDvdInt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Structural_isInstHAddInt___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Structural_isInstHAddInt___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_Structural_isInstHAddInt___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Structural_isInstHAddInt___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHAddInt___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHAddInt___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHAddInt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHAddInt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Structural_isInstHSubInt___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Structural_isInstHSubInt___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_Structural_isInstHSubInt___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Structural_isInstHSubInt___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHSubInt___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHSubInt___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHSubInt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHSubInt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Structural_isInstHMulInt___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Structural_isInstHMulInt___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_Structural_isInstHMulInt___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Structural_isInstHMulInt___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHMulInt___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHMulInt___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHMulInt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHMulInt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Structural_isInstHDivInt___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Structural_isInstHDivInt___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_Structural_isInstHDivInt___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Structural_isInstHDivInt___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHDivInt___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHDivInt___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHDivInt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHDivInt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Structural_isInstHModInt___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Structural_isInstHModInt___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_Structural_isInstHModInt___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Structural_isInstHModInt___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHModInt___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHModInt___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHModInt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHModInt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Structural_isInstLTInt___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Structural_isInstLTInt___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_Structural_isInstLTInt___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Structural_isInstLTInt___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstLTInt___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstLTInt___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstLTInt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstLTInt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Structural_isInstLEInt___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Structural_isInstLEInt___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_Structural_isInstLEInt___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Structural_isInstLEInt___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstLEInt___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstLEInt___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstLEInt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstLEInt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Structural_isInstNatPowInt___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Structural_isInstNatPowInt___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_Structural_isInstNatPowInt___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Structural_isInstNatPowInt___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstNatPowInt___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstNatPowInt___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstNatPowInt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstNatPowInt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Structural_isInstPowInt___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Structural_isInstPowInt___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_Structural_isInstPowInt___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Structural_isInstPowInt___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstPowInt___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstPowInt___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstPowInt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstPowInt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Structural_isInstHPowInt___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Structural_isInstHPowInt___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_Structural_isInstHPowInt___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Structural_isInstHPowInt___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHPowInt___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHPowInt___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHPowInt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHPowInt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DefEq_isInstNegInt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DefEq_isInstNegInt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DefEq_isInstAddInt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DefEq_isInstAddInt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DefEq_isInstHAddInt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DefEq_isInstHAddInt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DefEq_isInstSubInt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DefEq_isInstSubInt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DefEq_isInstHSubInt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DefEq_isInstHSubInt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DefEq_isInstMulInt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DefEq_isInstMulInt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DefEq_isInstHMulInt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DefEq_isInstHMulInt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DefEq_isInstLTInt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DefEq_isInstLTInt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DefEq_isInstLEInt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DefEq_isInstLEInt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_DefEq_isInstDvdInt___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_DefEq_isInstDvdInt___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_DefEq_isInstDvdInt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DefEq_isInstDvdInt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_Meta_Structural_isInstOfNatInt___redArg___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = lean_mk_string_unchecked("instOfNat", 9, 9);
return v___x_1_;
}
}
static lean_object* _init_l_Lean_Meta_Structural_isInstOfNatInt___redArg___closed__1(void){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = lean_obj_once(&l_Lean_Meta_Structural_isInstOfNatInt___redArg___closed__0, &l_Lean_Meta_Structural_isInstOfNatInt___redArg___closed__0_once, _init_l_Lean_Meta_Structural_isInstOfNatInt___redArg___closed__0);
v___x_3_ = l_Lean_Name_mkStr1(v___x_2_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstOfNatInt___redArg(lean_object* v_e_4_, lean_object* v_a_5_, lean_object* v_a_6_){
_start:
{
lean_object* v___x_8_; 
v___x_8_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_4_, v_a_5_, v_a_6_);
if (lean_obj_tag(v___x_8_) == 0)
{
lean_object* v_a_9_; lean_object* v___x_11_; uint8_t v_isShared_12_; uint8_t v_isSharedCheck_26_; 
v_a_9_ = lean_ctor_get(v___x_8_, 0);
v_isSharedCheck_26_ = !lean_is_exclusive(v___x_8_);
if (v_isSharedCheck_26_ == 0)
{
v___x_11_ = v___x_8_;
v_isShared_12_ = v_isSharedCheck_26_;
goto v_resetjp_10_;
}
else
{
lean_inc(v_a_9_);
lean_dec(v___x_8_);
v___x_11_ = lean_box(0);
v_isShared_12_ = v_isSharedCheck_26_;
goto v_resetjp_10_;
}
v_resetjp_10_:
{
lean_object* v___x_19_; uint8_t v___x_20_; 
v___x_19_ = l_Lean_Expr_cleanupAnnotations(v_a_9_);
v___x_20_ = l_Lean_Expr_isApp(v___x_19_);
if (v___x_20_ == 0)
{
lean_dec_ref(v___x_19_);
goto v___jp_13_;
}
else
{
lean_object* v___x_21_; lean_object* v___x_22_; uint8_t v___x_23_; 
v___x_21_ = l_Lean_Expr_appFnCleanup___redArg(v___x_19_);
v___x_22_ = lean_obj_once(&l_Lean_Meta_Structural_isInstOfNatInt___redArg___closed__1, &l_Lean_Meta_Structural_isInstOfNatInt___redArg___closed__1_once, _init_l_Lean_Meta_Structural_isInstOfNatInt___redArg___closed__1);
v___x_23_ = l_Lean_Expr_isConstOf(v___x_21_, v___x_22_);
lean_dec_ref(v___x_21_);
if (v___x_23_ == 0)
{
goto v___jp_13_;
}
else
{
lean_object* v___x_24_; lean_object* v___x_25_; 
lean_del_object(v___x_11_);
v___x_24_ = lean_box(v___x_23_);
v___x_25_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_25_, 0, v___x_24_);
return v___x_25_;
}
}
v___jp_13_:
{
uint8_t v___x_14_; lean_object* v___x_15_; lean_object* v___x_17_; 
v___x_14_ = 0;
v___x_15_ = lean_box(v___x_14_);
if (v_isShared_12_ == 0)
{
lean_ctor_set(v___x_11_, 0, v___x_15_);
v___x_17_ = v___x_11_;
goto v_reusejp_16_;
}
else
{
lean_object* v_reuseFailAlloc_18_; 
v_reuseFailAlloc_18_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_18_, 0, v___x_15_);
v___x_17_ = v_reuseFailAlloc_18_;
goto v_reusejp_16_;
}
v_reusejp_16_:
{
return v___x_17_;
}
}
}
}
else
{
lean_object* v_a_27_; lean_object* v___x_29_; uint8_t v_isShared_30_; uint8_t v_isSharedCheck_34_; 
v_a_27_ = lean_ctor_get(v___x_8_, 0);
v_isSharedCheck_34_ = !lean_is_exclusive(v___x_8_);
if (v_isSharedCheck_34_ == 0)
{
v___x_29_ = v___x_8_;
v_isShared_30_ = v_isSharedCheck_34_;
goto v_resetjp_28_;
}
else
{
lean_inc(v_a_27_);
lean_dec(v___x_8_);
v___x_29_ = lean_box(0);
v_isShared_30_ = v_isSharedCheck_34_;
goto v_resetjp_28_;
}
v_resetjp_28_:
{
lean_object* v___x_32_; 
if (v_isShared_30_ == 0)
{
v___x_32_ = v___x_29_;
goto v_reusejp_31_;
}
else
{
lean_object* v_reuseFailAlloc_33_; 
v_reuseFailAlloc_33_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_33_, 0, v_a_27_);
v___x_32_ = v_reuseFailAlloc_33_;
goto v_reusejp_31_;
}
v_reusejp_31_:
{
return v___x_32_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstOfNatInt___redArg___boxed(lean_object* v_e_35_, lean_object* v_a_36_, lean_object* v_a_37_, lean_object* v_a_38_){
_start:
{
lean_object* v_res_39_; 
v_res_39_ = l_Lean_Meta_Structural_isInstOfNatInt___redArg(v_e_35_, v_a_36_, v_a_37_);
lean_dec(v_a_37_);
lean_dec(v_a_36_);
return v_res_39_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstOfNatInt(lean_object* v_e_40_, lean_object* v_a_41_, lean_object* v_a_42_, lean_object* v_a_43_, lean_object* v_a_44_){
_start:
{
lean_object* v___x_46_; 
v___x_46_ = l_Lean_Meta_Structural_isInstOfNatInt___redArg(v_e_40_, v_a_42_, v_a_44_);
return v___x_46_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstOfNatInt___boxed(lean_object* v_e_47_, lean_object* v_a_48_, lean_object* v_a_49_, lean_object* v_a_50_, lean_object* v_a_51_, lean_object* v_a_52_){
_start:
{
lean_object* v_res_53_; 
v_res_53_ = l_Lean_Meta_Structural_isInstOfNatInt(v_e_47_, v_a_48_, v_a_49_, v_a_50_, v_a_51_);
lean_dec(v_a_51_);
lean_dec_ref(v_a_50_);
lean_dec(v_a_49_);
lean_dec_ref(v_a_48_);
return v_res_53_;
}
}
static lean_object* _init_l_Lean_Meta_Structural_isInstNegInt___redArg___closed__0(void){
_start:
{
lean_object* v___x_54_; 
v___x_54_ = lean_mk_string_unchecked("Int", 3, 3);
return v___x_54_;
}
}
static lean_object* _init_l_Lean_Meta_Structural_isInstNegInt___redArg___closed__1(void){
_start:
{
lean_object* v___x_55_; 
v___x_55_ = lean_mk_string_unchecked("instNegInt", 10, 10);
return v___x_55_;
}
}
static lean_object* _init_l_Lean_Meta_Structural_isInstNegInt___redArg___closed__2(void){
_start:
{
lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; 
v___x_56_ = lean_obj_once(&l_Lean_Meta_Structural_isInstNegInt___redArg___closed__1, &l_Lean_Meta_Structural_isInstNegInt___redArg___closed__1_once, _init_l_Lean_Meta_Structural_isInstNegInt___redArg___closed__1);
v___x_57_ = lean_obj_once(&l_Lean_Meta_Structural_isInstNegInt___redArg___closed__0, &l_Lean_Meta_Structural_isInstNegInt___redArg___closed__0_once, _init_l_Lean_Meta_Structural_isInstNegInt___redArg___closed__0);
v___x_58_ = l_Lean_Name_mkStr2(v___x_57_, v___x_56_);
return v___x_58_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstNegInt___redArg(lean_object* v_e_59_, lean_object* v_a_60_, lean_object* v_a_61_){
_start:
{
lean_object* v___x_63_; 
v___x_63_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_59_, v_a_60_, v_a_61_);
if (lean_obj_tag(v___x_63_) == 0)
{
lean_object* v_a_64_; lean_object* v___x_66_; uint8_t v_isShared_67_; uint8_t v_isSharedCheck_75_; 
v_a_64_ = lean_ctor_get(v___x_63_, 0);
v_isSharedCheck_75_ = !lean_is_exclusive(v___x_63_);
if (v_isSharedCheck_75_ == 0)
{
v___x_66_ = v___x_63_;
v_isShared_67_ = v_isSharedCheck_75_;
goto v_resetjp_65_;
}
else
{
lean_inc(v_a_64_);
lean_dec(v___x_63_);
v___x_66_ = lean_box(0);
v_isShared_67_ = v_isSharedCheck_75_;
goto v_resetjp_65_;
}
v_resetjp_65_:
{
lean_object* v___x_68_; lean_object* v___x_69_; uint8_t v___x_70_; lean_object* v___x_71_; lean_object* v___x_73_; 
v___x_68_ = l_Lean_Expr_cleanupAnnotations(v_a_64_);
v___x_69_ = lean_obj_once(&l_Lean_Meta_Structural_isInstNegInt___redArg___closed__2, &l_Lean_Meta_Structural_isInstNegInt___redArg___closed__2_once, _init_l_Lean_Meta_Structural_isInstNegInt___redArg___closed__2);
v___x_70_ = l_Lean_Expr_isConstOf(v___x_68_, v___x_69_);
lean_dec_ref(v___x_68_);
v___x_71_ = lean_box(v___x_70_);
if (v_isShared_67_ == 0)
{
lean_ctor_set(v___x_66_, 0, v___x_71_);
v___x_73_ = v___x_66_;
goto v_reusejp_72_;
}
else
{
lean_object* v_reuseFailAlloc_74_; 
v_reuseFailAlloc_74_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_74_, 0, v___x_71_);
v___x_73_ = v_reuseFailAlloc_74_;
goto v_reusejp_72_;
}
v_reusejp_72_:
{
return v___x_73_;
}
}
}
else
{
lean_object* v_a_76_; lean_object* v___x_78_; uint8_t v_isShared_79_; uint8_t v_isSharedCheck_83_; 
v_a_76_ = lean_ctor_get(v___x_63_, 0);
v_isSharedCheck_83_ = !lean_is_exclusive(v___x_63_);
if (v_isSharedCheck_83_ == 0)
{
v___x_78_ = v___x_63_;
v_isShared_79_ = v_isSharedCheck_83_;
goto v_resetjp_77_;
}
else
{
lean_inc(v_a_76_);
lean_dec(v___x_63_);
v___x_78_ = lean_box(0);
v_isShared_79_ = v_isSharedCheck_83_;
goto v_resetjp_77_;
}
v_resetjp_77_:
{
lean_object* v___x_81_; 
if (v_isShared_79_ == 0)
{
v___x_81_ = v___x_78_;
goto v_reusejp_80_;
}
else
{
lean_object* v_reuseFailAlloc_82_; 
v_reuseFailAlloc_82_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_82_, 0, v_a_76_);
v___x_81_ = v_reuseFailAlloc_82_;
goto v_reusejp_80_;
}
v_reusejp_80_:
{
return v___x_81_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstNegInt___redArg___boxed(lean_object* v_e_84_, lean_object* v_a_85_, lean_object* v_a_86_, lean_object* v_a_87_){
_start:
{
lean_object* v_res_88_; 
v_res_88_ = l_Lean_Meta_Structural_isInstNegInt___redArg(v_e_84_, v_a_85_, v_a_86_);
lean_dec(v_a_86_);
lean_dec(v_a_85_);
return v_res_88_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstNegInt(lean_object* v_e_89_, lean_object* v_a_90_, lean_object* v_a_91_, lean_object* v_a_92_, lean_object* v_a_93_){
_start:
{
lean_object* v___x_95_; 
v___x_95_ = l_Lean_Meta_Structural_isInstNegInt___redArg(v_e_89_, v_a_91_, v_a_93_);
return v___x_95_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstNegInt___boxed(lean_object* v_e_96_, lean_object* v_a_97_, lean_object* v_a_98_, lean_object* v_a_99_, lean_object* v_a_100_, lean_object* v_a_101_){
_start:
{
lean_object* v_res_102_; 
v_res_102_ = l_Lean_Meta_Structural_isInstNegInt(v_e_96_, v_a_97_, v_a_98_, v_a_99_, v_a_100_);
lean_dec(v_a_100_);
lean_dec_ref(v_a_99_);
lean_dec(v_a_98_);
lean_dec_ref(v_a_97_);
return v_res_102_;
}
}
static lean_object* _init_l_Lean_Meta_Structural_isInstAddInt___redArg___closed__0(void){
_start:
{
lean_object* v___x_103_; 
v___x_103_ = lean_mk_string_unchecked("instAdd", 7, 7);
return v___x_103_;
}
}
static lean_object* _init_l_Lean_Meta_Structural_isInstAddInt___redArg___closed__1(void){
_start:
{
lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; 
v___x_104_ = lean_obj_once(&l_Lean_Meta_Structural_isInstAddInt___redArg___closed__0, &l_Lean_Meta_Structural_isInstAddInt___redArg___closed__0_once, _init_l_Lean_Meta_Structural_isInstAddInt___redArg___closed__0);
v___x_105_ = lean_obj_once(&l_Lean_Meta_Structural_isInstNegInt___redArg___closed__0, &l_Lean_Meta_Structural_isInstNegInt___redArg___closed__0_once, _init_l_Lean_Meta_Structural_isInstNegInt___redArg___closed__0);
v___x_106_ = l_Lean_Name_mkStr2(v___x_105_, v___x_104_);
return v___x_106_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstAddInt___redArg(lean_object* v_e_107_, lean_object* v_a_108_, lean_object* v_a_109_){
_start:
{
lean_object* v___x_111_; 
v___x_111_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_107_, v_a_108_, v_a_109_);
if (lean_obj_tag(v___x_111_) == 0)
{
lean_object* v_a_112_; lean_object* v___x_114_; uint8_t v_isShared_115_; uint8_t v_isSharedCheck_123_; 
v_a_112_ = lean_ctor_get(v___x_111_, 0);
v_isSharedCheck_123_ = !lean_is_exclusive(v___x_111_);
if (v_isSharedCheck_123_ == 0)
{
v___x_114_ = v___x_111_;
v_isShared_115_ = v_isSharedCheck_123_;
goto v_resetjp_113_;
}
else
{
lean_inc(v_a_112_);
lean_dec(v___x_111_);
v___x_114_ = lean_box(0);
v_isShared_115_ = v_isSharedCheck_123_;
goto v_resetjp_113_;
}
v_resetjp_113_:
{
lean_object* v___x_116_; lean_object* v___x_117_; uint8_t v___x_118_; lean_object* v___x_119_; lean_object* v___x_121_; 
v___x_116_ = l_Lean_Expr_cleanupAnnotations(v_a_112_);
v___x_117_ = lean_obj_once(&l_Lean_Meta_Structural_isInstAddInt___redArg___closed__1, &l_Lean_Meta_Structural_isInstAddInt___redArg___closed__1_once, _init_l_Lean_Meta_Structural_isInstAddInt___redArg___closed__1);
v___x_118_ = l_Lean_Expr_isConstOf(v___x_116_, v___x_117_);
lean_dec_ref(v___x_116_);
v___x_119_ = lean_box(v___x_118_);
if (v_isShared_115_ == 0)
{
lean_ctor_set(v___x_114_, 0, v___x_119_);
v___x_121_ = v___x_114_;
goto v_reusejp_120_;
}
else
{
lean_object* v_reuseFailAlloc_122_; 
v_reuseFailAlloc_122_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_122_, 0, v___x_119_);
v___x_121_ = v_reuseFailAlloc_122_;
goto v_reusejp_120_;
}
v_reusejp_120_:
{
return v___x_121_;
}
}
}
else
{
lean_object* v_a_124_; lean_object* v___x_126_; uint8_t v_isShared_127_; uint8_t v_isSharedCheck_131_; 
v_a_124_ = lean_ctor_get(v___x_111_, 0);
v_isSharedCheck_131_ = !lean_is_exclusive(v___x_111_);
if (v_isSharedCheck_131_ == 0)
{
v___x_126_ = v___x_111_;
v_isShared_127_ = v_isSharedCheck_131_;
goto v_resetjp_125_;
}
else
{
lean_inc(v_a_124_);
lean_dec(v___x_111_);
v___x_126_ = lean_box(0);
v_isShared_127_ = v_isSharedCheck_131_;
goto v_resetjp_125_;
}
v_resetjp_125_:
{
lean_object* v___x_129_; 
if (v_isShared_127_ == 0)
{
v___x_129_ = v___x_126_;
goto v_reusejp_128_;
}
else
{
lean_object* v_reuseFailAlloc_130_; 
v_reuseFailAlloc_130_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_130_, 0, v_a_124_);
v___x_129_ = v_reuseFailAlloc_130_;
goto v_reusejp_128_;
}
v_reusejp_128_:
{
return v___x_129_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstAddInt___redArg___boxed(lean_object* v_e_132_, lean_object* v_a_133_, lean_object* v_a_134_, lean_object* v_a_135_){
_start:
{
lean_object* v_res_136_; 
v_res_136_ = l_Lean_Meta_Structural_isInstAddInt___redArg(v_e_132_, v_a_133_, v_a_134_);
lean_dec(v_a_134_);
lean_dec(v_a_133_);
return v_res_136_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstAddInt(lean_object* v_e_137_, lean_object* v_a_138_, lean_object* v_a_139_, lean_object* v_a_140_, lean_object* v_a_141_){
_start:
{
lean_object* v___x_143_; 
v___x_143_ = l_Lean_Meta_Structural_isInstAddInt___redArg(v_e_137_, v_a_139_, v_a_141_);
return v___x_143_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstAddInt___boxed(lean_object* v_e_144_, lean_object* v_a_145_, lean_object* v_a_146_, lean_object* v_a_147_, lean_object* v_a_148_, lean_object* v_a_149_){
_start:
{
lean_object* v_res_150_; 
v_res_150_ = l_Lean_Meta_Structural_isInstAddInt(v_e_144_, v_a_145_, v_a_146_, v_a_147_, v_a_148_);
lean_dec(v_a_148_);
lean_dec_ref(v_a_147_);
lean_dec(v_a_146_);
lean_dec_ref(v_a_145_);
return v_res_150_;
}
}
static lean_object* _init_l_Lean_Meta_Structural_isInstSubInt___redArg___closed__0(void){
_start:
{
lean_object* v___x_151_; 
v___x_151_ = lean_mk_string_unchecked("instSub", 7, 7);
return v___x_151_;
}
}
static lean_object* _init_l_Lean_Meta_Structural_isInstSubInt___redArg___closed__1(void){
_start:
{
lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; 
v___x_152_ = lean_obj_once(&l_Lean_Meta_Structural_isInstSubInt___redArg___closed__0, &l_Lean_Meta_Structural_isInstSubInt___redArg___closed__0_once, _init_l_Lean_Meta_Structural_isInstSubInt___redArg___closed__0);
v___x_153_ = lean_obj_once(&l_Lean_Meta_Structural_isInstNegInt___redArg___closed__0, &l_Lean_Meta_Structural_isInstNegInt___redArg___closed__0_once, _init_l_Lean_Meta_Structural_isInstNegInt___redArg___closed__0);
v___x_154_ = l_Lean_Name_mkStr2(v___x_153_, v___x_152_);
return v___x_154_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstSubInt___redArg(lean_object* v_e_155_, lean_object* v_a_156_, lean_object* v_a_157_){
_start:
{
lean_object* v___x_159_; 
v___x_159_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_155_, v_a_156_, v_a_157_);
if (lean_obj_tag(v___x_159_) == 0)
{
lean_object* v_a_160_; lean_object* v___x_162_; uint8_t v_isShared_163_; uint8_t v_isSharedCheck_171_; 
v_a_160_ = lean_ctor_get(v___x_159_, 0);
v_isSharedCheck_171_ = !lean_is_exclusive(v___x_159_);
if (v_isSharedCheck_171_ == 0)
{
v___x_162_ = v___x_159_;
v_isShared_163_ = v_isSharedCheck_171_;
goto v_resetjp_161_;
}
else
{
lean_inc(v_a_160_);
lean_dec(v___x_159_);
v___x_162_ = lean_box(0);
v_isShared_163_ = v_isSharedCheck_171_;
goto v_resetjp_161_;
}
v_resetjp_161_:
{
lean_object* v___x_164_; lean_object* v___x_165_; uint8_t v___x_166_; lean_object* v___x_167_; lean_object* v___x_169_; 
v___x_164_ = l_Lean_Expr_cleanupAnnotations(v_a_160_);
v___x_165_ = lean_obj_once(&l_Lean_Meta_Structural_isInstSubInt___redArg___closed__1, &l_Lean_Meta_Structural_isInstSubInt___redArg___closed__1_once, _init_l_Lean_Meta_Structural_isInstSubInt___redArg___closed__1);
v___x_166_ = l_Lean_Expr_isConstOf(v___x_164_, v___x_165_);
lean_dec_ref(v___x_164_);
v___x_167_ = lean_box(v___x_166_);
if (v_isShared_163_ == 0)
{
lean_ctor_set(v___x_162_, 0, v___x_167_);
v___x_169_ = v___x_162_;
goto v_reusejp_168_;
}
else
{
lean_object* v_reuseFailAlloc_170_; 
v_reuseFailAlloc_170_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_170_, 0, v___x_167_);
v___x_169_ = v_reuseFailAlloc_170_;
goto v_reusejp_168_;
}
v_reusejp_168_:
{
return v___x_169_;
}
}
}
else
{
lean_object* v_a_172_; lean_object* v___x_174_; uint8_t v_isShared_175_; uint8_t v_isSharedCheck_179_; 
v_a_172_ = lean_ctor_get(v___x_159_, 0);
v_isSharedCheck_179_ = !lean_is_exclusive(v___x_159_);
if (v_isSharedCheck_179_ == 0)
{
v___x_174_ = v___x_159_;
v_isShared_175_ = v_isSharedCheck_179_;
goto v_resetjp_173_;
}
else
{
lean_inc(v_a_172_);
lean_dec(v___x_159_);
v___x_174_ = lean_box(0);
v_isShared_175_ = v_isSharedCheck_179_;
goto v_resetjp_173_;
}
v_resetjp_173_:
{
lean_object* v___x_177_; 
if (v_isShared_175_ == 0)
{
v___x_177_ = v___x_174_;
goto v_reusejp_176_;
}
else
{
lean_object* v_reuseFailAlloc_178_; 
v_reuseFailAlloc_178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_178_, 0, v_a_172_);
v___x_177_ = v_reuseFailAlloc_178_;
goto v_reusejp_176_;
}
v_reusejp_176_:
{
return v___x_177_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstSubInt___redArg___boxed(lean_object* v_e_180_, lean_object* v_a_181_, lean_object* v_a_182_, lean_object* v_a_183_){
_start:
{
lean_object* v_res_184_; 
v_res_184_ = l_Lean_Meta_Structural_isInstSubInt___redArg(v_e_180_, v_a_181_, v_a_182_);
lean_dec(v_a_182_);
lean_dec(v_a_181_);
return v_res_184_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstSubInt(lean_object* v_e_185_, lean_object* v_a_186_, lean_object* v_a_187_, lean_object* v_a_188_, lean_object* v_a_189_){
_start:
{
lean_object* v___x_191_; 
v___x_191_ = l_Lean_Meta_Structural_isInstSubInt___redArg(v_e_185_, v_a_187_, v_a_189_);
return v___x_191_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstSubInt___boxed(lean_object* v_e_192_, lean_object* v_a_193_, lean_object* v_a_194_, lean_object* v_a_195_, lean_object* v_a_196_, lean_object* v_a_197_){
_start:
{
lean_object* v_res_198_; 
v_res_198_ = l_Lean_Meta_Structural_isInstSubInt(v_e_192_, v_a_193_, v_a_194_, v_a_195_, v_a_196_);
lean_dec(v_a_196_);
lean_dec_ref(v_a_195_);
lean_dec(v_a_194_);
lean_dec_ref(v_a_193_);
return v_res_198_;
}
}
static lean_object* _init_l_Lean_Meta_Structural_isInstMulInt___redArg___closed__0(void){
_start:
{
lean_object* v___x_199_; 
v___x_199_ = lean_mk_string_unchecked("instMul", 7, 7);
return v___x_199_;
}
}
static lean_object* _init_l_Lean_Meta_Structural_isInstMulInt___redArg___closed__1(void){
_start:
{
lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; 
v___x_200_ = lean_obj_once(&l_Lean_Meta_Structural_isInstMulInt___redArg___closed__0, &l_Lean_Meta_Structural_isInstMulInt___redArg___closed__0_once, _init_l_Lean_Meta_Structural_isInstMulInt___redArg___closed__0);
v___x_201_ = lean_obj_once(&l_Lean_Meta_Structural_isInstNegInt___redArg___closed__0, &l_Lean_Meta_Structural_isInstNegInt___redArg___closed__0_once, _init_l_Lean_Meta_Structural_isInstNegInt___redArg___closed__0);
v___x_202_ = l_Lean_Name_mkStr2(v___x_201_, v___x_200_);
return v___x_202_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstMulInt___redArg(lean_object* v_e_203_, lean_object* v_a_204_, lean_object* v_a_205_){
_start:
{
lean_object* v___x_207_; 
v___x_207_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_203_, v_a_204_, v_a_205_);
if (lean_obj_tag(v___x_207_) == 0)
{
lean_object* v_a_208_; lean_object* v___x_210_; uint8_t v_isShared_211_; uint8_t v_isSharedCheck_219_; 
v_a_208_ = lean_ctor_get(v___x_207_, 0);
v_isSharedCheck_219_ = !lean_is_exclusive(v___x_207_);
if (v_isSharedCheck_219_ == 0)
{
v___x_210_ = v___x_207_;
v_isShared_211_ = v_isSharedCheck_219_;
goto v_resetjp_209_;
}
else
{
lean_inc(v_a_208_);
lean_dec(v___x_207_);
v___x_210_ = lean_box(0);
v_isShared_211_ = v_isSharedCheck_219_;
goto v_resetjp_209_;
}
v_resetjp_209_:
{
lean_object* v___x_212_; lean_object* v___x_213_; uint8_t v___x_214_; lean_object* v___x_215_; lean_object* v___x_217_; 
v___x_212_ = l_Lean_Expr_cleanupAnnotations(v_a_208_);
v___x_213_ = lean_obj_once(&l_Lean_Meta_Structural_isInstMulInt___redArg___closed__1, &l_Lean_Meta_Structural_isInstMulInt___redArg___closed__1_once, _init_l_Lean_Meta_Structural_isInstMulInt___redArg___closed__1);
v___x_214_ = l_Lean_Expr_isConstOf(v___x_212_, v___x_213_);
lean_dec_ref(v___x_212_);
v___x_215_ = lean_box(v___x_214_);
if (v_isShared_211_ == 0)
{
lean_ctor_set(v___x_210_, 0, v___x_215_);
v___x_217_ = v___x_210_;
goto v_reusejp_216_;
}
else
{
lean_object* v_reuseFailAlloc_218_; 
v_reuseFailAlloc_218_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_218_, 0, v___x_215_);
v___x_217_ = v_reuseFailAlloc_218_;
goto v_reusejp_216_;
}
v_reusejp_216_:
{
return v___x_217_;
}
}
}
else
{
lean_object* v_a_220_; lean_object* v___x_222_; uint8_t v_isShared_223_; uint8_t v_isSharedCheck_227_; 
v_a_220_ = lean_ctor_get(v___x_207_, 0);
v_isSharedCheck_227_ = !lean_is_exclusive(v___x_207_);
if (v_isSharedCheck_227_ == 0)
{
v___x_222_ = v___x_207_;
v_isShared_223_ = v_isSharedCheck_227_;
goto v_resetjp_221_;
}
else
{
lean_inc(v_a_220_);
lean_dec(v___x_207_);
v___x_222_ = lean_box(0);
v_isShared_223_ = v_isSharedCheck_227_;
goto v_resetjp_221_;
}
v_resetjp_221_:
{
lean_object* v___x_225_; 
if (v_isShared_223_ == 0)
{
v___x_225_ = v___x_222_;
goto v_reusejp_224_;
}
else
{
lean_object* v_reuseFailAlloc_226_; 
v_reuseFailAlloc_226_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_226_, 0, v_a_220_);
v___x_225_ = v_reuseFailAlloc_226_;
goto v_reusejp_224_;
}
v_reusejp_224_:
{
return v___x_225_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstMulInt___redArg___boxed(lean_object* v_e_228_, lean_object* v_a_229_, lean_object* v_a_230_, lean_object* v_a_231_){
_start:
{
lean_object* v_res_232_; 
v_res_232_ = l_Lean_Meta_Structural_isInstMulInt___redArg(v_e_228_, v_a_229_, v_a_230_);
lean_dec(v_a_230_);
lean_dec(v_a_229_);
return v_res_232_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstMulInt(lean_object* v_e_233_, lean_object* v_a_234_, lean_object* v_a_235_, lean_object* v_a_236_, lean_object* v_a_237_){
_start:
{
lean_object* v___x_239_; 
v___x_239_ = l_Lean_Meta_Structural_isInstMulInt___redArg(v_e_233_, v_a_235_, v_a_237_);
return v___x_239_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstMulInt___boxed(lean_object* v_e_240_, lean_object* v_a_241_, lean_object* v_a_242_, lean_object* v_a_243_, lean_object* v_a_244_, lean_object* v_a_245_){
_start:
{
lean_object* v_res_246_; 
v_res_246_ = l_Lean_Meta_Structural_isInstMulInt(v_e_240_, v_a_241_, v_a_242_, v_a_243_, v_a_244_);
lean_dec(v_a_244_);
lean_dec_ref(v_a_243_);
lean_dec(v_a_242_);
lean_dec_ref(v_a_241_);
return v_res_246_;
}
}
static lean_object* _init_l_Lean_Meta_Structural_isInstDivInt___redArg___closed__0(void){
_start:
{
lean_object* v___x_247_; 
v___x_247_ = lean_mk_string_unchecked("instDiv", 7, 7);
return v___x_247_;
}
}
static lean_object* _init_l_Lean_Meta_Structural_isInstDivInt___redArg___closed__1(void){
_start:
{
lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; 
v___x_248_ = lean_obj_once(&l_Lean_Meta_Structural_isInstDivInt___redArg___closed__0, &l_Lean_Meta_Structural_isInstDivInt___redArg___closed__0_once, _init_l_Lean_Meta_Structural_isInstDivInt___redArg___closed__0);
v___x_249_ = lean_obj_once(&l_Lean_Meta_Structural_isInstNegInt___redArg___closed__0, &l_Lean_Meta_Structural_isInstNegInt___redArg___closed__0_once, _init_l_Lean_Meta_Structural_isInstNegInt___redArg___closed__0);
v___x_250_ = l_Lean_Name_mkStr2(v___x_249_, v___x_248_);
return v___x_250_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstDivInt___redArg(lean_object* v_e_251_, lean_object* v_a_252_, lean_object* v_a_253_){
_start:
{
lean_object* v___x_255_; 
v___x_255_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_251_, v_a_252_, v_a_253_);
if (lean_obj_tag(v___x_255_) == 0)
{
lean_object* v_a_256_; lean_object* v___x_258_; uint8_t v_isShared_259_; uint8_t v_isSharedCheck_267_; 
v_a_256_ = lean_ctor_get(v___x_255_, 0);
v_isSharedCheck_267_ = !lean_is_exclusive(v___x_255_);
if (v_isSharedCheck_267_ == 0)
{
v___x_258_ = v___x_255_;
v_isShared_259_ = v_isSharedCheck_267_;
goto v_resetjp_257_;
}
else
{
lean_inc(v_a_256_);
lean_dec(v___x_255_);
v___x_258_ = lean_box(0);
v_isShared_259_ = v_isSharedCheck_267_;
goto v_resetjp_257_;
}
v_resetjp_257_:
{
lean_object* v___x_260_; lean_object* v___x_261_; uint8_t v___x_262_; lean_object* v___x_263_; lean_object* v___x_265_; 
v___x_260_ = l_Lean_Expr_cleanupAnnotations(v_a_256_);
v___x_261_ = lean_obj_once(&l_Lean_Meta_Structural_isInstDivInt___redArg___closed__1, &l_Lean_Meta_Structural_isInstDivInt___redArg___closed__1_once, _init_l_Lean_Meta_Structural_isInstDivInt___redArg___closed__1);
v___x_262_ = l_Lean_Expr_isConstOf(v___x_260_, v___x_261_);
lean_dec_ref(v___x_260_);
v___x_263_ = lean_box(v___x_262_);
if (v_isShared_259_ == 0)
{
lean_ctor_set(v___x_258_, 0, v___x_263_);
v___x_265_ = v___x_258_;
goto v_reusejp_264_;
}
else
{
lean_object* v_reuseFailAlloc_266_; 
v_reuseFailAlloc_266_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_266_, 0, v___x_263_);
v___x_265_ = v_reuseFailAlloc_266_;
goto v_reusejp_264_;
}
v_reusejp_264_:
{
return v___x_265_;
}
}
}
else
{
lean_object* v_a_268_; lean_object* v___x_270_; uint8_t v_isShared_271_; uint8_t v_isSharedCheck_275_; 
v_a_268_ = lean_ctor_get(v___x_255_, 0);
v_isSharedCheck_275_ = !lean_is_exclusive(v___x_255_);
if (v_isSharedCheck_275_ == 0)
{
v___x_270_ = v___x_255_;
v_isShared_271_ = v_isSharedCheck_275_;
goto v_resetjp_269_;
}
else
{
lean_inc(v_a_268_);
lean_dec(v___x_255_);
v___x_270_ = lean_box(0);
v_isShared_271_ = v_isSharedCheck_275_;
goto v_resetjp_269_;
}
v_resetjp_269_:
{
lean_object* v___x_273_; 
if (v_isShared_271_ == 0)
{
v___x_273_ = v___x_270_;
goto v_reusejp_272_;
}
else
{
lean_object* v_reuseFailAlloc_274_; 
v_reuseFailAlloc_274_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_274_, 0, v_a_268_);
v___x_273_ = v_reuseFailAlloc_274_;
goto v_reusejp_272_;
}
v_reusejp_272_:
{
return v___x_273_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstDivInt___redArg___boxed(lean_object* v_e_276_, lean_object* v_a_277_, lean_object* v_a_278_, lean_object* v_a_279_){
_start:
{
lean_object* v_res_280_; 
v_res_280_ = l_Lean_Meta_Structural_isInstDivInt___redArg(v_e_276_, v_a_277_, v_a_278_);
lean_dec(v_a_278_);
lean_dec(v_a_277_);
return v_res_280_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstDivInt(lean_object* v_e_281_, lean_object* v_a_282_, lean_object* v_a_283_, lean_object* v_a_284_, lean_object* v_a_285_){
_start:
{
lean_object* v___x_287_; 
v___x_287_ = l_Lean_Meta_Structural_isInstDivInt___redArg(v_e_281_, v_a_283_, v_a_285_);
return v___x_287_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstDivInt___boxed(lean_object* v_e_288_, lean_object* v_a_289_, lean_object* v_a_290_, lean_object* v_a_291_, lean_object* v_a_292_, lean_object* v_a_293_){
_start:
{
lean_object* v_res_294_; 
v_res_294_ = l_Lean_Meta_Structural_isInstDivInt(v_e_288_, v_a_289_, v_a_290_, v_a_291_, v_a_292_);
lean_dec(v_a_292_);
lean_dec_ref(v_a_291_);
lean_dec(v_a_290_);
lean_dec_ref(v_a_289_);
return v_res_294_;
}
}
static lean_object* _init_l_Lean_Meta_Structural_isInstModInt___redArg___closed__0(void){
_start:
{
lean_object* v___x_295_; 
v___x_295_ = lean_mk_string_unchecked("instMod", 7, 7);
return v___x_295_;
}
}
static lean_object* _init_l_Lean_Meta_Structural_isInstModInt___redArg___closed__1(void){
_start:
{
lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; 
v___x_296_ = lean_obj_once(&l_Lean_Meta_Structural_isInstModInt___redArg___closed__0, &l_Lean_Meta_Structural_isInstModInt___redArg___closed__0_once, _init_l_Lean_Meta_Structural_isInstModInt___redArg___closed__0);
v___x_297_ = lean_obj_once(&l_Lean_Meta_Structural_isInstNegInt___redArg___closed__0, &l_Lean_Meta_Structural_isInstNegInt___redArg___closed__0_once, _init_l_Lean_Meta_Structural_isInstNegInt___redArg___closed__0);
v___x_298_ = l_Lean_Name_mkStr2(v___x_297_, v___x_296_);
return v___x_298_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstModInt___redArg(lean_object* v_e_299_, lean_object* v_a_300_, lean_object* v_a_301_){
_start:
{
lean_object* v___x_303_; 
v___x_303_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_299_, v_a_300_, v_a_301_);
if (lean_obj_tag(v___x_303_) == 0)
{
lean_object* v_a_304_; lean_object* v___x_306_; uint8_t v_isShared_307_; uint8_t v_isSharedCheck_315_; 
v_a_304_ = lean_ctor_get(v___x_303_, 0);
v_isSharedCheck_315_ = !lean_is_exclusive(v___x_303_);
if (v_isSharedCheck_315_ == 0)
{
v___x_306_ = v___x_303_;
v_isShared_307_ = v_isSharedCheck_315_;
goto v_resetjp_305_;
}
else
{
lean_inc(v_a_304_);
lean_dec(v___x_303_);
v___x_306_ = lean_box(0);
v_isShared_307_ = v_isSharedCheck_315_;
goto v_resetjp_305_;
}
v_resetjp_305_:
{
lean_object* v___x_308_; lean_object* v___x_309_; uint8_t v___x_310_; lean_object* v___x_311_; lean_object* v___x_313_; 
v___x_308_ = l_Lean_Expr_cleanupAnnotations(v_a_304_);
v___x_309_ = lean_obj_once(&l_Lean_Meta_Structural_isInstModInt___redArg___closed__1, &l_Lean_Meta_Structural_isInstModInt___redArg___closed__1_once, _init_l_Lean_Meta_Structural_isInstModInt___redArg___closed__1);
v___x_310_ = l_Lean_Expr_isConstOf(v___x_308_, v___x_309_);
lean_dec_ref(v___x_308_);
v___x_311_ = lean_box(v___x_310_);
if (v_isShared_307_ == 0)
{
lean_ctor_set(v___x_306_, 0, v___x_311_);
v___x_313_ = v___x_306_;
goto v_reusejp_312_;
}
else
{
lean_object* v_reuseFailAlloc_314_; 
v_reuseFailAlloc_314_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_314_, 0, v___x_311_);
v___x_313_ = v_reuseFailAlloc_314_;
goto v_reusejp_312_;
}
v_reusejp_312_:
{
return v___x_313_;
}
}
}
else
{
lean_object* v_a_316_; lean_object* v___x_318_; uint8_t v_isShared_319_; uint8_t v_isSharedCheck_323_; 
v_a_316_ = lean_ctor_get(v___x_303_, 0);
v_isSharedCheck_323_ = !lean_is_exclusive(v___x_303_);
if (v_isSharedCheck_323_ == 0)
{
v___x_318_ = v___x_303_;
v_isShared_319_ = v_isSharedCheck_323_;
goto v_resetjp_317_;
}
else
{
lean_inc(v_a_316_);
lean_dec(v___x_303_);
v___x_318_ = lean_box(0);
v_isShared_319_ = v_isSharedCheck_323_;
goto v_resetjp_317_;
}
v_resetjp_317_:
{
lean_object* v___x_321_; 
if (v_isShared_319_ == 0)
{
v___x_321_ = v___x_318_;
goto v_reusejp_320_;
}
else
{
lean_object* v_reuseFailAlloc_322_; 
v_reuseFailAlloc_322_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_322_, 0, v_a_316_);
v___x_321_ = v_reuseFailAlloc_322_;
goto v_reusejp_320_;
}
v_reusejp_320_:
{
return v___x_321_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstModInt___redArg___boxed(lean_object* v_e_324_, lean_object* v_a_325_, lean_object* v_a_326_, lean_object* v_a_327_){
_start:
{
lean_object* v_res_328_; 
v_res_328_ = l_Lean_Meta_Structural_isInstModInt___redArg(v_e_324_, v_a_325_, v_a_326_);
lean_dec(v_a_326_);
lean_dec(v_a_325_);
return v_res_328_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstModInt(lean_object* v_e_329_, lean_object* v_a_330_, lean_object* v_a_331_, lean_object* v_a_332_, lean_object* v_a_333_){
_start:
{
lean_object* v___x_335_; 
v___x_335_ = l_Lean_Meta_Structural_isInstModInt___redArg(v_e_329_, v_a_331_, v_a_333_);
return v___x_335_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstModInt___boxed(lean_object* v_e_336_, lean_object* v_a_337_, lean_object* v_a_338_, lean_object* v_a_339_, lean_object* v_a_340_, lean_object* v_a_341_){
_start:
{
lean_object* v_res_342_; 
v_res_342_ = l_Lean_Meta_Structural_isInstModInt(v_e_336_, v_a_337_, v_a_338_, v_a_339_, v_a_340_);
lean_dec(v_a_340_);
lean_dec_ref(v_a_339_);
lean_dec(v_a_338_);
lean_dec_ref(v_a_337_);
return v_res_342_;
}
}
static lean_object* _init_l_Lean_Meta_Structural_isInstDvdInt___redArg___closed__0(void){
_start:
{
lean_object* v___x_343_; 
v___x_343_ = lean_mk_string_unchecked("instDvd", 7, 7);
return v___x_343_;
}
}
static lean_object* _init_l_Lean_Meta_Structural_isInstDvdInt___redArg___closed__1(void){
_start:
{
lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; 
v___x_344_ = lean_obj_once(&l_Lean_Meta_Structural_isInstDvdInt___redArg___closed__0, &l_Lean_Meta_Structural_isInstDvdInt___redArg___closed__0_once, _init_l_Lean_Meta_Structural_isInstDvdInt___redArg___closed__0);
v___x_345_ = lean_obj_once(&l_Lean_Meta_Structural_isInstNegInt___redArg___closed__0, &l_Lean_Meta_Structural_isInstNegInt___redArg___closed__0_once, _init_l_Lean_Meta_Structural_isInstNegInt___redArg___closed__0);
v___x_346_ = l_Lean_Name_mkStr2(v___x_345_, v___x_344_);
return v___x_346_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstDvdInt___redArg(lean_object* v_e_347_, lean_object* v_a_348_, lean_object* v_a_349_){
_start:
{
lean_object* v___x_351_; 
v___x_351_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_347_, v_a_348_, v_a_349_);
if (lean_obj_tag(v___x_351_) == 0)
{
lean_object* v_a_352_; lean_object* v___x_354_; uint8_t v_isShared_355_; uint8_t v_isSharedCheck_363_; 
v_a_352_ = lean_ctor_get(v___x_351_, 0);
v_isSharedCheck_363_ = !lean_is_exclusive(v___x_351_);
if (v_isSharedCheck_363_ == 0)
{
v___x_354_ = v___x_351_;
v_isShared_355_ = v_isSharedCheck_363_;
goto v_resetjp_353_;
}
else
{
lean_inc(v_a_352_);
lean_dec(v___x_351_);
v___x_354_ = lean_box(0);
v_isShared_355_ = v_isSharedCheck_363_;
goto v_resetjp_353_;
}
v_resetjp_353_:
{
lean_object* v___x_356_; lean_object* v___x_357_; uint8_t v___x_358_; lean_object* v___x_359_; lean_object* v___x_361_; 
v___x_356_ = l_Lean_Expr_cleanupAnnotations(v_a_352_);
v___x_357_ = lean_obj_once(&l_Lean_Meta_Structural_isInstDvdInt___redArg___closed__1, &l_Lean_Meta_Structural_isInstDvdInt___redArg___closed__1_once, _init_l_Lean_Meta_Structural_isInstDvdInt___redArg___closed__1);
v___x_358_ = l_Lean_Expr_isConstOf(v___x_356_, v___x_357_);
lean_dec_ref(v___x_356_);
v___x_359_ = lean_box(v___x_358_);
if (v_isShared_355_ == 0)
{
lean_ctor_set(v___x_354_, 0, v___x_359_);
v___x_361_ = v___x_354_;
goto v_reusejp_360_;
}
else
{
lean_object* v_reuseFailAlloc_362_; 
v_reuseFailAlloc_362_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_362_, 0, v___x_359_);
v___x_361_ = v_reuseFailAlloc_362_;
goto v_reusejp_360_;
}
v_reusejp_360_:
{
return v___x_361_;
}
}
}
else
{
lean_object* v_a_364_; lean_object* v___x_366_; uint8_t v_isShared_367_; uint8_t v_isSharedCheck_371_; 
v_a_364_ = lean_ctor_get(v___x_351_, 0);
v_isSharedCheck_371_ = !lean_is_exclusive(v___x_351_);
if (v_isSharedCheck_371_ == 0)
{
v___x_366_ = v___x_351_;
v_isShared_367_ = v_isSharedCheck_371_;
goto v_resetjp_365_;
}
else
{
lean_inc(v_a_364_);
lean_dec(v___x_351_);
v___x_366_ = lean_box(0);
v_isShared_367_ = v_isSharedCheck_371_;
goto v_resetjp_365_;
}
v_resetjp_365_:
{
lean_object* v___x_369_; 
if (v_isShared_367_ == 0)
{
v___x_369_ = v___x_366_;
goto v_reusejp_368_;
}
else
{
lean_object* v_reuseFailAlloc_370_; 
v_reuseFailAlloc_370_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_370_, 0, v_a_364_);
v___x_369_ = v_reuseFailAlloc_370_;
goto v_reusejp_368_;
}
v_reusejp_368_:
{
return v___x_369_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstDvdInt___redArg___boxed(lean_object* v_e_372_, lean_object* v_a_373_, lean_object* v_a_374_, lean_object* v_a_375_){
_start:
{
lean_object* v_res_376_; 
v_res_376_ = l_Lean_Meta_Structural_isInstDvdInt___redArg(v_e_372_, v_a_373_, v_a_374_);
lean_dec(v_a_374_);
lean_dec(v_a_373_);
return v_res_376_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstDvdInt(lean_object* v_e_377_, lean_object* v_a_378_, lean_object* v_a_379_, lean_object* v_a_380_, lean_object* v_a_381_){
_start:
{
lean_object* v___x_383_; 
v___x_383_ = l_Lean_Meta_Structural_isInstDvdInt___redArg(v_e_377_, v_a_379_, v_a_381_);
return v___x_383_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstDvdInt___boxed(lean_object* v_e_384_, lean_object* v_a_385_, lean_object* v_a_386_, lean_object* v_a_387_, lean_object* v_a_388_, lean_object* v_a_389_){
_start:
{
lean_object* v_res_390_; 
v_res_390_ = l_Lean_Meta_Structural_isInstDvdInt(v_e_384_, v_a_385_, v_a_386_, v_a_387_, v_a_388_);
lean_dec(v_a_388_);
lean_dec_ref(v_a_387_);
lean_dec(v_a_386_);
lean_dec_ref(v_a_385_);
return v_res_390_;
}
}
static lean_object* _init_l_Lean_Meta_Structural_isInstHAddInt___redArg___closed__0(void){
_start:
{
lean_object* v___x_391_; 
v___x_391_ = lean_mk_string_unchecked("instHAdd", 8, 8);
return v___x_391_;
}
}
static lean_object* _init_l_Lean_Meta_Structural_isInstHAddInt___redArg___closed__1(void){
_start:
{
lean_object* v___x_392_; lean_object* v___x_393_; 
v___x_392_ = lean_obj_once(&l_Lean_Meta_Structural_isInstHAddInt___redArg___closed__0, &l_Lean_Meta_Structural_isInstHAddInt___redArg___closed__0_once, _init_l_Lean_Meta_Structural_isInstHAddInt___redArg___closed__0);
v___x_393_ = l_Lean_Name_mkStr1(v___x_392_);
return v___x_393_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHAddInt___redArg(lean_object* v_e_394_, lean_object* v_a_395_, lean_object* v_a_396_){
_start:
{
lean_object* v___x_398_; 
v___x_398_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_394_, v_a_395_, v_a_396_);
if (lean_obj_tag(v___x_398_) == 0)
{
lean_object* v_a_399_; lean_object* v___x_401_; uint8_t v_isShared_402_; uint8_t v_isSharedCheck_418_; 
v_a_399_ = lean_ctor_get(v___x_398_, 0);
v_isSharedCheck_418_ = !lean_is_exclusive(v___x_398_);
if (v_isSharedCheck_418_ == 0)
{
v___x_401_ = v___x_398_;
v_isShared_402_ = v_isSharedCheck_418_;
goto v_resetjp_400_;
}
else
{
lean_inc(v_a_399_);
lean_dec(v___x_398_);
v___x_401_ = lean_box(0);
v_isShared_402_ = v_isSharedCheck_418_;
goto v_resetjp_400_;
}
v_resetjp_400_:
{
lean_object* v___x_409_; uint8_t v___x_410_; 
v___x_409_ = l_Lean_Expr_cleanupAnnotations(v_a_399_);
v___x_410_ = l_Lean_Expr_isApp(v___x_409_);
if (v___x_410_ == 0)
{
lean_dec_ref(v___x_409_);
goto v___jp_403_;
}
else
{
lean_object* v_arg_411_; lean_object* v___x_412_; uint8_t v___x_413_; 
v_arg_411_ = lean_ctor_get(v___x_409_, 1);
lean_inc_ref(v_arg_411_);
v___x_412_ = l_Lean_Expr_appFnCleanup___redArg(v___x_409_);
v___x_413_ = l_Lean_Expr_isApp(v___x_412_);
if (v___x_413_ == 0)
{
lean_dec_ref(v___x_412_);
lean_dec_ref(v_arg_411_);
goto v___jp_403_;
}
else
{
lean_object* v___x_414_; lean_object* v___x_415_; uint8_t v___x_416_; 
v___x_414_ = l_Lean_Expr_appFnCleanup___redArg(v___x_412_);
v___x_415_ = lean_obj_once(&l_Lean_Meta_Structural_isInstHAddInt___redArg___closed__1, &l_Lean_Meta_Structural_isInstHAddInt___redArg___closed__1_once, _init_l_Lean_Meta_Structural_isInstHAddInt___redArg___closed__1);
v___x_416_ = l_Lean_Expr_isConstOf(v___x_414_, v___x_415_);
lean_dec_ref(v___x_414_);
if (v___x_416_ == 0)
{
lean_dec_ref(v_arg_411_);
goto v___jp_403_;
}
else
{
lean_object* v___x_417_; 
lean_del_object(v___x_401_);
v___x_417_ = l_Lean_Meta_Structural_isInstAddInt___redArg(v_arg_411_, v_a_395_, v_a_396_);
return v___x_417_;
}
}
}
v___jp_403_:
{
uint8_t v___x_404_; lean_object* v___x_405_; lean_object* v___x_407_; 
v___x_404_ = 0;
v___x_405_ = lean_box(v___x_404_);
if (v_isShared_402_ == 0)
{
lean_ctor_set(v___x_401_, 0, v___x_405_);
v___x_407_ = v___x_401_;
goto v_reusejp_406_;
}
else
{
lean_object* v_reuseFailAlloc_408_; 
v_reuseFailAlloc_408_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_408_, 0, v___x_405_);
v___x_407_ = v_reuseFailAlloc_408_;
goto v_reusejp_406_;
}
v_reusejp_406_:
{
return v___x_407_;
}
}
}
}
else
{
lean_object* v_a_419_; lean_object* v___x_421_; uint8_t v_isShared_422_; uint8_t v_isSharedCheck_426_; 
v_a_419_ = lean_ctor_get(v___x_398_, 0);
v_isSharedCheck_426_ = !lean_is_exclusive(v___x_398_);
if (v_isSharedCheck_426_ == 0)
{
v___x_421_ = v___x_398_;
v_isShared_422_ = v_isSharedCheck_426_;
goto v_resetjp_420_;
}
else
{
lean_inc(v_a_419_);
lean_dec(v___x_398_);
v___x_421_ = lean_box(0);
v_isShared_422_ = v_isSharedCheck_426_;
goto v_resetjp_420_;
}
v_resetjp_420_:
{
lean_object* v___x_424_; 
if (v_isShared_422_ == 0)
{
v___x_424_ = v___x_421_;
goto v_reusejp_423_;
}
else
{
lean_object* v_reuseFailAlloc_425_; 
v_reuseFailAlloc_425_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_425_, 0, v_a_419_);
v___x_424_ = v_reuseFailAlloc_425_;
goto v_reusejp_423_;
}
v_reusejp_423_:
{
return v___x_424_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHAddInt___redArg___boxed(lean_object* v_e_427_, lean_object* v_a_428_, lean_object* v_a_429_, lean_object* v_a_430_){
_start:
{
lean_object* v_res_431_; 
v_res_431_ = l_Lean_Meta_Structural_isInstHAddInt___redArg(v_e_427_, v_a_428_, v_a_429_);
lean_dec(v_a_429_);
lean_dec(v_a_428_);
return v_res_431_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHAddInt(lean_object* v_e_432_, lean_object* v_a_433_, lean_object* v_a_434_, lean_object* v_a_435_, lean_object* v_a_436_){
_start:
{
lean_object* v___x_438_; 
v___x_438_ = l_Lean_Meta_Structural_isInstHAddInt___redArg(v_e_432_, v_a_434_, v_a_436_);
return v___x_438_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHAddInt___boxed(lean_object* v_e_439_, lean_object* v_a_440_, lean_object* v_a_441_, lean_object* v_a_442_, lean_object* v_a_443_, lean_object* v_a_444_){
_start:
{
lean_object* v_res_445_; 
v_res_445_ = l_Lean_Meta_Structural_isInstHAddInt(v_e_439_, v_a_440_, v_a_441_, v_a_442_, v_a_443_);
lean_dec(v_a_443_);
lean_dec_ref(v_a_442_);
lean_dec(v_a_441_);
lean_dec_ref(v_a_440_);
return v_res_445_;
}
}
static lean_object* _init_l_Lean_Meta_Structural_isInstHSubInt___redArg___closed__0(void){
_start:
{
lean_object* v___x_446_; 
v___x_446_ = lean_mk_string_unchecked("instHSub", 8, 8);
return v___x_446_;
}
}
static lean_object* _init_l_Lean_Meta_Structural_isInstHSubInt___redArg___closed__1(void){
_start:
{
lean_object* v___x_447_; lean_object* v___x_448_; 
v___x_447_ = lean_obj_once(&l_Lean_Meta_Structural_isInstHSubInt___redArg___closed__0, &l_Lean_Meta_Structural_isInstHSubInt___redArg___closed__0_once, _init_l_Lean_Meta_Structural_isInstHSubInt___redArg___closed__0);
v___x_448_ = l_Lean_Name_mkStr1(v___x_447_);
return v___x_448_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHSubInt___redArg(lean_object* v_e_449_, lean_object* v_a_450_, lean_object* v_a_451_){
_start:
{
lean_object* v___x_453_; 
v___x_453_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_449_, v_a_450_, v_a_451_);
if (lean_obj_tag(v___x_453_) == 0)
{
lean_object* v_a_454_; lean_object* v___x_456_; uint8_t v_isShared_457_; uint8_t v_isSharedCheck_473_; 
v_a_454_ = lean_ctor_get(v___x_453_, 0);
v_isSharedCheck_473_ = !lean_is_exclusive(v___x_453_);
if (v_isSharedCheck_473_ == 0)
{
v___x_456_ = v___x_453_;
v_isShared_457_ = v_isSharedCheck_473_;
goto v_resetjp_455_;
}
else
{
lean_inc(v_a_454_);
lean_dec(v___x_453_);
v___x_456_ = lean_box(0);
v_isShared_457_ = v_isSharedCheck_473_;
goto v_resetjp_455_;
}
v_resetjp_455_:
{
lean_object* v___x_464_; uint8_t v___x_465_; 
v___x_464_ = l_Lean_Expr_cleanupAnnotations(v_a_454_);
v___x_465_ = l_Lean_Expr_isApp(v___x_464_);
if (v___x_465_ == 0)
{
lean_dec_ref(v___x_464_);
goto v___jp_458_;
}
else
{
lean_object* v_arg_466_; lean_object* v___x_467_; uint8_t v___x_468_; 
v_arg_466_ = lean_ctor_get(v___x_464_, 1);
lean_inc_ref(v_arg_466_);
v___x_467_ = l_Lean_Expr_appFnCleanup___redArg(v___x_464_);
v___x_468_ = l_Lean_Expr_isApp(v___x_467_);
if (v___x_468_ == 0)
{
lean_dec_ref(v___x_467_);
lean_dec_ref(v_arg_466_);
goto v___jp_458_;
}
else
{
lean_object* v___x_469_; lean_object* v___x_470_; uint8_t v___x_471_; 
v___x_469_ = l_Lean_Expr_appFnCleanup___redArg(v___x_467_);
v___x_470_ = lean_obj_once(&l_Lean_Meta_Structural_isInstHSubInt___redArg___closed__1, &l_Lean_Meta_Structural_isInstHSubInt___redArg___closed__1_once, _init_l_Lean_Meta_Structural_isInstHSubInt___redArg___closed__1);
v___x_471_ = l_Lean_Expr_isConstOf(v___x_469_, v___x_470_);
lean_dec_ref(v___x_469_);
if (v___x_471_ == 0)
{
lean_dec_ref(v_arg_466_);
goto v___jp_458_;
}
else
{
lean_object* v___x_472_; 
lean_del_object(v___x_456_);
v___x_472_ = l_Lean_Meta_Structural_isInstSubInt___redArg(v_arg_466_, v_a_450_, v_a_451_);
return v___x_472_;
}
}
}
v___jp_458_:
{
uint8_t v___x_459_; lean_object* v___x_460_; lean_object* v___x_462_; 
v___x_459_ = 0;
v___x_460_ = lean_box(v___x_459_);
if (v_isShared_457_ == 0)
{
lean_ctor_set(v___x_456_, 0, v___x_460_);
v___x_462_ = v___x_456_;
goto v_reusejp_461_;
}
else
{
lean_object* v_reuseFailAlloc_463_; 
v_reuseFailAlloc_463_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_463_, 0, v___x_460_);
v___x_462_ = v_reuseFailAlloc_463_;
goto v_reusejp_461_;
}
v_reusejp_461_:
{
return v___x_462_;
}
}
}
}
else
{
lean_object* v_a_474_; lean_object* v___x_476_; uint8_t v_isShared_477_; uint8_t v_isSharedCheck_481_; 
v_a_474_ = lean_ctor_get(v___x_453_, 0);
v_isSharedCheck_481_ = !lean_is_exclusive(v___x_453_);
if (v_isSharedCheck_481_ == 0)
{
v___x_476_ = v___x_453_;
v_isShared_477_ = v_isSharedCheck_481_;
goto v_resetjp_475_;
}
else
{
lean_inc(v_a_474_);
lean_dec(v___x_453_);
v___x_476_ = lean_box(0);
v_isShared_477_ = v_isSharedCheck_481_;
goto v_resetjp_475_;
}
v_resetjp_475_:
{
lean_object* v___x_479_; 
if (v_isShared_477_ == 0)
{
v___x_479_ = v___x_476_;
goto v_reusejp_478_;
}
else
{
lean_object* v_reuseFailAlloc_480_; 
v_reuseFailAlloc_480_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_480_, 0, v_a_474_);
v___x_479_ = v_reuseFailAlloc_480_;
goto v_reusejp_478_;
}
v_reusejp_478_:
{
return v___x_479_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHSubInt___redArg___boxed(lean_object* v_e_482_, lean_object* v_a_483_, lean_object* v_a_484_, lean_object* v_a_485_){
_start:
{
lean_object* v_res_486_; 
v_res_486_ = l_Lean_Meta_Structural_isInstHSubInt___redArg(v_e_482_, v_a_483_, v_a_484_);
lean_dec(v_a_484_);
lean_dec(v_a_483_);
return v_res_486_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHSubInt(lean_object* v_e_487_, lean_object* v_a_488_, lean_object* v_a_489_, lean_object* v_a_490_, lean_object* v_a_491_){
_start:
{
lean_object* v___x_493_; 
v___x_493_ = l_Lean_Meta_Structural_isInstHSubInt___redArg(v_e_487_, v_a_489_, v_a_491_);
return v___x_493_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHSubInt___boxed(lean_object* v_e_494_, lean_object* v_a_495_, lean_object* v_a_496_, lean_object* v_a_497_, lean_object* v_a_498_, lean_object* v_a_499_){
_start:
{
lean_object* v_res_500_; 
v_res_500_ = l_Lean_Meta_Structural_isInstHSubInt(v_e_494_, v_a_495_, v_a_496_, v_a_497_, v_a_498_);
lean_dec(v_a_498_);
lean_dec_ref(v_a_497_);
lean_dec(v_a_496_);
lean_dec_ref(v_a_495_);
return v_res_500_;
}
}
static lean_object* _init_l_Lean_Meta_Structural_isInstHMulInt___redArg___closed__0(void){
_start:
{
lean_object* v___x_501_; 
v___x_501_ = lean_mk_string_unchecked("instHMul", 8, 8);
return v___x_501_;
}
}
static lean_object* _init_l_Lean_Meta_Structural_isInstHMulInt___redArg___closed__1(void){
_start:
{
lean_object* v___x_502_; lean_object* v___x_503_; 
v___x_502_ = lean_obj_once(&l_Lean_Meta_Structural_isInstHMulInt___redArg___closed__0, &l_Lean_Meta_Structural_isInstHMulInt___redArg___closed__0_once, _init_l_Lean_Meta_Structural_isInstHMulInt___redArg___closed__0);
v___x_503_ = l_Lean_Name_mkStr1(v___x_502_);
return v___x_503_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHMulInt___redArg(lean_object* v_e_504_, lean_object* v_a_505_, lean_object* v_a_506_){
_start:
{
lean_object* v___x_508_; 
v___x_508_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_504_, v_a_505_, v_a_506_);
if (lean_obj_tag(v___x_508_) == 0)
{
lean_object* v_a_509_; lean_object* v___x_511_; uint8_t v_isShared_512_; uint8_t v_isSharedCheck_528_; 
v_a_509_ = lean_ctor_get(v___x_508_, 0);
v_isSharedCheck_528_ = !lean_is_exclusive(v___x_508_);
if (v_isSharedCheck_528_ == 0)
{
v___x_511_ = v___x_508_;
v_isShared_512_ = v_isSharedCheck_528_;
goto v_resetjp_510_;
}
else
{
lean_inc(v_a_509_);
lean_dec(v___x_508_);
v___x_511_ = lean_box(0);
v_isShared_512_ = v_isSharedCheck_528_;
goto v_resetjp_510_;
}
v_resetjp_510_:
{
lean_object* v___x_519_; uint8_t v___x_520_; 
v___x_519_ = l_Lean_Expr_cleanupAnnotations(v_a_509_);
v___x_520_ = l_Lean_Expr_isApp(v___x_519_);
if (v___x_520_ == 0)
{
lean_dec_ref(v___x_519_);
goto v___jp_513_;
}
else
{
lean_object* v_arg_521_; lean_object* v___x_522_; uint8_t v___x_523_; 
v_arg_521_ = lean_ctor_get(v___x_519_, 1);
lean_inc_ref(v_arg_521_);
v___x_522_ = l_Lean_Expr_appFnCleanup___redArg(v___x_519_);
v___x_523_ = l_Lean_Expr_isApp(v___x_522_);
if (v___x_523_ == 0)
{
lean_dec_ref(v___x_522_);
lean_dec_ref(v_arg_521_);
goto v___jp_513_;
}
else
{
lean_object* v___x_524_; lean_object* v___x_525_; uint8_t v___x_526_; 
v___x_524_ = l_Lean_Expr_appFnCleanup___redArg(v___x_522_);
v___x_525_ = lean_obj_once(&l_Lean_Meta_Structural_isInstHMulInt___redArg___closed__1, &l_Lean_Meta_Structural_isInstHMulInt___redArg___closed__1_once, _init_l_Lean_Meta_Structural_isInstHMulInt___redArg___closed__1);
v___x_526_ = l_Lean_Expr_isConstOf(v___x_524_, v___x_525_);
lean_dec_ref(v___x_524_);
if (v___x_526_ == 0)
{
lean_dec_ref(v_arg_521_);
goto v___jp_513_;
}
else
{
lean_object* v___x_527_; 
lean_del_object(v___x_511_);
v___x_527_ = l_Lean_Meta_Structural_isInstMulInt___redArg(v_arg_521_, v_a_505_, v_a_506_);
return v___x_527_;
}
}
}
v___jp_513_:
{
uint8_t v___x_514_; lean_object* v___x_515_; lean_object* v___x_517_; 
v___x_514_ = 0;
v___x_515_ = lean_box(v___x_514_);
if (v_isShared_512_ == 0)
{
lean_ctor_set(v___x_511_, 0, v___x_515_);
v___x_517_ = v___x_511_;
goto v_reusejp_516_;
}
else
{
lean_object* v_reuseFailAlloc_518_; 
v_reuseFailAlloc_518_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_518_, 0, v___x_515_);
v___x_517_ = v_reuseFailAlloc_518_;
goto v_reusejp_516_;
}
v_reusejp_516_:
{
return v___x_517_;
}
}
}
}
else
{
lean_object* v_a_529_; lean_object* v___x_531_; uint8_t v_isShared_532_; uint8_t v_isSharedCheck_536_; 
v_a_529_ = lean_ctor_get(v___x_508_, 0);
v_isSharedCheck_536_ = !lean_is_exclusive(v___x_508_);
if (v_isSharedCheck_536_ == 0)
{
v___x_531_ = v___x_508_;
v_isShared_532_ = v_isSharedCheck_536_;
goto v_resetjp_530_;
}
else
{
lean_inc(v_a_529_);
lean_dec(v___x_508_);
v___x_531_ = lean_box(0);
v_isShared_532_ = v_isSharedCheck_536_;
goto v_resetjp_530_;
}
v_resetjp_530_:
{
lean_object* v___x_534_; 
if (v_isShared_532_ == 0)
{
v___x_534_ = v___x_531_;
goto v_reusejp_533_;
}
else
{
lean_object* v_reuseFailAlloc_535_; 
v_reuseFailAlloc_535_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_535_, 0, v_a_529_);
v___x_534_ = v_reuseFailAlloc_535_;
goto v_reusejp_533_;
}
v_reusejp_533_:
{
return v___x_534_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHMulInt___redArg___boxed(lean_object* v_e_537_, lean_object* v_a_538_, lean_object* v_a_539_, lean_object* v_a_540_){
_start:
{
lean_object* v_res_541_; 
v_res_541_ = l_Lean_Meta_Structural_isInstHMulInt___redArg(v_e_537_, v_a_538_, v_a_539_);
lean_dec(v_a_539_);
lean_dec(v_a_538_);
return v_res_541_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHMulInt(lean_object* v_e_542_, lean_object* v_a_543_, lean_object* v_a_544_, lean_object* v_a_545_, lean_object* v_a_546_){
_start:
{
lean_object* v___x_548_; 
v___x_548_ = l_Lean_Meta_Structural_isInstHMulInt___redArg(v_e_542_, v_a_544_, v_a_546_);
return v___x_548_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHMulInt___boxed(lean_object* v_e_549_, lean_object* v_a_550_, lean_object* v_a_551_, lean_object* v_a_552_, lean_object* v_a_553_, lean_object* v_a_554_){
_start:
{
lean_object* v_res_555_; 
v_res_555_ = l_Lean_Meta_Structural_isInstHMulInt(v_e_549_, v_a_550_, v_a_551_, v_a_552_, v_a_553_);
lean_dec(v_a_553_);
lean_dec_ref(v_a_552_);
lean_dec(v_a_551_);
lean_dec_ref(v_a_550_);
return v_res_555_;
}
}
static lean_object* _init_l_Lean_Meta_Structural_isInstHDivInt___redArg___closed__0(void){
_start:
{
lean_object* v___x_556_; 
v___x_556_ = lean_mk_string_unchecked("instHDiv", 8, 8);
return v___x_556_;
}
}
static lean_object* _init_l_Lean_Meta_Structural_isInstHDivInt___redArg___closed__1(void){
_start:
{
lean_object* v___x_557_; lean_object* v___x_558_; 
v___x_557_ = lean_obj_once(&l_Lean_Meta_Structural_isInstHDivInt___redArg___closed__0, &l_Lean_Meta_Structural_isInstHDivInt___redArg___closed__0_once, _init_l_Lean_Meta_Structural_isInstHDivInt___redArg___closed__0);
v___x_558_ = l_Lean_Name_mkStr1(v___x_557_);
return v___x_558_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHDivInt___redArg(lean_object* v_e_559_, lean_object* v_a_560_, lean_object* v_a_561_){
_start:
{
lean_object* v___x_563_; 
v___x_563_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_559_, v_a_560_, v_a_561_);
if (lean_obj_tag(v___x_563_) == 0)
{
lean_object* v_a_564_; lean_object* v___x_566_; uint8_t v_isShared_567_; uint8_t v_isSharedCheck_583_; 
v_a_564_ = lean_ctor_get(v___x_563_, 0);
v_isSharedCheck_583_ = !lean_is_exclusive(v___x_563_);
if (v_isSharedCheck_583_ == 0)
{
v___x_566_ = v___x_563_;
v_isShared_567_ = v_isSharedCheck_583_;
goto v_resetjp_565_;
}
else
{
lean_inc(v_a_564_);
lean_dec(v___x_563_);
v___x_566_ = lean_box(0);
v_isShared_567_ = v_isSharedCheck_583_;
goto v_resetjp_565_;
}
v_resetjp_565_:
{
lean_object* v___x_574_; uint8_t v___x_575_; 
v___x_574_ = l_Lean_Expr_cleanupAnnotations(v_a_564_);
v___x_575_ = l_Lean_Expr_isApp(v___x_574_);
if (v___x_575_ == 0)
{
lean_dec_ref(v___x_574_);
goto v___jp_568_;
}
else
{
lean_object* v_arg_576_; lean_object* v___x_577_; uint8_t v___x_578_; 
v_arg_576_ = lean_ctor_get(v___x_574_, 1);
lean_inc_ref(v_arg_576_);
v___x_577_ = l_Lean_Expr_appFnCleanup___redArg(v___x_574_);
v___x_578_ = l_Lean_Expr_isApp(v___x_577_);
if (v___x_578_ == 0)
{
lean_dec_ref(v___x_577_);
lean_dec_ref(v_arg_576_);
goto v___jp_568_;
}
else
{
lean_object* v___x_579_; lean_object* v___x_580_; uint8_t v___x_581_; 
v___x_579_ = l_Lean_Expr_appFnCleanup___redArg(v___x_577_);
v___x_580_ = lean_obj_once(&l_Lean_Meta_Structural_isInstHDivInt___redArg___closed__1, &l_Lean_Meta_Structural_isInstHDivInt___redArg___closed__1_once, _init_l_Lean_Meta_Structural_isInstHDivInt___redArg___closed__1);
v___x_581_ = l_Lean_Expr_isConstOf(v___x_579_, v___x_580_);
lean_dec_ref(v___x_579_);
if (v___x_581_ == 0)
{
lean_dec_ref(v_arg_576_);
goto v___jp_568_;
}
else
{
lean_object* v___x_582_; 
lean_del_object(v___x_566_);
v___x_582_ = l_Lean_Meta_Structural_isInstDivInt___redArg(v_arg_576_, v_a_560_, v_a_561_);
return v___x_582_;
}
}
}
v___jp_568_:
{
uint8_t v___x_569_; lean_object* v___x_570_; lean_object* v___x_572_; 
v___x_569_ = 0;
v___x_570_ = lean_box(v___x_569_);
if (v_isShared_567_ == 0)
{
lean_ctor_set(v___x_566_, 0, v___x_570_);
v___x_572_ = v___x_566_;
goto v_reusejp_571_;
}
else
{
lean_object* v_reuseFailAlloc_573_; 
v_reuseFailAlloc_573_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_573_, 0, v___x_570_);
v___x_572_ = v_reuseFailAlloc_573_;
goto v_reusejp_571_;
}
v_reusejp_571_:
{
return v___x_572_;
}
}
}
}
else
{
lean_object* v_a_584_; lean_object* v___x_586_; uint8_t v_isShared_587_; uint8_t v_isSharedCheck_591_; 
v_a_584_ = lean_ctor_get(v___x_563_, 0);
v_isSharedCheck_591_ = !lean_is_exclusive(v___x_563_);
if (v_isSharedCheck_591_ == 0)
{
v___x_586_ = v___x_563_;
v_isShared_587_ = v_isSharedCheck_591_;
goto v_resetjp_585_;
}
else
{
lean_inc(v_a_584_);
lean_dec(v___x_563_);
v___x_586_ = lean_box(0);
v_isShared_587_ = v_isSharedCheck_591_;
goto v_resetjp_585_;
}
v_resetjp_585_:
{
lean_object* v___x_589_; 
if (v_isShared_587_ == 0)
{
v___x_589_ = v___x_586_;
goto v_reusejp_588_;
}
else
{
lean_object* v_reuseFailAlloc_590_; 
v_reuseFailAlloc_590_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_590_, 0, v_a_584_);
v___x_589_ = v_reuseFailAlloc_590_;
goto v_reusejp_588_;
}
v_reusejp_588_:
{
return v___x_589_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHDivInt___redArg___boxed(lean_object* v_e_592_, lean_object* v_a_593_, lean_object* v_a_594_, lean_object* v_a_595_){
_start:
{
lean_object* v_res_596_; 
v_res_596_ = l_Lean_Meta_Structural_isInstHDivInt___redArg(v_e_592_, v_a_593_, v_a_594_);
lean_dec(v_a_594_);
lean_dec(v_a_593_);
return v_res_596_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHDivInt(lean_object* v_e_597_, lean_object* v_a_598_, lean_object* v_a_599_, lean_object* v_a_600_, lean_object* v_a_601_){
_start:
{
lean_object* v___x_603_; 
v___x_603_ = l_Lean_Meta_Structural_isInstHDivInt___redArg(v_e_597_, v_a_599_, v_a_601_);
return v___x_603_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHDivInt___boxed(lean_object* v_e_604_, lean_object* v_a_605_, lean_object* v_a_606_, lean_object* v_a_607_, lean_object* v_a_608_, lean_object* v_a_609_){
_start:
{
lean_object* v_res_610_; 
v_res_610_ = l_Lean_Meta_Structural_isInstHDivInt(v_e_604_, v_a_605_, v_a_606_, v_a_607_, v_a_608_);
lean_dec(v_a_608_);
lean_dec_ref(v_a_607_);
lean_dec(v_a_606_);
lean_dec_ref(v_a_605_);
return v_res_610_;
}
}
static lean_object* _init_l_Lean_Meta_Structural_isInstHModInt___redArg___closed__0(void){
_start:
{
lean_object* v___x_611_; 
v___x_611_ = lean_mk_string_unchecked("instHMod", 8, 8);
return v___x_611_;
}
}
static lean_object* _init_l_Lean_Meta_Structural_isInstHModInt___redArg___closed__1(void){
_start:
{
lean_object* v___x_612_; lean_object* v___x_613_; 
v___x_612_ = lean_obj_once(&l_Lean_Meta_Structural_isInstHModInt___redArg___closed__0, &l_Lean_Meta_Structural_isInstHModInt___redArg___closed__0_once, _init_l_Lean_Meta_Structural_isInstHModInt___redArg___closed__0);
v___x_613_ = l_Lean_Name_mkStr1(v___x_612_);
return v___x_613_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHModInt___redArg(lean_object* v_e_614_, lean_object* v_a_615_, lean_object* v_a_616_){
_start:
{
lean_object* v___x_618_; 
v___x_618_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_614_, v_a_615_, v_a_616_);
if (lean_obj_tag(v___x_618_) == 0)
{
lean_object* v_a_619_; lean_object* v___x_621_; uint8_t v_isShared_622_; uint8_t v_isSharedCheck_638_; 
v_a_619_ = lean_ctor_get(v___x_618_, 0);
v_isSharedCheck_638_ = !lean_is_exclusive(v___x_618_);
if (v_isSharedCheck_638_ == 0)
{
v___x_621_ = v___x_618_;
v_isShared_622_ = v_isSharedCheck_638_;
goto v_resetjp_620_;
}
else
{
lean_inc(v_a_619_);
lean_dec(v___x_618_);
v___x_621_ = lean_box(0);
v_isShared_622_ = v_isSharedCheck_638_;
goto v_resetjp_620_;
}
v_resetjp_620_:
{
lean_object* v___x_629_; uint8_t v___x_630_; 
v___x_629_ = l_Lean_Expr_cleanupAnnotations(v_a_619_);
v___x_630_ = l_Lean_Expr_isApp(v___x_629_);
if (v___x_630_ == 0)
{
lean_dec_ref(v___x_629_);
goto v___jp_623_;
}
else
{
lean_object* v_arg_631_; lean_object* v___x_632_; uint8_t v___x_633_; 
v_arg_631_ = lean_ctor_get(v___x_629_, 1);
lean_inc_ref(v_arg_631_);
v___x_632_ = l_Lean_Expr_appFnCleanup___redArg(v___x_629_);
v___x_633_ = l_Lean_Expr_isApp(v___x_632_);
if (v___x_633_ == 0)
{
lean_dec_ref(v___x_632_);
lean_dec_ref(v_arg_631_);
goto v___jp_623_;
}
else
{
lean_object* v___x_634_; lean_object* v___x_635_; uint8_t v___x_636_; 
v___x_634_ = l_Lean_Expr_appFnCleanup___redArg(v___x_632_);
v___x_635_ = lean_obj_once(&l_Lean_Meta_Structural_isInstHModInt___redArg___closed__1, &l_Lean_Meta_Structural_isInstHModInt___redArg___closed__1_once, _init_l_Lean_Meta_Structural_isInstHModInt___redArg___closed__1);
v___x_636_ = l_Lean_Expr_isConstOf(v___x_634_, v___x_635_);
lean_dec_ref(v___x_634_);
if (v___x_636_ == 0)
{
lean_dec_ref(v_arg_631_);
goto v___jp_623_;
}
else
{
lean_object* v___x_637_; 
lean_del_object(v___x_621_);
v___x_637_ = l_Lean_Meta_Structural_isInstModInt___redArg(v_arg_631_, v_a_615_, v_a_616_);
return v___x_637_;
}
}
}
v___jp_623_:
{
uint8_t v___x_624_; lean_object* v___x_625_; lean_object* v___x_627_; 
v___x_624_ = 0;
v___x_625_ = lean_box(v___x_624_);
if (v_isShared_622_ == 0)
{
lean_ctor_set(v___x_621_, 0, v___x_625_);
v___x_627_ = v___x_621_;
goto v_reusejp_626_;
}
else
{
lean_object* v_reuseFailAlloc_628_; 
v_reuseFailAlloc_628_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_628_, 0, v___x_625_);
v___x_627_ = v_reuseFailAlloc_628_;
goto v_reusejp_626_;
}
v_reusejp_626_:
{
return v___x_627_;
}
}
}
}
else
{
lean_object* v_a_639_; lean_object* v___x_641_; uint8_t v_isShared_642_; uint8_t v_isSharedCheck_646_; 
v_a_639_ = lean_ctor_get(v___x_618_, 0);
v_isSharedCheck_646_ = !lean_is_exclusive(v___x_618_);
if (v_isSharedCheck_646_ == 0)
{
v___x_641_ = v___x_618_;
v_isShared_642_ = v_isSharedCheck_646_;
goto v_resetjp_640_;
}
else
{
lean_inc(v_a_639_);
lean_dec(v___x_618_);
v___x_641_ = lean_box(0);
v_isShared_642_ = v_isSharedCheck_646_;
goto v_resetjp_640_;
}
v_resetjp_640_:
{
lean_object* v___x_644_; 
if (v_isShared_642_ == 0)
{
v___x_644_ = v___x_641_;
goto v_reusejp_643_;
}
else
{
lean_object* v_reuseFailAlloc_645_; 
v_reuseFailAlloc_645_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_645_, 0, v_a_639_);
v___x_644_ = v_reuseFailAlloc_645_;
goto v_reusejp_643_;
}
v_reusejp_643_:
{
return v___x_644_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHModInt___redArg___boxed(lean_object* v_e_647_, lean_object* v_a_648_, lean_object* v_a_649_, lean_object* v_a_650_){
_start:
{
lean_object* v_res_651_; 
v_res_651_ = l_Lean_Meta_Structural_isInstHModInt___redArg(v_e_647_, v_a_648_, v_a_649_);
lean_dec(v_a_649_);
lean_dec(v_a_648_);
return v_res_651_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHModInt(lean_object* v_e_652_, lean_object* v_a_653_, lean_object* v_a_654_, lean_object* v_a_655_, lean_object* v_a_656_){
_start:
{
lean_object* v___x_658_; 
v___x_658_ = l_Lean_Meta_Structural_isInstHModInt___redArg(v_e_652_, v_a_654_, v_a_656_);
return v___x_658_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHModInt___boxed(lean_object* v_e_659_, lean_object* v_a_660_, lean_object* v_a_661_, lean_object* v_a_662_, lean_object* v_a_663_, lean_object* v_a_664_){
_start:
{
lean_object* v_res_665_; 
v_res_665_ = l_Lean_Meta_Structural_isInstHModInt(v_e_659_, v_a_660_, v_a_661_, v_a_662_, v_a_663_);
lean_dec(v_a_663_);
lean_dec_ref(v_a_662_);
lean_dec(v_a_661_);
lean_dec_ref(v_a_660_);
return v_res_665_;
}
}
static lean_object* _init_l_Lean_Meta_Structural_isInstLTInt___redArg___closed__0(void){
_start:
{
lean_object* v___x_666_; 
v___x_666_ = lean_mk_string_unchecked("instLTInt", 9, 9);
return v___x_666_;
}
}
static lean_object* _init_l_Lean_Meta_Structural_isInstLTInt___redArg___closed__1(void){
_start:
{
lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; 
v___x_667_ = lean_obj_once(&l_Lean_Meta_Structural_isInstLTInt___redArg___closed__0, &l_Lean_Meta_Structural_isInstLTInt___redArg___closed__0_once, _init_l_Lean_Meta_Structural_isInstLTInt___redArg___closed__0);
v___x_668_ = lean_obj_once(&l_Lean_Meta_Structural_isInstNegInt___redArg___closed__0, &l_Lean_Meta_Structural_isInstNegInt___redArg___closed__0_once, _init_l_Lean_Meta_Structural_isInstNegInt___redArg___closed__0);
v___x_669_ = l_Lean_Name_mkStr2(v___x_668_, v___x_667_);
return v___x_669_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstLTInt___redArg(lean_object* v_e_670_, lean_object* v_a_671_, lean_object* v_a_672_){
_start:
{
lean_object* v___x_674_; 
v___x_674_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_670_, v_a_671_, v_a_672_);
if (lean_obj_tag(v___x_674_) == 0)
{
lean_object* v_a_675_; lean_object* v___x_677_; uint8_t v_isShared_678_; uint8_t v_isSharedCheck_686_; 
v_a_675_ = lean_ctor_get(v___x_674_, 0);
v_isSharedCheck_686_ = !lean_is_exclusive(v___x_674_);
if (v_isSharedCheck_686_ == 0)
{
v___x_677_ = v___x_674_;
v_isShared_678_ = v_isSharedCheck_686_;
goto v_resetjp_676_;
}
else
{
lean_inc(v_a_675_);
lean_dec(v___x_674_);
v___x_677_ = lean_box(0);
v_isShared_678_ = v_isSharedCheck_686_;
goto v_resetjp_676_;
}
v_resetjp_676_:
{
lean_object* v___x_679_; lean_object* v___x_680_; uint8_t v___x_681_; lean_object* v___x_682_; lean_object* v___x_684_; 
v___x_679_ = l_Lean_Expr_cleanupAnnotations(v_a_675_);
v___x_680_ = lean_obj_once(&l_Lean_Meta_Structural_isInstLTInt___redArg___closed__1, &l_Lean_Meta_Structural_isInstLTInt___redArg___closed__1_once, _init_l_Lean_Meta_Structural_isInstLTInt___redArg___closed__1);
v___x_681_ = l_Lean_Expr_isConstOf(v___x_679_, v___x_680_);
lean_dec_ref(v___x_679_);
v___x_682_ = lean_box(v___x_681_);
if (v_isShared_678_ == 0)
{
lean_ctor_set(v___x_677_, 0, v___x_682_);
v___x_684_ = v___x_677_;
goto v_reusejp_683_;
}
else
{
lean_object* v_reuseFailAlloc_685_; 
v_reuseFailAlloc_685_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_685_, 0, v___x_682_);
v___x_684_ = v_reuseFailAlloc_685_;
goto v_reusejp_683_;
}
v_reusejp_683_:
{
return v___x_684_;
}
}
}
else
{
lean_object* v_a_687_; lean_object* v___x_689_; uint8_t v_isShared_690_; uint8_t v_isSharedCheck_694_; 
v_a_687_ = lean_ctor_get(v___x_674_, 0);
v_isSharedCheck_694_ = !lean_is_exclusive(v___x_674_);
if (v_isSharedCheck_694_ == 0)
{
v___x_689_ = v___x_674_;
v_isShared_690_ = v_isSharedCheck_694_;
goto v_resetjp_688_;
}
else
{
lean_inc(v_a_687_);
lean_dec(v___x_674_);
v___x_689_ = lean_box(0);
v_isShared_690_ = v_isSharedCheck_694_;
goto v_resetjp_688_;
}
v_resetjp_688_:
{
lean_object* v___x_692_; 
if (v_isShared_690_ == 0)
{
v___x_692_ = v___x_689_;
goto v_reusejp_691_;
}
else
{
lean_object* v_reuseFailAlloc_693_; 
v_reuseFailAlloc_693_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_693_, 0, v_a_687_);
v___x_692_ = v_reuseFailAlloc_693_;
goto v_reusejp_691_;
}
v_reusejp_691_:
{
return v___x_692_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstLTInt___redArg___boxed(lean_object* v_e_695_, lean_object* v_a_696_, lean_object* v_a_697_, lean_object* v_a_698_){
_start:
{
lean_object* v_res_699_; 
v_res_699_ = l_Lean_Meta_Structural_isInstLTInt___redArg(v_e_695_, v_a_696_, v_a_697_);
lean_dec(v_a_697_);
lean_dec(v_a_696_);
return v_res_699_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstLTInt(lean_object* v_e_700_, lean_object* v_a_701_, lean_object* v_a_702_, lean_object* v_a_703_, lean_object* v_a_704_){
_start:
{
lean_object* v___x_706_; 
v___x_706_ = l_Lean_Meta_Structural_isInstLTInt___redArg(v_e_700_, v_a_702_, v_a_704_);
return v___x_706_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstLTInt___boxed(lean_object* v_e_707_, lean_object* v_a_708_, lean_object* v_a_709_, lean_object* v_a_710_, lean_object* v_a_711_, lean_object* v_a_712_){
_start:
{
lean_object* v_res_713_; 
v_res_713_ = l_Lean_Meta_Structural_isInstLTInt(v_e_707_, v_a_708_, v_a_709_, v_a_710_, v_a_711_);
lean_dec(v_a_711_);
lean_dec_ref(v_a_710_);
lean_dec(v_a_709_);
lean_dec_ref(v_a_708_);
return v_res_713_;
}
}
static lean_object* _init_l_Lean_Meta_Structural_isInstLEInt___redArg___closed__0(void){
_start:
{
lean_object* v___x_714_; 
v___x_714_ = lean_mk_string_unchecked("instLEInt", 9, 9);
return v___x_714_;
}
}
static lean_object* _init_l_Lean_Meta_Structural_isInstLEInt___redArg___closed__1(void){
_start:
{
lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; 
v___x_715_ = lean_obj_once(&l_Lean_Meta_Structural_isInstLEInt___redArg___closed__0, &l_Lean_Meta_Structural_isInstLEInt___redArg___closed__0_once, _init_l_Lean_Meta_Structural_isInstLEInt___redArg___closed__0);
v___x_716_ = lean_obj_once(&l_Lean_Meta_Structural_isInstNegInt___redArg___closed__0, &l_Lean_Meta_Structural_isInstNegInt___redArg___closed__0_once, _init_l_Lean_Meta_Structural_isInstNegInt___redArg___closed__0);
v___x_717_ = l_Lean_Name_mkStr2(v___x_716_, v___x_715_);
return v___x_717_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstLEInt___redArg(lean_object* v_e_718_, lean_object* v_a_719_, lean_object* v_a_720_){
_start:
{
lean_object* v___x_722_; 
v___x_722_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_718_, v_a_719_, v_a_720_);
if (lean_obj_tag(v___x_722_) == 0)
{
lean_object* v_a_723_; lean_object* v___x_725_; uint8_t v_isShared_726_; uint8_t v_isSharedCheck_734_; 
v_a_723_ = lean_ctor_get(v___x_722_, 0);
v_isSharedCheck_734_ = !lean_is_exclusive(v___x_722_);
if (v_isSharedCheck_734_ == 0)
{
v___x_725_ = v___x_722_;
v_isShared_726_ = v_isSharedCheck_734_;
goto v_resetjp_724_;
}
else
{
lean_inc(v_a_723_);
lean_dec(v___x_722_);
v___x_725_ = lean_box(0);
v_isShared_726_ = v_isSharedCheck_734_;
goto v_resetjp_724_;
}
v_resetjp_724_:
{
lean_object* v___x_727_; lean_object* v___x_728_; uint8_t v___x_729_; lean_object* v___x_730_; lean_object* v___x_732_; 
v___x_727_ = l_Lean_Expr_cleanupAnnotations(v_a_723_);
v___x_728_ = lean_obj_once(&l_Lean_Meta_Structural_isInstLEInt___redArg___closed__1, &l_Lean_Meta_Structural_isInstLEInt___redArg___closed__1_once, _init_l_Lean_Meta_Structural_isInstLEInt___redArg___closed__1);
v___x_729_ = l_Lean_Expr_isConstOf(v___x_727_, v___x_728_);
lean_dec_ref(v___x_727_);
v___x_730_ = lean_box(v___x_729_);
if (v_isShared_726_ == 0)
{
lean_ctor_set(v___x_725_, 0, v___x_730_);
v___x_732_ = v___x_725_;
goto v_reusejp_731_;
}
else
{
lean_object* v_reuseFailAlloc_733_; 
v_reuseFailAlloc_733_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_733_, 0, v___x_730_);
v___x_732_ = v_reuseFailAlloc_733_;
goto v_reusejp_731_;
}
v_reusejp_731_:
{
return v___x_732_;
}
}
}
else
{
lean_object* v_a_735_; lean_object* v___x_737_; uint8_t v_isShared_738_; uint8_t v_isSharedCheck_742_; 
v_a_735_ = lean_ctor_get(v___x_722_, 0);
v_isSharedCheck_742_ = !lean_is_exclusive(v___x_722_);
if (v_isSharedCheck_742_ == 0)
{
v___x_737_ = v___x_722_;
v_isShared_738_ = v_isSharedCheck_742_;
goto v_resetjp_736_;
}
else
{
lean_inc(v_a_735_);
lean_dec(v___x_722_);
v___x_737_ = lean_box(0);
v_isShared_738_ = v_isSharedCheck_742_;
goto v_resetjp_736_;
}
v_resetjp_736_:
{
lean_object* v___x_740_; 
if (v_isShared_738_ == 0)
{
v___x_740_ = v___x_737_;
goto v_reusejp_739_;
}
else
{
lean_object* v_reuseFailAlloc_741_; 
v_reuseFailAlloc_741_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_741_, 0, v_a_735_);
v___x_740_ = v_reuseFailAlloc_741_;
goto v_reusejp_739_;
}
v_reusejp_739_:
{
return v___x_740_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstLEInt___redArg___boxed(lean_object* v_e_743_, lean_object* v_a_744_, lean_object* v_a_745_, lean_object* v_a_746_){
_start:
{
lean_object* v_res_747_; 
v_res_747_ = l_Lean_Meta_Structural_isInstLEInt___redArg(v_e_743_, v_a_744_, v_a_745_);
lean_dec(v_a_745_);
lean_dec(v_a_744_);
return v_res_747_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstLEInt(lean_object* v_e_748_, lean_object* v_a_749_, lean_object* v_a_750_, lean_object* v_a_751_, lean_object* v_a_752_){
_start:
{
lean_object* v___x_754_; 
v___x_754_ = l_Lean_Meta_Structural_isInstLEInt___redArg(v_e_748_, v_a_750_, v_a_752_);
return v___x_754_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstLEInt___boxed(lean_object* v_e_755_, lean_object* v_a_756_, lean_object* v_a_757_, lean_object* v_a_758_, lean_object* v_a_759_, lean_object* v_a_760_){
_start:
{
lean_object* v_res_761_; 
v_res_761_ = l_Lean_Meta_Structural_isInstLEInt(v_e_755_, v_a_756_, v_a_757_, v_a_758_, v_a_759_);
lean_dec(v_a_759_);
lean_dec_ref(v_a_758_);
lean_dec(v_a_757_);
lean_dec_ref(v_a_756_);
return v_res_761_;
}
}
static lean_object* _init_l_Lean_Meta_Structural_isInstNatPowInt___redArg___closed__0(void){
_start:
{
lean_object* v___x_762_; 
v___x_762_ = lean_mk_string_unchecked("instNatPow", 10, 10);
return v___x_762_;
}
}
static lean_object* _init_l_Lean_Meta_Structural_isInstNatPowInt___redArg___closed__1(void){
_start:
{
lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; 
v___x_763_ = lean_obj_once(&l_Lean_Meta_Structural_isInstNatPowInt___redArg___closed__0, &l_Lean_Meta_Structural_isInstNatPowInt___redArg___closed__0_once, _init_l_Lean_Meta_Structural_isInstNatPowInt___redArg___closed__0);
v___x_764_ = lean_obj_once(&l_Lean_Meta_Structural_isInstNegInt___redArg___closed__0, &l_Lean_Meta_Structural_isInstNegInt___redArg___closed__0_once, _init_l_Lean_Meta_Structural_isInstNegInt___redArg___closed__0);
v___x_765_ = l_Lean_Name_mkStr2(v___x_764_, v___x_763_);
return v___x_765_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstNatPowInt___redArg(lean_object* v_e_766_, lean_object* v_a_767_, lean_object* v_a_768_){
_start:
{
lean_object* v___x_770_; 
v___x_770_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_766_, v_a_767_, v_a_768_);
if (lean_obj_tag(v___x_770_) == 0)
{
lean_object* v_a_771_; lean_object* v___x_773_; uint8_t v_isShared_774_; uint8_t v_isSharedCheck_782_; 
v_a_771_ = lean_ctor_get(v___x_770_, 0);
v_isSharedCheck_782_ = !lean_is_exclusive(v___x_770_);
if (v_isSharedCheck_782_ == 0)
{
v___x_773_ = v___x_770_;
v_isShared_774_ = v_isSharedCheck_782_;
goto v_resetjp_772_;
}
else
{
lean_inc(v_a_771_);
lean_dec(v___x_770_);
v___x_773_ = lean_box(0);
v_isShared_774_ = v_isSharedCheck_782_;
goto v_resetjp_772_;
}
v_resetjp_772_:
{
lean_object* v___x_775_; lean_object* v___x_776_; uint8_t v___x_777_; lean_object* v___x_778_; lean_object* v___x_780_; 
v___x_775_ = l_Lean_Expr_cleanupAnnotations(v_a_771_);
v___x_776_ = lean_obj_once(&l_Lean_Meta_Structural_isInstNatPowInt___redArg___closed__1, &l_Lean_Meta_Structural_isInstNatPowInt___redArg___closed__1_once, _init_l_Lean_Meta_Structural_isInstNatPowInt___redArg___closed__1);
v___x_777_ = l_Lean_Expr_isConstOf(v___x_775_, v___x_776_);
lean_dec_ref(v___x_775_);
v___x_778_ = lean_box(v___x_777_);
if (v_isShared_774_ == 0)
{
lean_ctor_set(v___x_773_, 0, v___x_778_);
v___x_780_ = v___x_773_;
goto v_reusejp_779_;
}
else
{
lean_object* v_reuseFailAlloc_781_; 
v_reuseFailAlloc_781_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_781_, 0, v___x_778_);
v___x_780_ = v_reuseFailAlloc_781_;
goto v_reusejp_779_;
}
v_reusejp_779_:
{
return v___x_780_;
}
}
}
else
{
lean_object* v_a_783_; lean_object* v___x_785_; uint8_t v_isShared_786_; uint8_t v_isSharedCheck_790_; 
v_a_783_ = lean_ctor_get(v___x_770_, 0);
v_isSharedCheck_790_ = !lean_is_exclusive(v___x_770_);
if (v_isSharedCheck_790_ == 0)
{
v___x_785_ = v___x_770_;
v_isShared_786_ = v_isSharedCheck_790_;
goto v_resetjp_784_;
}
else
{
lean_inc(v_a_783_);
lean_dec(v___x_770_);
v___x_785_ = lean_box(0);
v_isShared_786_ = v_isSharedCheck_790_;
goto v_resetjp_784_;
}
v_resetjp_784_:
{
lean_object* v___x_788_; 
if (v_isShared_786_ == 0)
{
v___x_788_ = v___x_785_;
goto v_reusejp_787_;
}
else
{
lean_object* v_reuseFailAlloc_789_; 
v_reuseFailAlloc_789_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_789_, 0, v_a_783_);
v___x_788_ = v_reuseFailAlloc_789_;
goto v_reusejp_787_;
}
v_reusejp_787_:
{
return v___x_788_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstNatPowInt___redArg___boxed(lean_object* v_e_791_, lean_object* v_a_792_, lean_object* v_a_793_, lean_object* v_a_794_){
_start:
{
lean_object* v_res_795_; 
v_res_795_ = l_Lean_Meta_Structural_isInstNatPowInt___redArg(v_e_791_, v_a_792_, v_a_793_);
lean_dec(v_a_793_);
lean_dec(v_a_792_);
return v_res_795_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstNatPowInt(lean_object* v_e_796_, lean_object* v_a_797_, lean_object* v_a_798_, lean_object* v_a_799_, lean_object* v_a_800_){
_start:
{
lean_object* v___x_802_; 
v___x_802_ = l_Lean_Meta_Structural_isInstNatPowInt___redArg(v_e_796_, v_a_798_, v_a_800_);
return v___x_802_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstNatPowInt___boxed(lean_object* v_e_803_, lean_object* v_a_804_, lean_object* v_a_805_, lean_object* v_a_806_, lean_object* v_a_807_, lean_object* v_a_808_){
_start:
{
lean_object* v_res_809_; 
v_res_809_ = l_Lean_Meta_Structural_isInstNatPowInt(v_e_803_, v_a_804_, v_a_805_, v_a_806_, v_a_807_);
lean_dec(v_a_807_);
lean_dec_ref(v_a_806_);
lean_dec(v_a_805_);
lean_dec_ref(v_a_804_);
return v_res_809_;
}
}
static lean_object* _init_l_Lean_Meta_Structural_isInstPowInt___redArg___closed__0(void){
_start:
{
lean_object* v___x_810_; 
v___x_810_ = lean_mk_string_unchecked("instPowNat", 10, 10);
return v___x_810_;
}
}
static lean_object* _init_l_Lean_Meta_Structural_isInstPowInt___redArg___closed__1(void){
_start:
{
lean_object* v___x_811_; lean_object* v___x_812_; 
v___x_811_ = lean_obj_once(&l_Lean_Meta_Structural_isInstPowInt___redArg___closed__0, &l_Lean_Meta_Structural_isInstPowInt___redArg___closed__0_once, _init_l_Lean_Meta_Structural_isInstPowInt___redArg___closed__0);
v___x_812_ = l_Lean_Name_mkStr1(v___x_811_);
return v___x_812_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstPowInt___redArg(lean_object* v_e_813_, lean_object* v_a_814_, lean_object* v_a_815_){
_start:
{
lean_object* v___x_817_; 
v___x_817_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_813_, v_a_814_, v_a_815_);
if (lean_obj_tag(v___x_817_) == 0)
{
lean_object* v_a_818_; lean_object* v___x_820_; uint8_t v_isShared_821_; uint8_t v_isSharedCheck_837_; 
v_a_818_ = lean_ctor_get(v___x_817_, 0);
v_isSharedCheck_837_ = !lean_is_exclusive(v___x_817_);
if (v_isSharedCheck_837_ == 0)
{
v___x_820_ = v___x_817_;
v_isShared_821_ = v_isSharedCheck_837_;
goto v_resetjp_819_;
}
else
{
lean_inc(v_a_818_);
lean_dec(v___x_817_);
v___x_820_ = lean_box(0);
v_isShared_821_ = v_isSharedCheck_837_;
goto v_resetjp_819_;
}
v_resetjp_819_:
{
lean_object* v___x_828_; uint8_t v___x_829_; 
v___x_828_ = l_Lean_Expr_cleanupAnnotations(v_a_818_);
v___x_829_ = l_Lean_Expr_isApp(v___x_828_);
if (v___x_829_ == 0)
{
lean_dec_ref(v___x_828_);
goto v___jp_822_;
}
else
{
lean_object* v_arg_830_; lean_object* v___x_831_; uint8_t v___x_832_; 
v_arg_830_ = lean_ctor_get(v___x_828_, 1);
lean_inc_ref(v_arg_830_);
v___x_831_ = l_Lean_Expr_appFnCleanup___redArg(v___x_828_);
v___x_832_ = l_Lean_Expr_isApp(v___x_831_);
if (v___x_832_ == 0)
{
lean_dec_ref(v___x_831_);
lean_dec_ref(v_arg_830_);
goto v___jp_822_;
}
else
{
lean_object* v___x_833_; lean_object* v___x_834_; uint8_t v___x_835_; 
v___x_833_ = l_Lean_Expr_appFnCleanup___redArg(v___x_831_);
v___x_834_ = lean_obj_once(&l_Lean_Meta_Structural_isInstPowInt___redArg___closed__1, &l_Lean_Meta_Structural_isInstPowInt___redArg___closed__1_once, _init_l_Lean_Meta_Structural_isInstPowInt___redArg___closed__1);
v___x_835_ = l_Lean_Expr_isConstOf(v___x_833_, v___x_834_);
lean_dec_ref(v___x_833_);
if (v___x_835_ == 0)
{
lean_dec_ref(v_arg_830_);
goto v___jp_822_;
}
else
{
lean_object* v___x_836_; 
lean_del_object(v___x_820_);
v___x_836_ = l_Lean_Meta_Structural_isInstNatPowInt___redArg(v_arg_830_, v_a_814_, v_a_815_);
return v___x_836_;
}
}
}
v___jp_822_:
{
uint8_t v___x_823_; lean_object* v___x_824_; lean_object* v___x_826_; 
v___x_823_ = 0;
v___x_824_ = lean_box(v___x_823_);
if (v_isShared_821_ == 0)
{
lean_ctor_set(v___x_820_, 0, v___x_824_);
v___x_826_ = v___x_820_;
goto v_reusejp_825_;
}
else
{
lean_object* v_reuseFailAlloc_827_; 
v_reuseFailAlloc_827_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_827_, 0, v___x_824_);
v___x_826_ = v_reuseFailAlloc_827_;
goto v_reusejp_825_;
}
v_reusejp_825_:
{
return v___x_826_;
}
}
}
}
else
{
lean_object* v_a_838_; lean_object* v___x_840_; uint8_t v_isShared_841_; uint8_t v_isSharedCheck_845_; 
v_a_838_ = lean_ctor_get(v___x_817_, 0);
v_isSharedCheck_845_ = !lean_is_exclusive(v___x_817_);
if (v_isSharedCheck_845_ == 0)
{
v___x_840_ = v___x_817_;
v_isShared_841_ = v_isSharedCheck_845_;
goto v_resetjp_839_;
}
else
{
lean_inc(v_a_838_);
lean_dec(v___x_817_);
v___x_840_ = lean_box(0);
v_isShared_841_ = v_isSharedCheck_845_;
goto v_resetjp_839_;
}
v_resetjp_839_:
{
lean_object* v___x_843_; 
if (v_isShared_841_ == 0)
{
v___x_843_ = v___x_840_;
goto v_reusejp_842_;
}
else
{
lean_object* v_reuseFailAlloc_844_; 
v_reuseFailAlloc_844_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_844_, 0, v_a_838_);
v___x_843_ = v_reuseFailAlloc_844_;
goto v_reusejp_842_;
}
v_reusejp_842_:
{
return v___x_843_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstPowInt___redArg___boxed(lean_object* v_e_846_, lean_object* v_a_847_, lean_object* v_a_848_, lean_object* v_a_849_){
_start:
{
lean_object* v_res_850_; 
v_res_850_ = l_Lean_Meta_Structural_isInstPowInt___redArg(v_e_846_, v_a_847_, v_a_848_);
lean_dec(v_a_848_);
lean_dec(v_a_847_);
return v_res_850_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstPowInt(lean_object* v_e_851_, lean_object* v_a_852_, lean_object* v_a_853_, lean_object* v_a_854_, lean_object* v_a_855_){
_start:
{
lean_object* v___x_857_; 
v___x_857_ = l_Lean_Meta_Structural_isInstPowInt___redArg(v_e_851_, v_a_853_, v_a_855_);
return v___x_857_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstPowInt___boxed(lean_object* v_e_858_, lean_object* v_a_859_, lean_object* v_a_860_, lean_object* v_a_861_, lean_object* v_a_862_, lean_object* v_a_863_){
_start:
{
lean_object* v_res_864_; 
v_res_864_ = l_Lean_Meta_Structural_isInstPowInt(v_e_858_, v_a_859_, v_a_860_, v_a_861_, v_a_862_);
lean_dec(v_a_862_);
lean_dec_ref(v_a_861_);
lean_dec(v_a_860_);
lean_dec_ref(v_a_859_);
return v_res_864_;
}
}
static lean_object* _init_l_Lean_Meta_Structural_isInstHPowInt___redArg___closed__0(void){
_start:
{
lean_object* v___x_865_; 
v___x_865_ = lean_mk_string_unchecked("instHPow", 8, 8);
return v___x_865_;
}
}
static lean_object* _init_l_Lean_Meta_Structural_isInstHPowInt___redArg___closed__1(void){
_start:
{
lean_object* v___x_866_; lean_object* v___x_867_; 
v___x_866_ = lean_obj_once(&l_Lean_Meta_Structural_isInstHPowInt___redArg___closed__0, &l_Lean_Meta_Structural_isInstHPowInt___redArg___closed__0_once, _init_l_Lean_Meta_Structural_isInstHPowInt___redArg___closed__0);
v___x_867_ = l_Lean_Name_mkStr1(v___x_866_);
return v___x_867_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHPowInt___redArg(lean_object* v_e_868_, lean_object* v_a_869_, lean_object* v_a_870_){
_start:
{
lean_object* v___x_872_; 
v___x_872_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_868_, v_a_869_, v_a_870_);
if (lean_obj_tag(v___x_872_) == 0)
{
lean_object* v_a_873_; lean_object* v___x_875_; uint8_t v_isShared_876_; uint8_t v_isSharedCheck_894_; 
v_a_873_ = lean_ctor_get(v___x_872_, 0);
v_isSharedCheck_894_ = !lean_is_exclusive(v___x_872_);
if (v_isSharedCheck_894_ == 0)
{
v___x_875_ = v___x_872_;
v_isShared_876_ = v_isSharedCheck_894_;
goto v_resetjp_874_;
}
else
{
lean_inc(v_a_873_);
lean_dec(v___x_872_);
v___x_875_ = lean_box(0);
v_isShared_876_ = v_isSharedCheck_894_;
goto v_resetjp_874_;
}
v_resetjp_874_:
{
lean_object* v___x_883_; uint8_t v___x_884_; 
v___x_883_ = l_Lean_Expr_cleanupAnnotations(v_a_873_);
v___x_884_ = l_Lean_Expr_isApp(v___x_883_);
if (v___x_884_ == 0)
{
lean_dec_ref(v___x_883_);
goto v___jp_877_;
}
else
{
lean_object* v_arg_885_; lean_object* v___x_886_; uint8_t v___x_887_; 
v_arg_885_ = lean_ctor_get(v___x_883_, 1);
lean_inc_ref(v_arg_885_);
v___x_886_ = l_Lean_Expr_appFnCleanup___redArg(v___x_883_);
v___x_887_ = l_Lean_Expr_isApp(v___x_886_);
if (v___x_887_ == 0)
{
lean_dec_ref(v___x_886_);
lean_dec_ref(v_arg_885_);
goto v___jp_877_;
}
else
{
lean_object* v___x_888_; uint8_t v___x_889_; 
v___x_888_ = l_Lean_Expr_appFnCleanup___redArg(v___x_886_);
v___x_889_ = l_Lean_Expr_isApp(v___x_888_);
if (v___x_889_ == 0)
{
lean_dec_ref(v___x_888_);
lean_dec_ref(v_arg_885_);
goto v___jp_877_;
}
else
{
lean_object* v___x_890_; lean_object* v___x_891_; uint8_t v___x_892_; 
v___x_890_ = l_Lean_Expr_appFnCleanup___redArg(v___x_888_);
v___x_891_ = lean_obj_once(&l_Lean_Meta_Structural_isInstHPowInt___redArg___closed__1, &l_Lean_Meta_Structural_isInstHPowInt___redArg___closed__1_once, _init_l_Lean_Meta_Structural_isInstHPowInt___redArg___closed__1);
v___x_892_ = l_Lean_Expr_isConstOf(v___x_890_, v___x_891_);
lean_dec_ref(v___x_890_);
if (v___x_892_ == 0)
{
lean_dec_ref(v_arg_885_);
goto v___jp_877_;
}
else
{
lean_object* v___x_893_; 
lean_del_object(v___x_875_);
v___x_893_ = l_Lean_Meta_Structural_isInstPowInt___redArg(v_arg_885_, v_a_869_, v_a_870_);
return v___x_893_;
}
}
}
}
v___jp_877_:
{
uint8_t v___x_878_; lean_object* v___x_879_; lean_object* v___x_881_; 
v___x_878_ = 0;
v___x_879_ = lean_box(v___x_878_);
if (v_isShared_876_ == 0)
{
lean_ctor_set(v___x_875_, 0, v___x_879_);
v___x_881_ = v___x_875_;
goto v_reusejp_880_;
}
else
{
lean_object* v_reuseFailAlloc_882_; 
v_reuseFailAlloc_882_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_882_, 0, v___x_879_);
v___x_881_ = v_reuseFailAlloc_882_;
goto v_reusejp_880_;
}
v_reusejp_880_:
{
return v___x_881_;
}
}
}
}
else
{
lean_object* v_a_895_; lean_object* v___x_897_; uint8_t v_isShared_898_; uint8_t v_isSharedCheck_902_; 
v_a_895_ = lean_ctor_get(v___x_872_, 0);
v_isSharedCheck_902_ = !lean_is_exclusive(v___x_872_);
if (v_isSharedCheck_902_ == 0)
{
v___x_897_ = v___x_872_;
v_isShared_898_ = v_isSharedCheck_902_;
goto v_resetjp_896_;
}
else
{
lean_inc(v_a_895_);
lean_dec(v___x_872_);
v___x_897_ = lean_box(0);
v_isShared_898_ = v_isSharedCheck_902_;
goto v_resetjp_896_;
}
v_resetjp_896_:
{
lean_object* v___x_900_; 
if (v_isShared_898_ == 0)
{
v___x_900_ = v___x_897_;
goto v_reusejp_899_;
}
else
{
lean_object* v_reuseFailAlloc_901_; 
v_reuseFailAlloc_901_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_901_, 0, v_a_895_);
v___x_900_ = v_reuseFailAlloc_901_;
goto v_reusejp_899_;
}
v_reusejp_899_:
{
return v___x_900_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHPowInt___redArg___boxed(lean_object* v_e_903_, lean_object* v_a_904_, lean_object* v_a_905_, lean_object* v_a_906_){
_start:
{
lean_object* v_res_907_; 
v_res_907_ = l_Lean_Meta_Structural_isInstHPowInt___redArg(v_e_903_, v_a_904_, v_a_905_);
lean_dec(v_a_905_);
lean_dec(v_a_904_);
return v_res_907_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHPowInt(lean_object* v_e_908_, lean_object* v_a_909_, lean_object* v_a_910_, lean_object* v_a_911_, lean_object* v_a_912_){
_start:
{
lean_object* v___x_914_; 
v___x_914_ = l_Lean_Meta_Structural_isInstHPowInt___redArg(v_e_908_, v_a_910_, v_a_912_);
return v___x_914_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHPowInt___boxed(lean_object* v_e_915_, lean_object* v_a_916_, lean_object* v_a_917_, lean_object* v_a_918_, lean_object* v_a_919_, lean_object* v_a_920_){
_start:
{
lean_object* v_res_921_; 
v_res_921_ = l_Lean_Meta_Structural_isInstHPowInt(v_e_915_, v_a_916_, v_a_917_, v_a_918_, v_a_919_);
lean_dec(v_a_919_);
lean_dec_ref(v_a_918_);
lean_dec(v_a_917_);
lean_dec_ref(v_a_916_);
return v_res_921_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DefEq_isInstNegInt(lean_object* v_e_922_, lean_object* v_a_923_, lean_object* v_a_924_, lean_object* v_a_925_, lean_object* v_a_926_){
_start:
{
lean_object* v___x_928_; 
lean_inc_ref(v_e_922_);
v___x_928_ = l_Lean_Meta_Structural_isInstNegInt___redArg(v_e_922_, v_a_924_, v_a_926_);
if (lean_obj_tag(v___x_928_) == 0)
{
lean_object* v_a_929_; uint8_t v___x_930_; 
v_a_929_ = lean_ctor_get(v___x_928_, 0);
lean_inc(v_a_929_);
v___x_930_ = lean_unbox(v_a_929_);
lean_dec(v_a_929_);
if (v___x_930_ == 0)
{
lean_object* v___x_931_; lean_object* v___x_932_; 
lean_dec_ref(v___x_928_);
v___x_931_ = l_Lean_Int_mkInstNeg;
v___x_932_ = l_Lean_Meta_isDefEqI(v_e_922_, v___x_931_, v_a_923_, v_a_924_, v_a_925_, v_a_926_);
return v___x_932_;
}
else
{
lean_dec_ref(v_e_922_);
return v___x_928_;
}
}
else
{
lean_dec_ref(v_e_922_);
return v___x_928_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DefEq_isInstNegInt___boxed(lean_object* v_e_933_, lean_object* v_a_934_, lean_object* v_a_935_, lean_object* v_a_936_, lean_object* v_a_937_, lean_object* v_a_938_){
_start:
{
lean_object* v_res_939_; 
v_res_939_ = l_Lean_Meta_DefEq_isInstNegInt(v_e_933_, v_a_934_, v_a_935_, v_a_936_, v_a_937_);
lean_dec(v_a_937_);
lean_dec_ref(v_a_936_);
lean_dec(v_a_935_);
lean_dec_ref(v_a_934_);
return v_res_939_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DefEq_isInstAddInt(lean_object* v_e_940_, lean_object* v_a_941_, lean_object* v_a_942_, lean_object* v_a_943_, lean_object* v_a_944_){
_start:
{
lean_object* v___x_946_; 
lean_inc_ref(v_e_940_);
v___x_946_ = l_Lean_Meta_Structural_isInstAddInt___redArg(v_e_940_, v_a_942_, v_a_944_);
if (lean_obj_tag(v___x_946_) == 0)
{
lean_object* v_a_947_; uint8_t v___x_948_; 
v_a_947_ = lean_ctor_get(v___x_946_, 0);
lean_inc(v_a_947_);
v___x_948_ = lean_unbox(v_a_947_);
lean_dec(v_a_947_);
if (v___x_948_ == 0)
{
lean_object* v___x_949_; lean_object* v___x_950_; 
lean_dec_ref(v___x_946_);
v___x_949_ = l_Lean_Int_mkInstAdd;
v___x_950_ = l_Lean_Meta_isDefEqI(v_e_940_, v___x_949_, v_a_941_, v_a_942_, v_a_943_, v_a_944_);
return v___x_950_;
}
else
{
lean_dec_ref(v_e_940_);
return v___x_946_;
}
}
else
{
lean_dec_ref(v_e_940_);
return v___x_946_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DefEq_isInstAddInt___boxed(lean_object* v_e_951_, lean_object* v_a_952_, lean_object* v_a_953_, lean_object* v_a_954_, lean_object* v_a_955_, lean_object* v_a_956_){
_start:
{
lean_object* v_res_957_; 
v_res_957_ = l_Lean_Meta_DefEq_isInstAddInt(v_e_951_, v_a_952_, v_a_953_, v_a_954_, v_a_955_);
lean_dec(v_a_955_);
lean_dec_ref(v_a_954_);
lean_dec(v_a_953_);
lean_dec_ref(v_a_952_);
return v_res_957_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DefEq_isInstHAddInt(lean_object* v_e_958_, lean_object* v_a_959_, lean_object* v_a_960_, lean_object* v_a_961_, lean_object* v_a_962_){
_start:
{
lean_object* v___x_964_; 
lean_inc_ref(v_e_958_);
v___x_964_ = l_Lean_Meta_Structural_isInstHAddInt___redArg(v_e_958_, v_a_960_, v_a_962_);
if (lean_obj_tag(v___x_964_) == 0)
{
lean_object* v_a_965_; uint8_t v___x_966_; 
v_a_965_ = lean_ctor_get(v___x_964_, 0);
lean_inc(v_a_965_);
v___x_966_ = lean_unbox(v_a_965_);
lean_dec(v_a_965_);
if (v___x_966_ == 0)
{
lean_object* v___x_967_; lean_object* v___x_968_; 
lean_dec_ref(v___x_964_);
v___x_967_ = l_Lean_Int_mkInstHAdd;
v___x_968_ = l_Lean_Meta_isDefEqI(v_e_958_, v___x_967_, v_a_959_, v_a_960_, v_a_961_, v_a_962_);
return v___x_968_;
}
else
{
lean_dec_ref(v_e_958_);
return v___x_964_;
}
}
else
{
lean_dec_ref(v_e_958_);
return v___x_964_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DefEq_isInstHAddInt___boxed(lean_object* v_e_969_, lean_object* v_a_970_, lean_object* v_a_971_, lean_object* v_a_972_, lean_object* v_a_973_, lean_object* v_a_974_){
_start:
{
lean_object* v_res_975_; 
v_res_975_ = l_Lean_Meta_DefEq_isInstHAddInt(v_e_969_, v_a_970_, v_a_971_, v_a_972_, v_a_973_);
lean_dec(v_a_973_);
lean_dec_ref(v_a_972_);
lean_dec(v_a_971_);
lean_dec_ref(v_a_970_);
return v_res_975_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DefEq_isInstSubInt(lean_object* v_e_976_, lean_object* v_a_977_, lean_object* v_a_978_, lean_object* v_a_979_, lean_object* v_a_980_){
_start:
{
lean_object* v___x_982_; 
lean_inc_ref(v_e_976_);
v___x_982_ = l_Lean_Meta_Structural_isInstSubInt___redArg(v_e_976_, v_a_978_, v_a_980_);
if (lean_obj_tag(v___x_982_) == 0)
{
lean_object* v_a_983_; uint8_t v___x_984_; 
v_a_983_ = lean_ctor_get(v___x_982_, 0);
lean_inc(v_a_983_);
v___x_984_ = lean_unbox(v_a_983_);
lean_dec(v_a_983_);
if (v___x_984_ == 0)
{
lean_object* v___x_985_; lean_object* v___x_986_; 
lean_dec_ref(v___x_982_);
v___x_985_ = l_Lean_Int_mkInstSub;
v___x_986_ = l_Lean_Meta_isDefEqI(v_e_976_, v___x_985_, v_a_977_, v_a_978_, v_a_979_, v_a_980_);
return v___x_986_;
}
else
{
lean_dec_ref(v_e_976_);
return v___x_982_;
}
}
else
{
lean_dec_ref(v_e_976_);
return v___x_982_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DefEq_isInstSubInt___boxed(lean_object* v_e_987_, lean_object* v_a_988_, lean_object* v_a_989_, lean_object* v_a_990_, lean_object* v_a_991_, lean_object* v_a_992_){
_start:
{
lean_object* v_res_993_; 
v_res_993_ = l_Lean_Meta_DefEq_isInstSubInt(v_e_987_, v_a_988_, v_a_989_, v_a_990_, v_a_991_);
lean_dec(v_a_991_);
lean_dec_ref(v_a_990_);
lean_dec(v_a_989_);
lean_dec_ref(v_a_988_);
return v_res_993_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DefEq_isInstHSubInt(lean_object* v_e_994_, lean_object* v_a_995_, lean_object* v_a_996_, lean_object* v_a_997_, lean_object* v_a_998_){
_start:
{
lean_object* v___x_1000_; 
lean_inc_ref(v_e_994_);
v___x_1000_ = l_Lean_Meta_Structural_isInstHSubInt___redArg(v_e_994_, v_a_996_, v_a_998_);
if (lean_obj_tag(v___x_1000_) == 0)
{
lean_object* v_a_1001_; uint8_t v___x_1002_; 
v_a_1001_ = lean_ctor_get(v___x_1000_, 0);
lean_inc(v_a_1001_);
v___x_1002_ = lean_unbox(v_a_1001_);
lean_dec(v_a_1001_);
if (v___x_1002_ == 0)
{
lean_object* v___x_1003_; lean_object* v___x_1004_; 
lean_dec_ref(v___x_1000_);
v___x_1003_ = l_Lean_Int_mkInstHSub;
v___x_1004_ = l_Lean_Meta_isDefEqI(v_e_994_, v___x_1003_, v_a_995_, v_a_996_, v_a_997_, v_a_998_);
return v___x_1004_;
}
else
{
lean_dec_ref(v_e_994_);
return v___x_1000_;
}
}
else
{
lean_dec_ref(v_e_994_);
return v___x_1000_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DefEq_isInstHSubInt___boxed(lean_object* v_e_1005_, lean_object* v_a_1006_, lean_object* v_a_1007_, lean_object* v_a_1008_, lean_object* v_a_1009_, lean_object* v_a_1010_){
_start:
{
lean_object* v_res_1011_; 
v_res_1011_ = l_Lean_Meta_DefEq_isInstHSubInt(v_e_1005_, v_a_1006_, v_a_1007_, v_a_1008_, v_a_1009_);
lean_dec(v_a_1009_);
lean_dec_ref(v_a_1008_);
lean_dec(v_a_1007_);
lean_dec_ref(v_a_1006_);
return v_res_1011_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DefEq_isInstMulInt(lean_object* v_e_1012_, lean_object* v_a_1013_, lean_object* v_a_1014_, lean_object* v_a_1015_, lean_object* v_a_1016_){
_start:
{
lean_object* v___x_1018_; 
lean_inc_ref(v_e_1012_);
v___x_1018_ = l_Lean_Meta_Structural_isInstMulInt___redArg(v_e_1012_, v_a_1014_, v_a_1016_);
if (lean_obj_tag(v___x_1018_) == 0)
{
lean_object* v_a_1019_; uint8_t v___x_1020_; 
v_a_1019_ = lean_ctor_get(v___x_1018_, 0);
lean_inc(v_a_1019_);
v___x_1020_ = lean_unbox(v_a_1019_);
lean_dec(v_a_1019_);
if (v___x_1020_ == 0)
{
lean_object* v___x_1021_; lean_object* v___x_1022_; 
lean_dec_ref(v___x_1018_);
v___x_1021_ = l_Lean_Int_mkInstMul;
v___x_1022_ = l_Lean_Meta_isDefEqI(v_e_1012_, v___x_1021_, v_a_1013_, v_a_1014_, v_a_1015_, v_a_1016_);
return v___x_1022_;
}
else
{
lean_dec_ref(v_e_1012_);
return v___x_1018_;
}
}
else
{
lean_dec_ref(v_e_1012_);
return v___x_1018_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DefEq_isInstMulInt___boxed(lean_object* v_e_1023_, lean_object* v_a_1024_, lean_object* v_a_1025_, lean_object* v_a_1026_, lean_object* v_a_1027_, lean_object* v_a_1028_){
_start:
{
lean_object* v_res_1029_; 
v_res_1029_ = l_Lean_Meta_DefEq_isInstMulInt(v_e_1023_, v_a_1024_, v_a_1025_, v_a_1026_, v_a_1027_);
lean_dec(v_a_1027_);
lean_dec_ref(v_a_1026_);
lean_dec(v_a_1025_);
lean_dec_ref(v_a_1024_);
return v_res_1029_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DefEq_isInstHMulInt(lean_object* v_e_1030_, lean_object* v_a_1031_, lean_object* v_a_1032_, lean_object* v_a_1033_, lean_object* v_a_1034_){
_start:
{
lean_object* v___x_1036_; 
lean_inc_ref(v_e_1030_);
v___x_1036_ = l_Lean_Meta_Structural_isInstHMulInt___redArg(v_e_1030_, v_a_1032_, v_a_1034_);
if (lean_obj_tag(v___x_1036_) == 0)
{
lean_object* v_a_1037_; uint8_t v___x_1038_; 
v_a_1037_ = lean_ctor_get(v___x_1036_, 0);
lean_inc(v_a_1037_);
v___x_1038_ = lean_unbox(v_a_1037_);
lean_dec(v_a_1037_);
if (v___x_1038_ == 0)
{
lean_object* v___x_1039_; lean_object* v___x_1040_; 
lean_dec_ref(v___x_1036_);
v___x_1039_ = l_Lean_Int_mkInstHMul;
v___x_1040_ = l_Lean_Meta_isDefEqI(v_e_1030_, v___x_1039_, v_a_1031_, v_a_1032_, v_a_1033_, v_a_1034_);
return v___x_1040_;
}
else
{
lean_dec_ref(v_e_1030_);
return v___x_1036_;
}
}
else
{
lean_dec_ref(v_e_1030_);
return v___x_1036_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DefEq_isInstHMulInt___boxed(lean_object* v_e_1041_, lean_object* v_a_1042_, lean_object* v_a_1043_, lean_object* v_a_1044_, lean_object* v_a_1045_, lean_object* v_a_1046_){
_start:
{
lean_object* v_res_1047_; 
v_res_1047_ = l_Lean_Meta_DefEq_isInstHMulInt(v_e_1041_, v_a_1042_, v_a_1043_, v_a_1044_, v_a_1045_);
lean_dec(v_a_1045_);
lean_dec_ref(v_a_1044_);
lean_dec(v_a_1043_);
lean_dec_ref(v_a_1042_);
return v_res_1047_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DefEq_isInstLTInt(lean_object* v_e_1048_, lean_object* v_a_1049_, lean_object* v_a_1050_, lean_object* v_a_1051_, lean_object* v_a_1052_){
_start:
{
lean_object* v___x_1054_; 
lean_inc_ref(v_e_1048_);
v___x_1054_ = l_Lean_Meta_Structural_isInstLTInt___redArg(v_e_1048_, v_a_1050_, v_a_1052_);
if (lean_obj_tag(v___x_1054_) == 0)
{
lean_object* v_a_1055_; uint8_t v___x_1056_; 
v_a_1055_ = lean_ctor_get(v___x_1054_, 0);
lean_inc(v_a_1055_);
v___x_1056_ = lean_unbox(v_a_1055_);
lean_dec(v_a_1055_);
if (v___x_1056_ == 0)
{
lean_object* v___x_1057_; lean_object* v___x_1058_; 
lean_dec_ref(v___x_1054_);
v___x_1057_ = l_Lean_Int_mkInstLT;
v___x_1058_ = l_Lean_Meta_isDefEqI(v_e_1048_, v___x_1057_, v_a_1049_, v_a_1050_, v_a_1051_, v_a_1052_);
return v___x_1058_;
}
else
{
lean_dec_ref(v_e_1048_);
return v___x_1054_;
}
}
else
{
lean_dec_ref(v_e_1048_);
return v___x_1054_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DefEq_isInstLTInt___boxed(lean_object* v_e_1059_, lean_object* v_a_1060_, lean_object* v_a_1061_, lean_object* v_a_1062_, lean_object* v_a_1063_, lean_object* v_a_1064_){
_start:
{
lean_object* v_res_1065_; 
v_res_1065_ = l_Lean_Meta_DefEq_isInstLTInt(v_e_1059_, v_a_1060_, v_a_1061_, v_a_1062_, v_a_1063_);
lean_dec(v_a_1063_);
lean_dec_ref(v_a_1062_);
lean_dec(v_a_1061_);
lean_dec_ref(v_a_1060_);
return v_res_1065_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DefEq_isInstLEInt(lean_object* v_e_1066_, lean_object* v_a_1067_, lean_object* v_a_1068_, lean_object* v_a_1069_, lean_object* v_a_1070_){
_start:
{
lean_object* v___x_1072_; 
lean_inc_ref(v_e_1066_);
v___x_1072_ = l_Lean_Meta_Structural_isInstLEInt___redArg(v_e_1066_, v_a_1068_, v_a_1070_);
if (lean_obj_tag(v___x_1072_) == 0)
{
lean_object* v_a_1073_; uint8_t v___x_1074_; 
v_a_1073_ = lean_ctor_get(v___x_1072_, 0);
lean_inc(v_a_1073_);
v___x_1074_ = lean_unbox(v_a_1073_);
lean_dec(v_a_1073_);
if (v___x_1074_ == 0)
{
lean_object* v___x_1075_; lean_object* v___x_1076_; 
lean_dec_ref(v___x_1072_);
v___x_1075_ = l_Lean_Int_mkInstLE;
v___x_1076_ = l_Lean_Meta_isDefEqI(v_e_1066_, v___x_1075_, v_a_1067_, v_a_1068_, v_a_1069_, v_a_1070_);
return v___x_1076_;
}
else
{
lean_dec_ref(v_e_1066_);
return v___x_1072_;
}
}
else
{
lean_dec_ref(v_e_1066_);
return v___x_1072_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DefEq_isInstLEInt___boxed(lean_object* v_e_1077_, lean_object* v_a_1078_, lean_object* v_a_1079_, lean_object* v_a_1080_, lean_object* v_a_1081_, lean_object* v_a_1082_){
_start:
{
lean_object* v_res_1083_; 
v_res_1083_ = l_Lean_Meta_DefEq_isInstLEInt(v_e_1077_, v_a_1078_, v_a_1079_, v_a_1080_, v_a_1081_);
lean_dec(v_a_1081_);
lean_dec_ref(v_a_1080_);
lean_dec(v_a_1079_);
lean_dec_ref(v_a_1078_);
return v_res_1083_;
}
}
static lean_object* _init_l_Lean_Meta_DefEq_isInstDvdInt___closed__0(void){
_start:
{
lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; 
v___x_1084_ = lean_box(0);
v___x_1085_ = lean_obj_once(&l_Lean_Meta_Structural_isInstDvdInt___redArg___closed__1, &l_Lean_Meta_Structural_isInstDvdInt___redArg___closed__1_once, _init_l_Lean_Meta_Structural_isInstDvdInt___redArg___closed__1);
v___x_1086_ = l_Lean_mkConst(v___x_1085_, v___x_1084_);
return v___x_1086_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DefEq_isInstDvdInt(lean_object* v_e_1087_, lean_object* v_a_1088_, lean_object* v_a_1089_, lean_object* v_a_1090_, lean_object* v_a_1091_){
_start:
{
lean_object* v___x_1093_; 
lean_inc_ref(v_e_1087_);
v___x_1093_ = l_Lean_Meta_Structural_isInstDvdInt___redArg(v_e_1087_, v_a_1089_, v_a_1091_);
if (lean_obj_tag(v___x_1093_) == 0)
{
lean_object* v_a_1094_; uint8_t v___x_1095_; 
v_a_1094_ = lean_ctor_get(v___x_1093_, 0);
lean_inc(v_a_1094_);
v___x_1095_ = lean_unbox(v_a_1094_);
lean_dec(v_a_1094_);
if (v___x_1095_ == 0)
{
lean_object* v___x_1096_; lean_object* v___x_1097_; 
lean_dec_ref(v___x_1093_);
v___x_1096_ = lean_obj_once(&l_Lean_Meta_DefEq_isInstDvdInt___closed__0, &l_Lean_Meta_DefEq_isInstDvdInt___closed__0_once, _init_l_Lean_Meta_DefEq_isInstDvdInt___closed__0);
v___x_1097_ = l_Lean_Meta_isDefEqI(v_e_1087_, v___x_1096_, v_a_1088_, v_a_1089_, v_a_1090_, v_a_1091_);
return v___x_1097_;
}
else
{
lean_dec_ref(v_e_1087_);
return v___x_1093_;
}
}
else
{
lean_dec_ref(v_e_1087_);
return v___x_1093_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DefEq_isInstDvdInt___boxed(lean_object* v_e_1098_, lean_object* v_a_1099_, lean_object* v_a_1100_, lean_object* v_a_1101_, lean_object* v_a_1102_, lean_object* v_a_1103_){
_start:
{
lean_object* v_res_1104_; 
v_res_1104_ = l_Lean_Meta_DefEq_isInstDvdInt(v_e_1098_, v_a_1099_, v_a_1100_, v_a_1101_, v_a_1102_);
lean_dec(v_a_1102_);
lean_dec_ref(v_a_1101_);
lean_dec(v_a_1100_);
lean_dec_ref(v_a_1099_);
return v_res_1104_;
}
}
lean_object* runtime_initialize_Lean_Meta_Basic(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_IntInstTesters(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_IntInstTesters(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_IntInstTesters(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_IntInstTesters(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_IntInstTesters(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_IntInstTesters(builtin);
}
#ifdef __cplusplus
}
#endif

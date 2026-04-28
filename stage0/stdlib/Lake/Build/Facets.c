// Lean compiler output
// Module: Lake.Build.Facets
// Imports: public import Lake.Build.Job.Basic public import Lake.Build.ModuleArtifacts meta import all Lake.Build.Data
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
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Lean_Name_reprPrec(lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_BuildTrace_nil(lean_object*);
extern lean_object* l_Lean_instInhabitedImportArtifacts_default;
static lean_once_cell_t l_Lake_instReprModuleFacet_repr___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprModuleFacet_repr___redArg___closed__0;
static lean_once_cell_t l_Lake_instReprModuleFacet_repr___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprModuleFacet_repr___redArg___closed__1;
static lean_once_cell_t l_Lake_instReprModuleFacet_repr___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprModuleFacet_repr___redArg___closed__2;
static lean_once_cell_t l_Lake_instReprModuleFacet_repr___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprModuleFacet_repr___redArg___closed__3;
static lean_once_cell_t l_Lake_instReprModuleFacet_repr___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprModuleFacet_repr___redArg___closed__4;
static lean_once_cell_t l_Lake_instReprModuleFacet_repr___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprModuleFacet_repr___redArg___closed__5;
static lean_once_cell_t l_Lake_instReprModuleFacet_repr___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprModuleFacet_repr___redArg___closed__6;
static lean_once_cell_t l_Lake_instReprModuleFacet_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprModuleFacet_repr___redArg___closed__7;
static lean_once_cell_t l_Lake_instReprModuleFacet_repr___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprModuleFacet_repr___redArg___closed__8;
static lean_once_cell_t l_Lake_instReprModuleFacet_repr___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprModuleFacet_repr___redArg___closed__9;
static lean_once_cell_t l_Lake_instReprModuleFacet_repr___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprModuleFacet_repr___redArg___closed__10;
static lean_once_cell_t l_Lake_instReprModuleFacet_repr___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprModuleFacet_repr___redArg___closed__11;
static lean_once_cell_t l_Lake_instReprModuleFacet_repr___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprModuleFacet_repr___redArg___closed__12;
static lean_once_cell_t l_Lake_instReprModuleFacet_repr___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprModuleFacet_repr___redArg___closed__13;
static lean_once_cell_t l_Lake_instReprModuleFacet_repr___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprModuleFacet_repr___redArg___closed__14;
static lean_once_cell_t l_Lake_instReprModuleFacet_repr___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprModuleFacet_repr___redArg___closed__15;
static lean_once_cell_t l_Lake_instReprModuleFacet_repr___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprModuleFacet_repr___redArg___closed__16;
static lean_once_cell_t l_Lake_instReprModuleFacet_repr___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprModuleFacet_repr___redArg___closed__17;
static lean_once_cell_t l_Lake_instReprModuleFacet_repr___redArg___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprModuleFacet_repr___redArg___closed__18;
LEAN_EXPORT lean_object* l_Lake_instReprModuleFacet_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instReprModuleFacet_repr(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instReprModuleFacet_repr___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instReprModuleFacet___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instReprModuleFacet(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instCoeDepNameModuleFacetOfFamilyOutFacetOut___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instCoeDepNameModuleFacetOfFamilyOutFacetOut___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instCoeDepNameModuleFacetOfFamilyOutFacetOut(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instCoeDepNameModuleFacetOfFamilyOutFacetOut___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_Module_leanFacet___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Module_leanFacet___closed__0;
static lean_once_cell_t l_Lake_Module_leanFacet___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Module_leanFacet___closed__1;
static lean_once_cell_t l_Lake_Module_leanFacet___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Module_leanFacet___closed__2;
LEAN_EXPORT lean_object* l_Lake_Module_leanFacet;
static lean_once_cell_t l_Lake_Module_headerFacet___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Module_headerFacet___closed__0;
static lean_once_cell_t l_Lake_Module_headerFacet___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Module_headerFacet___closed__1;
LEAN_EXPORT lean_object* l_Lake_Module_headerFacet;
static lean_once_cell_t l_Lake_Module_setupFacet___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Module_setupFacet___closed__0;
static lean_once_cell_t l_Lake_Module_setupFacet___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Module_setupFacet___closed__1;
LEAN_EXPORT lean_object* l_Lake_Module_setupFacet;
static lean_once_cell_t l_Lake_Module_depsFacet___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Module_depsFacet___closed__0;
static lean_once_cell_t l_Lake_Module_depsFacet___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Module_depsFacet___closed__1;
LEAN_EXPORT lean_object* l_Lake_Module_depsFacet;
static lean_once_cell_t l_Lake_instInhabitedModuleImportInfo_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instInhabitedModuleImportInfo_default___closed__0;
static lean_once_cell_t l_Lake_instInhabitedModuleImportInfo_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instInhabitedModuleImportInfo_default___closed__1;
static lean_once_cell_t l_Lake_instInhabitedModuleImportInfo_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instInhabitedModuleImportInfo_default___closed__2;
LEAN_EXPORT lean_object* l_Lake_instInhabitedModuleImportInfo_default;
LEAN_EXPORT lean_object* l_Lake_instInhabitedModuleImportInfo;
static lean_once_cell_t l_Lake_Module_importInfoFacet___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Module_importInfoFacet___closed__0;
static lean_once_cell_t l_Lake_Module_importInfoFacet___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Module_importInfoFacet___closed__1;
LEAN_EXPORT lean_object* l_Lake_Module_importInfoFacet;
static lean_once_cell_t l_Lake_instInhabitedModuleExportInfo_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instInhabitedModuleExportInfo_default___closed__0;
LEAN_EXPORT lean_object* l_Lake_instInhabitedModuleExportInfo_default;
LEAN_EXPORT lean_object* l_Lake_instInhabitedModuleExportInfo;
static lean_once_cell_t l_Lake_Module_exportInfoFacet___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Module_exportInfoFacet___closed__0;
static lean_once_cell_t l_Lake_Module_exportInfoFacet___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Module_exportInfoFacet___closed__1;
LEAN_EXPORT lean_object* l_Lake_Module_exportInfoFacet;
static lean_once_cell_t l_Lake_Module_importArtsFacet___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Module_importArtsFacet___closed__0;
static lean_once_cell_t l_Lake_Module_importArtsFacet___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Module_importArtsFacet___closed__1;
LEAN_EXPORT lean_object* l_Lake_Module_importArtsFacet;
static lean_once_cell_t l_Lake_Module_importAllArtsFacet___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Module_importAllArtsFacet___closed__0;
static lean_once_cell_t l_Lake_Module_importAllArtsFacet___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Module_importAllArtsFacet___closed__1;
LEAN_EXPORT lean_object* l_Lake_Module_importAllArtsFacet;
static lean_once_cell_t l_Lake_Module_leanArtsFacet___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Module_leanArtsFacet___closed__0;
static lean_once_cell_t l_Lake_Module_leanArtsFacet___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Module_leanArtsFacet___closed__1;
LEAN_EXPORT lean_object* l_Lake_Module_leanArtsFacet;
static lean_once_cell_t l_Lake_Module_ltarFacet___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Module_ltarFacet___closed__0;
static lean_once_cell_t l_Lake_Module_ltarFacet___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Module_ltarFacet___closed__1;
LEAN_EXPORT lean_object* l_Lake_Module_ltarFacet;
static lean_once_cell_t l_Lake_Module_oleanFacet___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Module_oleanFacet___closed__0;
static lean_once_cell_t l_Lake_Module_oleanFacet___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Module_oleanFacet___closed__1;
LEAN_EXPORT lean_object* l_Lake_Module_oleanFacet;
static lean_once_cell_t l_Lake_Module_oleanServerFacet___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Module_oleanServerFacet___closed__0;
static lean_once_cell_t l_Lake_Module_oleanServerFacet___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Module_oleanServerFacet___closed__1;
LEAN_EXPORT lean_object* l_Lake_Module_oleanServerFacet;
static lean_once_cell_t l_Lake_Module_oleanPrivateFacet___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Module_oleanPrivateFacet___closed__0;
static lean_once_cell_t l_Lake_Module_oleanPrivateFacet___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Module_oleanPrivateFacet___closed__1;
LEAN_EXPORT lean_object* l_Lake_Module_oleanPrivateFacet;
static lean_once_cell_t l_Lake_Module_ileanFacet___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Module_ileanFacet___closed__0;
static lean_once_cell_t l_Lake_Module_ileanFacet___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Module_ileanFacet___closed__1;
LEAN_EXPORT lean_object* l_Lake_Module_ileanFacet;
static lean_once_cell_t l_Lake_Module_irFacet___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Module_irFacet___closed__0;
static lean_once_cell_t l_Lake_Module_irFacet___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Module_irFacet___closed__1;
LEAN_EXPORT lean_object* l_Lake_Module_irFacet;
static lean_once_cell_t l_Lake_Module_cFacet___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Module_cFacet___closed__0;
static lean_once_cell_t l_Lake_Module_cFacet___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Module_cFacet___closed__1;
LEAN_EXPORT lean_object* l_Lake_Module_cFacet;
static lean_once_cell_t l_Lake_Module_bcFacet___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Module_bcFacet___closed__0;
static lean_once_cell_t l_Lake_Module_bcFacet___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Module_bcFacet___closed__1;
LEAN_EXPORT lean_object* l_Lake_Module_bcFacet;
static lean_once_cell_t l_Lake_Module_coFacet___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Module_coFacet___closed__0;
static lean_once_cell_t l_Lake_Module_coFacet___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Module_coFacet___closed__1;
LEAN_EXPORT lean_object* l_Lake_Module_coFacet;
static lean_once_cell_t l_Lake_Module_coExportFacet___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Module_coExportFacet___closed__0;
static lean_once_cell_t l_Lake_Module_coExportFacet___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Module_coExportFacet___closed__1;
LEAN_EXPORT lean_object* l_Lake_Module_coExportFacet;
static lean_once_cell_t l_Lake_Module_coNoExportFacet___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Module_coNoExportFacet___closed__0;
static lean_once_cell_t l_Lake_Module_coNoExportFacet___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Module_coNoExportFacet___closed__1;
LEAN_EXPORT lean_object* l_Lake_Module_coNoExportFacet;
static lean_once_cell_t l_Lake_Module_bcoFacet___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Module_bcoFacet___closed__0;
LEAN_EXPORT lean_object* l_Lake_Module_bcoFacet;
static lean_once_cell_t l_Lake_Module_oFacet___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Module_oFacet___closed__0;
LEAN_EXPORT lean_object* l_Lake_Module_oFacet;
static lean_once_cell_t l_Lake_Module_oExportFacet___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Module_oExportFacet___closed__0;
LEAN_EXPORT lean_object* l_Lake_Module_oExportFacet;
static lean_once_cell_t l_Lake_Module_oNoExportFacet___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Module_oNoExportFacet___closed__0;
LEAN_EXPORT lean_object* l_Lake_Module_oNoExportFacet;
static lean_once_cell_t l_Lake_Package_optBuildCacheFacet___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Package_optBuildCacheFacet___closed__0;
static lean_once_cell_t l_Lake_Package_optBuildCacheFacet___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Package_optBuildCacheFacet___closed__1;
static lean_once_cell_t l_Lake_Package_optBuildCacheFacet___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Package_optBuildCacheFacet___closed__2;
LEAN_EXPORT lean_object* l_Lake_Package_optBuildCacheFacet;
static lean_once_cell_t l_Lake_Package_buildCacheFacet___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Package_buildCacheFacet___closed__0;
static lean_once_cell_t l_Lake_Package_buildCacheFacet___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Package_buildCacheFacet___closed__1;
LEAN_EXPORT lean_object* l_Lake_Package_buildCacheFacet;
static lean_once_cell_t l_Lake_Package_optReservoirBarrelFacet___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Package_optReservoirBarrelFacet___closed__0;
static lean_once_cell_t l_Lake_Package_optReservoirBarrelFacet___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Package_optReservoirBarrelFacet___closed__1;
LEAN_EXPORT lean_object* l_Lake_Package_optReservoirBarrelFacet;
static lean_once_cell_t l_Lake_Package_reservoirBarrelFacet___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Package_reservoirBarrelFacet___closed__0;
static lean_once_cell_t l_Lake_Package_reservoirBarrelFacet___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Package_reservoirBarrelFacet___closed__1;
LEAN_EXPORT lean_object* l_Lake_Package_reservoirBarrelFacet;
static lean_once_cell_t l_Lake_Package_optGitHubReleaseFacet___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Package_optGitHubReleaseFacet___closed__0;
static lean_once_cell_t l_Lake_Package_optGitHubReleaseFacet___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Package_optGitHubReleaseFacet___closed__1;
LEAN_EXPORT lean_object* l_Lake_Package_optGitHubReleaseFacet;
static lean_once_cell_t l_Lake_Package_gitHubReleaseFacet___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Package_gitHubReleaseFacet___closed__0;
static lean_once_cell_t l_Lake_Package_gitHubReleaseFacet___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Package_gitHubReleaseFacet___closed__1;
LEAN_EXPORT lean_object* l_Lake_Package_gitHubReleaseFacet;
static lean_once_cell_t l_Lake_Package_extraDepFacet___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Package_extraDepFacet___closed__0;
static lean_once_cell_t l_Lake_Package_extraDepFacet___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Package_extraDepFacet___closed__1;
LEAN_EXPORT lean_object* l_Lake_Package_extraDepFacet;
static lean_once_cell_t l_Lake_LeanLib_defaultFacet___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLib_defaultFacet___closed__0;
static lean_once_cell_t l_Lake_LeanLib_defaultFacet___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLib_defaultFacet___closed__1;
static lean_once_cell_t l_Lake_LeanLib_defaultFacet___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLib_defaultFacet___closed__2;
LEAN_EXPORT lean_object* l_Lake_LeanLib_defaultFacet;
static lean_once_cell_t l_Lake_LeanLib_leanArtsFacet___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLib_leanArtsFacet___closed__0;
LEAN_EXPORT lean_object* l_Lake_LeanLib_leanArtsFacet;
static lean_once_cell_t l_Lake_LeanLib_staticFacet___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLib_staticFacet___closed__0;
static lean_once_cell_t l_Lake_LeanLib_staticFacet___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLib_staticFacet___closed__1;
LEAN_EXPORT lean_object* l_Lake_LeanLib_staticFacet;
static lean_once_cell_t l_Lake_LeanLib_staticExportFacet___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLib_staticExportFacet___closed__0;
LEAN_EXPORT lean_object* l_Lake_LeanLib_staticExportFacet;
static lean_once_cell_t l_Lake_LeanLib_sharedFacet___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLib_sharedFacet___closed__0;
static lean_once_cell_t l_Lake_LeanLib_sharedFacet___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLib_sharedFacet___closed__1;
LEAN_EXPORT lean_object* l_Lake_LeanLib_sharedFacet;
static lean_once_cell_t l_Lake_LeanLib_extraDepFacet___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLib_extraDepFacet___closed__0;
LEAN_EXPORT lean_object* l_Lake_LeanLib_extraDepFacet;
static lean_once_cell_t l_Lake_LeanExe_defaultFacet___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanExe_defaultFacet___closed__0;
static lean_once_cell_t l_Lake_LeanExe_defaultFacet___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanExe_defaultFacet___closed__1;
LEAN_EXPORT lean_object* l_Lake_LeanExe_defaultFacet;
static lean_once_cell_t l_Lake_LeanExe_exeFacet___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanExe_exeFacet___closed__0;
static lean_once_cell_t l_Lake_LeanExe_exeFacet___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanExe_exeFacet___closed__1;
LEAN_EXPORT lean_object* l_Lake_LeanExe_exeFacet;
static lean_once_cell_t l_Lake_ExternLib_defaultFacet___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_ExternLib_defaultFacet___closed__0;
static lean_once_cell_t l_Lake_ExternLib_defaultFacet___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_ExternLib_defaultFacet___closed__1;
LEAN_EXPORT lean_object* l_Lake_ExternLib_defaultFacet;
static lean_once_cell_t l_Lake_ExternLib_staticFacet___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_ExternLib_staticFacet___closed__0;
LEAN_EXPORT lean_object* l_Lake_ExternLib_staticFacet;
static lean_once_cell_t l_Lake_ExternLib_sharedFacet___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_ExternLib_sharedFacet___closed__0;
LEAN_EXPORT lean_object* l_Lake_ExternLib_sharedFacet;
static lean_once_cell_t l_Lake_ExternLib_dynlibFacet___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_ExternLib_dynlibFacet___closed__0;
static lean_once_cell_t l_Lake_ExternLib_dynlibFacet___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_ExternLib_dynlibFacet___closed__1;
LEAN_EXPORT lean_object* l_Lake_ExternLib_dynlibFacet;
static lean_once_cell_t l_Lake_InputFile_defaultFacet___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_InputFile_defaultFacet___closed__0;
static lean_once_cell_t l_Lake_InputFile_defaultFacet___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_InputFile_defaultFacet___closed__1;
LEAN_EXPORT lean_object* l_Lake_InputFile_defaultFacet;
static lean_once_cell_t l_Lake_InputDir_defaultFacet___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_InputDir_defaultFacet___closed__0;
static lean_once_cell_t l_Lake_InputDir_defaultFacet___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_InputDir_defaultFacet___closed__1;
LEAN_EXPORT lean_object* l_Lake_InputDir_defaultFacet;
static lean_object* _init_l_Lake_instReprModuleFacet_repr___redArg___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = lean_mk_string_unchecked("{ ", 2, 2);
return v___x_1_;
}
}
static lean_object* _init_l_Lake_instReprModuleFacet_repr___redArg___closed__1(void){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_mk_string_unchecked("name", 4, 4);
return v___x_2_;
}
}
static lean_object* _init_l_Lake_instReprModuleFacet_repr___redArg___closed__2(void){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; 
v___x_3_ = lean_obj_once(&l_Lake_instReprModuleFacet_repr___redArg___closed__1, &l_Lake_instReprModuleFacet_repr___redArg___closed__1_once, _init_l_Lake_instReprModuleFacet_repr___redArg___closed__1);
v___x_4_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4_, 0, v___x_3_);
return v___x_4_;
}
}
static lean_object* _init_l_Lake_instReprModuleFacet_repr___redArg___closed__3(void){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; lean_object* v___x_7_; 
v___x_5_ = lean_obj_once(&l_Lake_instReprModuleFacet_repr___redArg___closed__2, &l_Lake_instReprModuleFacet_repr___redArg___closed__2_once, _init_l_Lake_instReprModuleFacet_repr___redArg___closed__2);
v___x_6_ = lean_box(0);
v___x_7_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_7_, 0, v___x_6_);
lean_ctor_set(v___x_7_, 1, v___x_5_);
return v___x_7_;
}
}
static lean_object* _init_l_Lake_instReprModuleFacet_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_8_; 
v___x_8_ = lean_mk_string_unchecked(" := ", 4, 4);
return v___x_8_;
}
}
static lean_object* _init_l_Lake_instReprModuleFacet_repr___redArg___closed__5(void){
_start:
{
lean_object* v___x_9_; lean_object* v___x_10_; 
v___x_9_ = lean_obj_once(&l_Lake_instReprModuleFacet_repr___redArg___closed__4, &l_Lake_instReprModuleFacet_repr___redArg___closed__4_once, _init_l_Lake_instReprModuleFacet_repr___redArg___closed__4);
v___x_10_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_10_, 0, v___x_9_);
return v___x_10_;
}
}
static lean_object* _init_l_Lake_instReprModuleFacet_repr___redArg___closed__6(void){
_start:
{
lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; 
v___x_11_ = lean_obj_once(&l_Lake_instReprModuleFacet_repr___redArg___closed__5, &l_Lake_instReprModuleFacet_repr___redArg___closed__5_once, _init_l_Lake_instReprModuleFacet_repr___redArg___closed__5);
v___x_12_ = lean_obj_once(&l_Lake_instReprModuleFacet_repr___redArg___closed__3, &l_Lake_instReprModuleFacet_repr___redArg___closed__3_once, _init_l_Lake_instReprModuleFacet_repr___redArg___closed__3);
v___x_13_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_13_, 0, v___x_12_);
lean_ctor_set(v___x_13_, 1, v___x_11_);
return v___x_13_;
}
}
static lean_object* _init_l_Lake_instReprModuleFacet_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_14_; lean_object* v___x_15_; 
v___x_14_ = lean_unsigned_to_nat(8u);
v___x_15_ = lean_nat_to_int(v___x_14_);
return v___x_15_;
}
}
static lean_object* _init_l_Lake_instReprModuleFacet_repr___redArg___closed__8(void){
_start:
{
lean_object* v___x_16_; 
v___x_16_ = lean_mk_string_unchecked(",", 1, 1);
return v___x_16_;
}
}
static lean_object* _init_l_Lake_instReprModuleFacet_repr___redArg___closed__9(void){
_start:
{
lean_object* v___x_17_; lean_object* v___x_18_; 
v___x_17_ = lean_obj_once(&l_Lake_instReprModuleFacet_repr___redArg___closed__8, &l_Lake_instReprModuleFacet_repr___redArg___closed__8_once, _init_l_Lake_instReprModuleFacet_repr___redArg___closed__8);
v___x_18_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_18_, 0, v___x_17_);
return v___x_18_;
}
}
static lean_object* _init_l_Lake_instReprModuleFacet_repr___redArg___closed__10(void){
_start:
{
lean_object* v___x_19_; 
v___x_19_ = lean_mk_string_unchecked("data_eq", 7, 7);
return v___x_19_;
}
}
static lean_object* _init_l_Lake_instReprModuleFacet_repr___redArg___closed__11(void){
_start:
{
lean_object* v___x_20_; lean_object* v___x_21_; 
v___x_20_ = lean_obj_once(&l_Lake_instReprModuleFacet_repr___redArg___closed__10, &l_Lake_instReprModuleFacet_repr___redArg___closed__10_once, _init_l_Lake_instReprModuleFacet_repr___redArg___closed__10);
v___x_21_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_21_, 0, v___x_20_);
return v___x_21_;
}
}
static lean_object* _init_l_Lake_instReprModuleFacet_repr___redArg___closed__12(void){
_start:
{
lean_object* v___x_22_; 
v___x_22_ = lean_mk_string_unchecked("_", 1, 1);
return v___x_22_;
}
}
static lean_object* _init_l_Lake_instReprModuleFacet_repr___redArg___closed__13(void){
_start:
{
lean_object* v___x_23_; lean_object* v___x_24_; 
v___x_23_ = lean_obj_once(&l_Lake_instReprModuleFacet_repr___redArg___closed__12, &l_Lake_instReprModuleFacet_repr___redArg___closed__12_once, _init_l_Lake_instReprModuleFacet_repr___redArg___closed__12);
v___x_24_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_24_, 0, v___x_23_);
return v___x_24_;
}
}
static lean_object* _init_l_Lake_instReprModuleFacet_repr___redArg___closed__14(void){
_start:
{
lean_object* v___x_25_; 
v___x_25_ = lean_mk_string_unchecked(" }", 2, 2);
return v___x_25_;
}
}
static lean_object* _init_l_Lake_instReprModuleFacet_repr___redArg___closed__15(void){
_start:
{
lean_object* v___x_26_; lean_object* v___x_27_; 
v___x_26_ = lean_obj_once(&l_Lake_instReprModuleFacet_repr___redArg___closed__0, &l_Lake_instReprModuleFacet_repr___redArg___closed__0_once, _init_l_Lake_instReprModuleFacet_repr___redArg___closed__0);
v___x_27_ = lean_string_length(v___x_26_);
return v___x_27_;
}
}
static lean_object* _init_l_Lake_instReprModuleFacet_repr___redArg___closed__16(void){
_start:
{
lean_object* v___x_28_; lean_object* v___x_29_; 
v___x_28_ = lean_obj_once(&l_Lake_instReprModuleFacet_repr___redArg___closed__15, &l_Lake_instReprModuleFacet_repr___redArg___closed__15_once, _init_l_Lake_instReprModuleFacet_repr___redArg___closed__15);
v___x_29_ = lean_nat_to_int(v___x_28_);
return v___x_29_;
}
}
static lean_object* _init_l_Lake_instReprModuleFacet_repr___redArg___closed__17(void){
_start:
{
lean_object* v___x_30_; lean_object* v___x_31_; 
v___x_30_ = lean_obj_once(&l_Lake_instReprModuleFacet_repr___redArg___closed__0, &l_Lake_instReprModuleFacet_repr___redArg___closed__0_once, _init_l_Lake_instReprModuleFacet_repr___redArg___closed__0);
v___x_31_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_31_, 0, v___x_30_);
return v___x_31_;
}
}
static lean_object* _init_l_Lake_instReprModuleFacet_repr___redArg___closed__18(void){
_start:
{
lean_object* v___x_32_; lean_object* v___x_33_; 
v___x_32_ = lean_obj_once(&l_Lake_instReprModuleFacet_repr___redArg___closed__14, &l_Lake_instReprModuleFacet_repr___redArg___closed__14_once, _init_l_Lake_instReprModuleFacet_repr___redArg___closed__14);
v___x_33_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_33_, 0, v___x_32_);
return v___x_33_;
}
}
LEAN_EXPORT lean_object* l_Lake_instReprModuleFacet_repr___redArg(lean_object* v_x_34_){
_start:
{
lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; lean_object* v___x_40_; uint8_t v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; 
v___x_35_ = lean_obj_once(&l_Lake_instReprModuleFacet_repr___redArg___closed__5, &l_Lake_instReprModuleFacet_repr___redArg___closed__5_once, _init_l_Lake_instReprModuleFacet_repr___redArg___closed__5);
v___x_36_ = lean_obj_once(&l_Lake_instReprModuleFacet_repr___redArg___closed__6, &l_Lake_instReprModuleFacet_repr___redArg___closed__6_once, _init_l_Lake_instReprModuleFacet_repr___redArg___closed__6);
v___x_37_ = lean_obj_once(&l_Lake_instReprModuleFacet_repr___redArg___closed__7, &l_Lake_instReprModuleFacet_repr___redArg___closed__7_once, _init_l_Lake_instReprModuleFacet_repr___redArg___closed__7);
v___x_38_ = lean_unsigned_to_nat(0u);
v___x_39_ = l_Lean_Name_reprPrec(v_x_34_, v___x_38_);
v___x_40_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_40_, 0, v___x_37_);
lean_ctor_set(v___x_40_, 1, v___x_39_);
v___x_41_ = 0;
v___x_42_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_42_, 0, v___x_40_);
lean_ctor_set_uint8(v___x_42_, sizeof(void*)*1, v___x_41_);
v___x_43_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_43_, 0, v___x_36_);
lean_ctor_set(v___x_43_, 1, v___x_42_);
v___x_44_ = lean_obj_once(&l_Lake_instReprModuleFacet_repr___redArg___closed__9, &l_Lake_instReprModuleFacet_repr___redArg___closed__9_once, _init_l_Lake_instReprModuleFacet_repr___redArg___closed__9);
v___x_45_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_45_, 0, v___x_43_);
lean_ctor_set(v___x_45_, 1, v___x_44_);
v___x_46_ = lean_box(1);
v___x_47_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_47_, 0, v___x_45_);
lean_ctor_set(v___x_47_, 1, v___x_46_);
v___x_48_ = lean_obj_once(&l_Lake_instReprModuleFacet_repr___redArg___closed__11, &l_Lake_instReprModuleFacet_repr___redArg___closed__11_once, _init_l_Lake_instReprModuleFacet_repr___redArg___closed__11);
v___x_49_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_49_, 0, v___x_47_);
lean_ctor_set(v___x_49_, 1, v___x_48_);
v___x_50_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_50_, 0, v___x_49_);
lean_ctor_set(v___x_50_, 1, v___x_35_);
v___x_51_ = lean_obj_once(&l_Lake_instReprModuleFacet_repr___redArg___closed__13, &l_Lake_instReprModuleFacet_repr___redArg___closed__13_once, _init_l_Lake_instReprModuleFacet_repr___redArg___closed__13);
v___x_52_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_52_, 0, v___x_50_);
lean_ctor_set(v___x_52_, 1, v___x_51_);
v___x_53_ = lean_obj_once(&l_Lake_instReprModuleFacet_repr___redArg___closed__16, &l_Lake_instReprModuleFacet_repr___redArg___closed__16_once, _init_l_Lake_instReprModuleFacet_repr___redArg___closed__16);
v___x_54_ = lean_obj_once(&l_Lake_instReprModuleFacet_repr___redArg___closed__17, &l_Lake_instReprModuleFacet_repr___redArg___closed__17_once, _init_l_Lake_instReprModuleFacet_repr___redArg___closed__17);
v___x_55_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_55_, 0, v___x_54_);
lean_ctor_set(v___x_55_, 1, v___x_52_);
v___x_56_ = lean_obj_once(&l_Lake_instReprModuleFacet_repr___redArg___closed__18, &l_Lake_instReprModuleFacet_repr___redArg___closed__18_once, _init_l_Lake_instReprModuleFacet_repr___redArg___closed__18);
v___x_57_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_57_, 0, v___x_55_);
lean_ctor_set(v___x_57_, 1, v___x_56_);
v___x_58_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_58_, 0, v___x_53_);
lean_ctor_set(v___x_58_, 1, v___x_57_);
v___x_59_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_59_, 0, v___x_58_);
lean_ctor_set_uint8(v___x_59_, sizeof(void*)*1, v___x_41_);
return v___x_59_;
}
}
LEAN_EXPORT lean_object* l_Lake_instReprModuleFacet_repr(lean_object* v_00_u03b1_60_, lean_object* v_inst_61_, lean_object* v_x_62_, lean_object* v_prec_63_){
_start:
{
lean_object* v___x_64_; 
v___x_64_ = l_Lake_instReprModuleFacet_repr___redArg(v_x_62_);
return v___x_64_;
}
}
LEAN_EXPORT lean_object* l_Lake_instReprModuleFacet_repr___boxed(lean_object* v_00_u03b1_65_, lean_object* v_inst_66_, lean_object* v_x_67_, lean_object* v_prec_68_){
_start:
{
lean_object* v_res_69_; 
v_res_69_ = l_Lake_instReprModuleFacet_repr(v_00_u03b1_65_, v_inst_66_, v_x_67_, v_prec_68_);
lean_dec(v_prec_68_);
lean_dec_ref(v_inst_66_);
return v_res_69_;
}
}
LEAN_EXPORT lean_object* l_Lake_instReprModuleFacet___redArg(lean_object* v_inst_70_){
_start:
{
lean_object* v___x_71_; 
v___x_71_ = lean_alloc_closure((void*)(l_Lake_instReprModuleFacet_repr___boxed), 4, 2);
lean_closure_set(v___x_71_, 0, lean_box(0));
lean_closure_set(v___x_71_, 1, v_inst_70_);
return v___x_71_;
}
}
LEAN_EXPORT lean_object* l_Lake_instReprModuleFacet(lean_object* v_00_u03b1_72_, lean_object* v_inst_73_){
_start:
{
lean_object* v___x_74_; 
v___x_74_ = lean_alloc_closure((void*)(l_Lake_instReprModuleFacet_repr___boxed), 4, 2);
lean_closure_set(v___x_74_, 0, lean_box(0));
lean_closure_set(v___x_74_, 1, v_inst_73_);
return v___x_74_;
}
}
LEAN_EXPORT lean_object* l_Lake_instCoeDepNameModuleFacetOfFamilyOutFacetOut___redArg(lean_object* v_facet_75_){
_start:
{
lean_inc(v_facet_75_);
return v_facet_75_;
}
}
LEAN_EXPORT lean_object* l_Lake_instCoeDepNameModuleFacetOfFamilyOutFacetOut___redArg___boxed(lean_object* v_facet_76_){
_start:
{
lean_object* v_res_77_; 
v_res_77_ = l_Lake_instCoeDepNameModuleFacetOfFamilyOutFacetOut___redArg(v_facet_76_);
lean_dec(v_facet_76_);
return v_res_77_;
}
}
LEAN_EXPORT lean_object* l_Lake_instCoeDepNameModuleFacetOfFamilyOutFacetOut(lean_object* v_facet_78_, lean_object* v_00_u03b1_79_, lean_object* v_inst_80_){
_start:
{
lean_inc(v_facet_78_);
return v_facet_78_;
}
}
LEAN_EXPORT lean_object* l_Lake_instCoeDepNameModuleFacetOfFamilyOutFacetOut___boxed(lean_object* v_facet_81_, lean_object* v_00_u03b1_82_, lean_object* v_inst_83_){
_start:
{
lean_object* v_res_84_; 
v_res_84_ = l_Lake_instCoeDepNameModuleFacetOfFamilyOutFacetOut(v_facet_81_, v_00_u03b1_82_, v_inst_83_);
lean_dec(v_facet_81_);
return v_res_84_;
}
}
static lean_object* _init_l_Lake_Module_leanFacet___closed__0(void){
_start:
{
lean_object* v___x_85_; 
v___x_85_ = lean_mk_string_unchecked("module", 6, 6);
return v___x_85_;
}
}
static lean_object* _init_l_Lake_Module_leanFacet___closed__1(void){
_start:
{
lean_object* v___x_86_; 
v___x_86_ = lean_mk_string_unchecked("lean", 4, 4);
return v___x_86_;
}
}
static lean_object* _init_l_Lake_Module_leanFacet___closed__2(void){
_start:
{
lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; 
v___x_87_ = lean_obj_once(&l_Lake_Module_leanFacet___closed__1, &l_Lake_Module_leanFacet___closed__1_once, _init_l_Lake_Module_leanFacet___closed__1);
v___x_88_ = lean_obj_once(&l_Lake_Module_leanFacet___closed__0, &l_Lake_Module_leanFacet___closed__0_once, _init_l_Lake_Module_leanFacet___closed__0);
v___x_89_ = l_Lean_Name_mkStr2(v___x_88_, v___x_87_);
return v___x_89_;
}
}
static lean_object* _init_l_Lake_Module_leanFacet(void){
_start:
{
lean_object* v___x_90_; 
v___x_90_ = lean_obj_once(&l_Lake_Module_leanFacet___closed__2, &l_Lake_Module_leanFacet___closed__2_once, _init_l_Lake_Module_leanFacet___closed__2);
return v___x_90_;
}
}
static lean_object* _init_l_Lake_Module_headerFacet___closed__0(void){
_start:
{
lean_object* v___x_91_; 
v___x_91_ = lean_mk_string_unchecked("header", 6, 6);
return v___x_91_;
}
}
static lean_object* _init_l_Lake_Module_headerFacet___closed__1(void){
_start:
{
lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; 
v___x_92_ = lean_obj_once(&l_Lake_Module_headerFacet___closed__0, &l_Lake_Module_headerFacet___closed__0_once, _init_l_Lake_Module_headerFacet___closed__0);
v___x_93_ = lean_obj_once(&l_Lake_Module_leanFacet___closed__0, &l_Lake_Module_leanFacet___closed__0_once, _init_l_Lake_Module_leanFacet___closed__0);
v___x_94_ = l_Lean_Name_mkStr2(v___x_93_, v___x_92_);
return v___x_94_;
}
}
static lean_object* _init_l_Lake_Module_headerFacet(void){
_start:
{
lean_object* v___x_95_; 
v___x_95_ = lean_obj_once(&l_Lake_Module_headerFacet___closed__1, &l_Lake_Module_headerFacet___closed__1_once, _init_l_Lake_Module_headerFacet___closed__1);
return v___x_95_;
}
}
static lean_object* _init_l_Lake_Module_setupFacet___closed__0(void){
_start:
{
lean_object* v___x_96_; 
v___x_96_ = lean_mk_string_unchecked("setup", 5, 5);
return v___x_96_;
}
}
static lean_object* _init_l_Lake_Module_setupFacet___closed__1(void){
_start:
{
lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; 
v___x_97_ = lean_obj_once(&l_Lake_Module_setupFacet___closed__0, &l_Lake_Module_setupFacet___closed__0_once, _init_l_Lake_Module_setupFacet___closed__0);
v___x_98_ = lean_obj_once(&l_Lake_Module_leanFacet___closed__0, &l_Lake_Module_leanFacet___closed__0_once, _init_l_Lake_Module_leanFacet___closed__0);
v___x_99_ = l_Lean_Name_mkStr2(v___x_98_, v___x_97_);
return v___x_99_;
}
}
static lean_object* _init_l_Lake_Module_setupFacet(void){
_start:
{
lean_object* v___x_100_; 
v___x_100_ = lean_obj_once(&l_Lake_Module_setupFacet___closed__1, &l_Lake_Module_setupFacet___closed__1_once, _init_l_Lake_Module_setupFacet___closed__1);
return v___x_100_;
}
}
static lean_object* _init_l_Lake_Module_depsFacet___closed__0(void){
_start:
{
lean_object* v___x_101_; 
v___x_101_ = lean_mk_string_unchecked("deps", 4, 4);
return v___x_101_;
}
}
static lean_object* _init_l_Lake_Module_depsFacet___closed__1(void){
_start:
{
lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; 
v___x_102_ = lean_obj_once(&l_Lake_Module_depsFacet___closed__0, &l_Lake_Module_depsFacet___closed__0_once, _init_l_Lake_Module_depsFacet___closed__0);
v___x_103_ = lean_obj_once(&l_Lake_Module_leanFacet___closed__0, &l_Lake_Module_leanFacet___closed__0_once, _init_l_Lake_Module_leanFacet___closed__0);
v___x_104_ = l_Lean_Name_mkStr2(v___x_103_, v___x_102_);
return v___x_104_;
}
}
static lean_object* _init_l_Lake_Module_depsFacet(void){
_start:
{
lean_object* v___x_105_; 
v___x_105_ = lean_obj_once(&l_Lake_Module_depsFacet___closed__1, &l_Lake_Module_depsFacet___closed__1_once, _init_l_Lake_Module_depsFacet___closed__1);
return v___x_105_;
}
}
static lean_object* _init_l_Lake_instInhabitedModuleImportInfo_default___closed__0(void){
_start:
{
lean_object* v___x_106_; 
v___x_106_ = lean_mk_string_unchecked("<nil>", 5, 5);
return v___x_106_;
}
}
static lean_object* _init_l_Lake_instInhabitedModuleImportInfo_default___closed__1(void){
_start:
{
lean_object* v___x_107_; lean_object* v___x_108_; 
v___x_107_ = lean_obj_once(&l_Lake_instInhabitedModuleImportInfo_default___closed__0, &l_Lake_instInhabitedModuleImportInfo_default___closed__0_once, _init_l_Lake_instInhabitedModuleImportInfo_default___closed__0);
v___x_108_ = l_Lake_BuildTrace_nil(v___x_107_);
return v___x_108_;
}
}
static lean_object* _init_l_Lake_instInhabitedModuleImportInfo_default___closed__2(void){
_start:
{
lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; 
v___x_109_ = lean_obj_once(&l_Lake_instInhabitedModuleImportInfo_default___closed__1, &l_Lake_instInhabitedModuleImportInfo_default___closed__1_once, _init_l_Lake_instInhabitedModuleImportInfo_default___closed__1);
v___x_110_ = lean_box(1);
v___x_111_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_111_, 0, v___x_110_);
lean_ctor_set(v___x_111_, 1, v___x_109_);
lean_ctor_set(v___x_111_, 2, v___x_109_);
lean_ctor_set(v___x_111_, 3, v___x_109_);
lean_ctor_set(v___x_111_, 4, v___x_109_);
lean_ctor_set(v___x_111_, 5, v___x_109_);
return v___x_111_;
}
}
static lean_object* _init_l_Lake_instInhabitedModuleImportInfo_default(void){
_start:
{
lean_object* v___x_112_; 
v___x_112_ = lean_obj_once(&l_Lake_instInhabitedModuleImportInfo_default___closed__2, &l_Lake_instInhabitedModuleImportInfo_default___closed__2_once, _init_l_Lake_instInhabitedModuleImportInfo_default___closed__2);
return v___x_112_;
}
}
static lean_object* _init_l_Lake_instInhabitedModuleImportInfo(void){
_start:
{
lean_object* v___x_113_; 
v___x_113_ = l_Lake_instInhabitedModuleImportInfo_default;
return v___x_113_;
}
}
static lean_object* _init_l_Lake_Module_importInfoFacet___closed__0(void){
_start:
{
lean_object* v___x_114_; 
v___x_114_ = lean_mk_string_unchecked("importInfo", 10, 10);
return v___x_114_;
}
}
static lean_object* _init_l_Lake_Module_importInfoFacet___closed__1(void){
_start:
{
lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; 
v___x_115_ = lean_obj_once(&l_Lake_Module_importInfoFacet___closed__0, &l_Lake_Module_importInfoFacet___closed__0_once, _init_l_Lake_Module_importInfoFacet___closed__0);
v___x_116_ = lean_obj_once(&l_Lake_Module_leanFacet___closed__0, &l_Lake_Module_leanFacet___closed__0_once, _init_l_Lake_Module_leanFacet___closed__0);
v___x_117_ = l_Lean_Name_mkStr2(v___x_116_, v___x_115_);
return v___x_117_;
}
}
static lean_object* _init_l_Lake_Module_importInfoFacet(void){
_start:
{
lean_object* v___x_118_; 
v___x_118_ = lean_obj_once(&l_Lake_Module_importInfoFacet___closed__1, &l_Lake_Module_importInfoFacet___closed__1_once, _init_l_Lake_Module_importInfoFacet___closed__1);
return v___x_118_;
}
}
static lean_object* _init_l_Lake_instInhabitedModuleExportInfo_default___closed__0(void){
_start:
{
lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; 
v___x_119_ = l_Lean_instInhabitedImportArtifacts_default;
v___x_120_ = lean_obj_once(&l_Lake_instInhabitedModuleImportInfo_default___closed__1, &l_Lake_instInhabitedModuleImportInfo_default___closed__1_once, _init_l_Lake_instInhabitedModuleImportInfo_default___closed__1);
v___x_121_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_121_, 0, v___x_120_);
lean_ctor_set(v___x_121_, 1, v___x_119_);
lean_ctor_set(v___x_121_, 2, v___x_120_);
lean_ctor_set(v___x_121_, 3, v___x_120_);
lean_ctor_set(v___x_121_, 4, v___x_119_);
lean_ctor_set(v___x_121_, 5, v___x_120_);
lean_ctor_set(v___x_121_, 6, v___x_120_);
lean_ctor_set(v___x_121_, 7, v___x_120_);
lean_ctor_set(v___x_121_, 8, v___x_120_);
lean_ctor_set(v___x_121_, 9, v___x_120_);
return v___x_121_;
}
}
static lean_object* _init_l_Lake_instInhabitedModuleExportInfo_default(void){
_start:
{
lean_object* v___x_122_; 
v___x_122_ = lean_obj_once(&l_Lake_instInhabitedModuleExportInfo_default___closed__0, &l_Lake_instInhabitedModuleExportInfo_default___closed__0_once, _init_l_Lake_instInhabitedModuleExportInfo_default___closed__0);
return v___x_122_;
}
}
static lean_object* _init_l_Lake_instInhabitedModuleExportInfo(void){
_start:
{
lean_object* v___x_123_; 
v___x_123_ = l_Lake_instInhabitedModuleExportInfo_default;
return v___x_123_;
}
}
static lean_object* _init_l_Lake_Module_exportInfoFacet___closed__0(void){
_start:
{
lean_object* v___x_124_; 
v___x_124_ = lean_mk_string_unchecked("exportInfo", 10, 10);
return v___x_124_;
}
}
static lean_object* _init_l_Lake_Module_exportInfoFacet___closed__1(void){
_start:
{
lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; 
v___x_125_ = lean_obj_once(&l_Lake_Module_exportInfoFacet___closed__0, &l_Lake_Module_exportInfoFacet___closed__0_once, _init_l_Lake_Module_exportInfoFacet___closed__0);
v___x_126_ = lean_obj_once(&l_Lake_Module_leanFacet___closed__0, &l_Lake_Module_leanFacet___closed__0_once, _init_l_Lake_Module_leanFacet___closed__0);
v___x_127_ = l_Lean_Name_mkStr2(v___x_126_, v___x_125_);
return v___x_127_;
}
}
static lean_object* _init_l_Lake_Module_exportInfoFacet(void){
_start:
{
lean_object* v___x_128_; 
v___x_128_ = lean_obj_once(&l_Lake_Module_exportInfoFacet___closed__1, &l_Lake_Module_exportInfoFacet___closed__1_once, _init_l_Lake_Module_exportInfoFacet___closed__1);
return v___x_128_;
}
}
static lean_object* _init_l_Lake_Module_importArtsFacet___closed__0(void){
_start:
{
lean_object* v___x_129_; 
v___x_129_ = lean_mk_string_unchecked("importArts", 10, 10);
return v___x_129_;
}
}
static lean_object* _init_l_Lake_Module_importArtsFacet___closed__1(void){
_start:
{
lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; 
v___x_130_ = lean_obj_once(&l_Lake_Module_importArtsFacet___closed__0, &l_Lake_Module_importArtsFacet___closed__0_once, _init_l_Lake_Module_importArtsFacet___closed__0);
v___x_131_ = lean_obj_once(&l_Lake_Module_leanFacet___closed__0, &l_Lake_Module_leanFacet___closed__0_once, _init_l_Lake_Module_leanFacet___closed__0);
v___x_132_ = l_Lean_Name_mkStr2(v___x_131_, v___x_130_);
return v___x_132_;
}
}
static lean_object* _init_l_Lake_Module_importArtsFacet(void){
_start:
{
lean_object* v___x_133_; 
v___x_133_ = lean_obj_once(&l_Lake_Module_importArtsFacet___closed__1, &l_Lake_Module_importArtsFacet___closed__1_once, _init_l_Lake_Module_importArtsFacet___closed__1);
return v___x_133_;
}
}
static lean_object* _init_l_Lake_Module_importAllArtsFacet___closed__0(void){
_start:
{
lean_object* v___x_134_; 
v___x_134_ = lean_mk_string_unchecked("importAllArts", 13, 13);
return v___x_134_;
}
}
static lean_object* _init_l_Lake_Module_importAllArtsFacet___closed__1(void){
_start:
{
lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; 
v___x_135_ = lean_obj_once(&l_Lake_Module_importAllArtsFacet___closed__0, &l_Lake_Module_importAllArtsFacet___closed__0_once, _init_l_Lake_Module_importAllArtsFacet___closed__0);
v___x_136_ = lean_obj_once(&l_Lake_Module_leanFacet___closed__0, &l_Lake_Module_leanFacet___closed__0_once, _init_l_Lake_Module_leanFacet___closed__0);
v___x_137_ = l_Lean_Name_mkStr2(v___x_136_, v___x_135_);
return v___x_137_;
}
}
static lean_object* _init_l_Lake_Module_importAllArtsFacet(void){
_start:
{
lean_object* v___x_138_; 
v___x_138_ = lean_obj_once(&l_Lake_Module_importAllArtsFacet___closed__1, &l_Lake_Module_importAllArtsFacet___closed__1_once, _init_l_Lake_Module_importAllArtsFacet___closed__1);
return v___x_138_;
}
}
static lean_object* _init_l_Lake_Module_leanArtsFacet___closed__0(void){
_start:
{
lean_object* v___x_139_; 
v___x_139_ = lean_mk_string_unchecked("leanArts", 8, 8);
return v___x_139_;
}
}
static lean_object* _init_l_Lake_Module_leanArtsFacet___closed__1(void){
_start:
{
lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; 
v___x_140_ = lean_obj_once(&l_Lake_Module_leanArtsFacet___closed__0, &l_Lake_Module_leanArtsFacet___closed__0_once, _init_l_Lake_Module_leanArtsFacet___closed__0);
v___x_141_ = lean_obj_once(&l_Lake_Module_leanFacet___closed__0, &l_Lake_Module_leanFacet___closed__0_once, _init_l_Lake_Module_leanFacet___closed__0);
v___x_142_ = l_Lean_Name_mkStr2(v___x_141_, v___x_140_);
return v___x_142_;
}
}
static lean_object* _init_l_Lake_Module_leanArtsFacet(void){
_start:
{
lean_object* v___x_143_; 
v___x_143_ = lean_obj_once(&l_Lake_Module_leanArtsFacet___closed__1, &l_Lake_Module_leanArtsFacet___closed__1_once, _init_l_Lake_Module_leanArtsFacet___closed__1);
return v___x_143_;
}
}
static lean_object* _init_l_Lake_Module_ltarFacet___closed__0(void){
_start:
{
lean_object* v___x_144_; 
v___x_144_ = lean_mk_string_unchecked("ltar", 4, 4);
return v___x_144_;
}
}
static lean_object* _init_l_Lake_Module_ltarFacet___closed__1(void){
_start:
{
lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; 
v___x_145_ = lean_obj_once(&l_Lake_Module_ltarFacet___closed__0, &l_Lake_Module_ltarFacet___closed__0_once, _init_l_Lake_Module_ltarFacet___closed__0);
v___x_146_ = lean_obj_once(&l_Lake_Module_leanFacet___closed__0, &l_Lake_Module_leanFacet___closed__0_once, _init_l_Lake_Module_leanFacet___closed__0);
v___x_147_ = l_Lean_Name_mkStr2(v___x_146_, v___x_145_);
return v___x_147_;
}
}
static lean_object* _init_l_Lake_Module_ltarFacet(void){
_start:
{
lean_object* v___x_148_; 
v___x_148_ = lean_obj_once(&l_Lake_Module_ltarFacet___closed__1, &l_Lake_Module_ltarFacet___closed__1_once, _init_l_Lake_Module_ltarFacet___closed__1);
return v___x_148_;
}
}
static lean_object* _init_l_Lake_Module_oleanFacet___closed__0(void){
_start:
{
lean_object* v___x_149_; 
v___x_149_ = lean_mk_string_unchecked("olean", 5, 5);
return v___x_149_;
}
}
static lean_object* _init_l_Lake_Module_oleanFacet___closed__1(void){
_start:
{
lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; 
v___x_150_ = lean_obj_once(&l_Lake_Module_oleanFacet___closed__0, &l_Lake_Module_oleanFacet___closed__0_once, _init_l_Lake_Module_oleanFacet___closed__0);
v___x_151_ = lean_obj_once(&l_Lake_Module_leanFacet___closed__0, &l_Lake_Module_leanFacet___closed__0_once, _init_l_Lake_Module_leanFacet___closed__0);
v___x_152_ = l_Lean_Name_mkStr2(v___x_151_, v___x_150_);
return v___x_152_;
}
}
static lean_object* _init_l_Lake_Module_oleanFacet(void){
_start:
{
lean_object* v___x_153_; 
v___x_153_ = lean_obj_once(&l_Lake_Module_oleanFacet___closed__1, &l_Lake_Module_oleanFacet___closed__1_once, _init_l_Lake_Module_oleanFacet___closed__1);
return v___x_153_;
}
}
static lean_object* _init_l_Lake_Module_oleanServerFacet___closed__0(void){
_start:
{
lean_object* v___x_154_; 
v___x_154_ = lean_mk_string_unchecked("server", 6, 6);
return v___x_154_;
}
}
static lean_object* _init_l_Lake_Module_oleanServerFacet___closed__1(void){
_start:
{
lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; 
v___x_155_ = lean_obj_once(&l_Lake_Module_oleanServerFacet___closed__0, &l_Lake_Module_oleanServerFacet___closed__0_once, _init_l_Lake_Module_oleanServerFacet___closed__0);
v___x_156_ = lean_obj_once(&l_Lake_Module_oleanFacet___closed__0, &l_Lake_Module_oleanFacet___closed__0_once, _init_l_Lake_Module_oleanFacet___closed__0);
v___x_157_ = lean_obj_once(&l_Lake_Module_leanFacet___closed__0, &l_Lake_Module_leanFacet___closed__0_once, _init_l_Lake_Module_leanFacet___closed__0);
v___x_158_ = l_Lean_Name_mkStr3(v___x_157_, v___x_156_, v___x_155_);
return v___x_158_;
}
}
static lean_object* _init_l_Lake_Module_oleanServerFacet(void){
_start:
{
lean_object* v___x_159_; 
v___x_159_ = lean_obj_once(&l_Lake_Module_oleanServerFacet___closed__1, &l_Lake_Module_oleanServerFacet___closed__1_once, _init_l_Lake_Module_oleanServerFacet___closed__1);
return v___x_159_;
}
}
static lean_object* _init_l_Lake_Module_oleanPrivateFacet___closed__0(void){
_start:
{
lean_object* v___x_160_; 
v___x_160_ = lean_mk_string_unchecked("private", 7, 7);
return v___x_160_;
}
}
static lean_object* _init_l_Lake_Module_oleanPrivateFacet___closed__1(void){
_start:
{
lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; 
v___x_161_ = lean_obj_once(&l_Lake_Module_oleanPrivateFacet___closed__0, &l_Lake_Module_oleanPrivateFacet___closed__0_once, _init_l_Lake_Module_oleanPrivateFacet___closed__0);
v___x_162_ = lean_obj_once(&l_Lake_Module_oleanFacet___closed__0, &l_Lake_Module_oleanFacet___closed__0_once, _init_l_Lake_Module_oleanFacet___closed__0);
v___x_163_ = lean_obj_once(&l_Lake_Module_leanFacet___closed__0, &l_Lake_Module_leanFacet___closed__0_once, _init_l_Lake_Module_leanFacet___closed__0);
v___x_164_ = l_Lean_Name_mkStr3(v___x_163_, v___x_162_, v___x_161_);
return v___x_164_;
}
}
static lean_object* _init_l_Lake_Module_oleanPrivateFacet(void){
_start:
{
lean_object* v___x_165_; 
v___x_165_ = lean_obj_once(&l_Lake_Module_oleanPrivateFacet___closed__1, &l_Lake_Module_oleanPrivateFacet___closed__1_once, _init_l_Lake_Module_oleanPrivateFacet___closed__1);
return v___x_165_;
}
}
static lean_object* _init_l_Lake_Module_ileanFacet___closed__0(void){
_start:
{
lean_object* v___x_166_; 
v___x_166_ = lean_mk_string_unchecked("ilean", 5, 5);
return v___x_166_;
}
}
static lean_object* _init_l_Lake_Module_ileanFacet___closed__1(void){
_start:
{
lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; 
v___x_167_ = lean_obj_once(&l_Lake_Module_ileanFacet___closed__0, &l_Lake_Module_ileanFacet___closed__0_once, _init_l_Lake_Module_ileanFacet___closed__0);
v___x_168_ = lean_obj_once(&l_Lake_Module_leanFacet___closed__0, &l_Lake_Module_leanFacet___closed__0_once, _init_l_Lake_Module_leanFacet___closed__0);
v___x_169_ = l_Lean_Name_mkStr2(v___x_168_, v___x_167_);
return v___x_169_;
}
}
static lean_object* _init_l_Lake_Module_ileanFacet(void){
_start:
{
lean_object* v___x_170_; 
v___x_170_ = lean_obj_once(&l_Lake_Module_ileanFacet___closed__1, &l_Lake_Module_ileanFacet___closed__1_once, _init_l_Lake_Module_ileanFacet___closed__1);
return v___x_170_;
}
}
static lean_object* _init_l_Lake_Module_irFacet___closed__0(void){
_start:
{
lean_object* v___x_171_; 
v___x_171_ = lean_mk_string_unchecked("ir", 2, 2);
return v___x_171_;
}
}
static lean_object* _init_l_Lake_Module_irFacet___closed__1(void){
_start:
{
lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; 
v___x_172_ = lean_obj_once(&l_Lake_Module_irFacet___closed__0, &l_Lake_Module_irFacet___closed__0_once, _init_l_Lake_Module_irFacet___closed__0);
v___x_173_ = lean_obj_once(&l_Lake_Module_leanFacet___closed__0, &l_Lake_Module_leanFacet___closed__0_once, _init_l_Lake_Module_leanFacet___closed__0);
v___x_174_ = l_Lean_Name_mkStr2(v___x_173_, v___x_172_);
return v___x_174_;
}
}
static lean_object* _init_l_Lake_Module_irFacet(void){
_start:
{
lean_object* v___x_175_; 
v___x_175_ = lean_obj_once(&l_Lake_Module_irFacet___closed__1, &l_Lake_Module_irFacet___closed__1_once, _init_l_Lake_Module_irFacet___closed__1);
return v___x_175_;
}
}
static lean_object* _init_l_Lake_Module_cFacet___closed__0(void){
_start:
{
lean_object* v___x_176_; 
v___x_176_ = lean_mk_string_unchecked("c", 1, 1);
return v___x_176_;
}
}
static lean_object* _init_l_Lake_Module_cFacet___closed__1(void){
_start:
{
lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; 
v___x_177_ = lean_obj_once(&l_Lake_Module_cFacet___closed__0, &l_Lake_Module_cFacet___closed__0_once, _init_l_Lake_Module_cFacet___closed__0);
v___x_178_ = lean_obj_once(&l_Lake_Module_leanFacet___closed__0, &l_Lake_Module_leanFacet___closed__0_once, _init_l_Lake_Module_leanFacet___closed__0);
v___x_179_ = l_Lean_Name_mkStr2(v___x_178_, v___x_177_);
return v___x_179_;
}
}
static lean_object* _init_l_Lake_Module_cFacet(void){
_start:
{
lean_object* v___x_180_; 
v___x_180_ = lean_obj_once(&l_Lake_Module_cFacet___closed__1, &l_Lake_Module_cFacet___closed__1_once, _init_l_Lake_Module_cFacet___closed__1);
return v___x_180_;
}
}
static lean_object* _init_l_Lake_Module_bcFacet___closed__0(void){
_start:
{
lean_object* v___x_181_; 
v___x_181_ = lean_mk_string_unchecked("bc", 2, 2);
return v___x_181_;
}
}
static lean_object* _init_l_Lake_Module_bcFacet___closed__1(void){
_start:
{
lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; 
v___x_182_ = lean_obj_once(&l_Lake_Module_bcFacet___closed__0, &l_Lake_Module_bcFacet___closed__0_once, _init_l_Lake_Module_bcFacet___closed__0);
v___x_183_ = lean_obj_once(&l_Lake_Module_leanFacet___closed__0, &l_Lake_Module_leanFacet___closed__0_once, _init_l_Lake_Module_leanFacet___closed__0);
v___x_184_ = l_Lean_Name_mkStr2(v___x_183_, v___x_182_);
return v___x_184_;
}
}
static lean_object* _init_l_Lake_Module_bcFacet(void){
_start:
{
lean_object* v___x_185_; 
v___x_185_ = lean_obj_once(&l_Lake_Module_bcFacet___closed__1, &l_Lake_Module_bcFacet___closed__1_once, _init_l_Lake_Module_bcFacet___closed__1);
return v___x_185_;
}
}
static lean_object* _init_l_Lake_Module_coFacet___closed__0(void){
_start:
{
lean_object* v___x_186_; 
v___x_186_ = lean_mk_string_unchecked("o", 1, 1);
return v___x_186_;
}
}
static lean_object* _init_l_Lake_Module_coFacet___closed__1(void){
_start:
{
lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; 
v___x_187_ = lean_obj_once(&l_Lake_Module_coFacet___closed__0, &l_Lake_Module_coFacet___closed__0_once, _init_l_Lake_Module_coFacet___closed__0);
v___x_188_ = lean_obj_once(&l_Lake_Module_cFacet___closed__0, &l_Lake_Module_cFacet___closed__0_once, _init_l_Lake_Module_cFacet___closed__0);
v___x_189_ = lean_obj_once(&l_Lake_Module_leanFacet___closed__0, &l_Lake_Module_leanFacet___closed__0_once, _init_l_Lake_Module_leanFacet___closed__0);
v___x_190_ = l_Lean_Name_mkStr3(v___x_189_, v___x_188_, v___x_187_);
return v___x_190_;
}
}
static lean_object* _init_l_Lake_Module_coFacet(void){
_start:
{
lean_object* v___x_191_; 
v___x_191_ = lean_obj_once(&l_Lake_Module_coFacet___closed__1, &l_Lake_Module_coFacet___closed__1_once, _init_l_Lake_Module_coFacet___closed__1);
return v___x_191_;
}
}
static lean_object* _init_l_Lake_Module_coExportFacet___closed__0(void){
_start:
{
lean_object* v___x_192_; 
v___x_192_ = lean_mk_string_unchecked("export", 6, 6);
return v___x_192_;
}
}
static lean_object* _init_l_Lake_Module_coExportFacet___closed__1(void){
_start:
{
lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; 
v___x_193_ = lean_obj_once(&l_Lake_Module_coExportFacet___closed__0, &l_Lake_Module_coExportFacet___closed__0_once, _init_l_Lake_Module_coExportFacet___closed__0);
v___x_194_ = lean_obj_once(&l_Lake_Module_coFacet___closed__0, &l_Lake_Module_coFacet___closed__0_once, _init_l_Lake_Module_coFacet___closed__0);
v___x_195_ = lean_obj_once(&l_Lake_Module_cFacet___closed__0, &l_Lake_Module_cFacet___closed__0_once, _init_l_Lake_Module_cFacet___closed__0);
v___x_196_ = lean_obj_once(&l_Lake_Module_leanFacet___closed__0, &l_Lake_Module_leanFacet___closed__0_once, _init_l_Lake_Module_leanFacet___closed__0);
v___x_197_ = l_Lean_Name_mkStr4(v___x_196_, v___x_195_, v___x_194_, v___x_193_);
return v___x_197_;
}
}
static lean_object* _init_l_Lake_Module_coExportFacet(void){
_start:
{
lean_object* v___x_198_; 
v___x_198_ = lean_obj_once(&l_Lake_Module_coExportFacet___closed__1, &l_Lake_Module_coExportFacet___closed__1_once, _init_l_Lake_Module_coExportFacet___closed__1);
return v___x_198_;
}
}
static lean_object* _init_l_Lake_Module_coNoExportFacet___closed__0(void){
_start:
{
lean_object* v___x_199_; 
v___x_199_ = lean_mk_string_unchecked("noexport", 8, 8);
return v___x_199_;
}
}
static lean_object* _init_l_Lake_Module_coNoExportFacet___closed__1(void){
_start:
{
lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; 
v___x_200_ = lean_obj_once(&l_Lake_Module_coNoExportFacet___closed__0, &l_Lake_Module_coNoExportFacet___closed__0_once, _init_l_Lake_Module_coNoExportFacet___closed__0);
v___x_201_ = lean_obj_once(&l_Lake_Module_coFacet___closed__0, &l_Lake_Module_coFacet___closed__0_once, _init_l_Lake_Module_coFacet___closed__0);
v___x_202_ = lean_obj_once(&l_Lake_Module_cFacet___closed__0, &l_Lake_Module_cFacet___closed__0_once, _init_l_Lake_Module_cFacet___closed__0);
v___x_203_ = lean_obj_once(&l_Lake_Module_leanFacet___closed__0, &l_Lake_Module_leanFacet___closed__0_once, _init_l_Lake_Module_leanFacet___closed__0);
v___x_204_ = l_Lean_Name_mkStr4(v___x_203_, v___x_202_, v___x_201_, v___x_200_);
return v___x_204_;
}
}
static lean_object* _init_l_Lake_Module_coNoExportFacet(void){
_start:
{
lean_object* v___x_205_; 
v___x_205_ = lean_obj_once(&l_Lake_Module_coNoExportFacet___closed__1, &l_Lake_Module_coNoExportFacet___closed__1_once, _init_l_Lake_Module_coNoExportFacet___closed__1);
return v___x_205_;
}
}
static lean_object* _init_l_Lake_Module_bcoFacet___closed__0(void){
_start:
{
lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; 
v___x_206_ = lean_obj_once(&l_Lake_Module_coFacet___closed__0, &l_Lake_Module_coFacet___closed__0_once, _init_l_Lake_Module_coFacet___closed__0);
v___x_207_ = lean_obj_once(&l_Lake_Module_bcFacet___closed__0, &l_Lake_Module_bcFacet___closed__0_once, _init_l_Lake_Module_bcFacet___closed__0);
v___x_208_ = lean_obj_once(&l_Lake_Module_leanFacet___closed__0, &l_Lake_Module_leanFacet___closed__0_once, _init_l_Lake_Module_leanFacet___closed__0);
v___x_209_ = l_Lean_Name_mkStr3(v___x_208_, v___x_207_, v___x_206_);
return v___x_209_;
}
}
static lean_object* _init_l_Lake_Module_bcoFacet(void){
_start:
{
lean_object* v___x_210_; 
v___x_210_ = lean_obj_once(&l_Lake_Module_bcoFacet___closed__0, &l_Lake_Module_bcoFacet___closed__0_once, _init_l_Lake_Module_bcoFacet___closed__0);
return v___x_210_;
}
}
static lean_object* _init_l_Lake_Module_oFacet___closed__0(void){
_start:
{
lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; 
v___x_211_ = lean_obj_once(&l_Lake_Module_coFacet___closed__0, &l_Lake_Module_coFacet___closed__0_once, _init_l_Lake_Module_coFacet___closed__0);
v___x_212_ = lean_obj_once(&l_Lake_Module_leanFacet___closed__0, &l_Lake_Module_leanFacet___closed__0_once, _init_l_Lake_Module_leanFacet___closed__0);
v___x_213_ = l_Lean_Name_mkStr2(v___x_212_, v___x_211_);
return v___x_213_;
}
}
static lean_object* _init_l_Lake_Module_oFacet(void){
_start:
{
lean_object* v___x_214_; 
v___x_214_ = lean_obj_once(&l_Lake_Module_oFacet___closed__0, &l_Lake_Module_oFacet___closed__0_once, _init_l_Lake_Module_oFacet___closed__0);
return v___x_214_;
}
}
static lean_object* _init_l_Lake_Module_oExportFacet___closed__0(void){
_start:
{
lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; 
v___x_215_ = lean_obj_once(&l_Lake_Module_coExportFacet___closed__0, &l_Lake_Module_coExportFacet___closed__0_once, _init_l_Lake_Module_coExportFacet___closed__0);
v___x_216_ = lean_obj_once(&l_Lake_Module_coFacet___closed__0, &l_Lake_Module_coFacet___closed__0_once, _init_l_Lake_Module_coFacet___closed__0);
v___x_217_ = lean_obj_once(&l_Lake_Module_leanFacet___closed__0, &l_Lake_Module_leanFacet___closed__0_once, _init_l_Lake_Module_leanFacet___closed__0);
v___x_218_ = l_Lean_Name_mkStr3(v___x_217_, v___x_216_, v___x_215_);
return v___x_218_;
}
}
static lean_object* _init_l_Lake_Module_oExportFacet(void){
_start:
{
lean_object* v___x_219_; 
v___x_219_ = lean_obj_once(&l_Lake_Module_oExportFacet___closed__0, &l_Lake_Module_oExportFacet___closed__0_once, _init_l_Lake_Module_oExportFacet___closed__0);
return v___x_219_;
}
}
static lean_object* _init_l_Lake_Module_oNoExportFacet___closed__0(void){
_start:
{
lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; 
v___x_220_ = lean_obj_once(&l_Lake_Module_coNoExportFacet___closed__0, &l_Lake_Module_coNoExportFacet___closed__0_once, _init_l_Lake_Module_coNoExportFacet___closed__0);
v___x_221_ = lean_obj_once(&l_Lake_Module_coFacet___closed__0, &l_Lake_Module_coFacet___closed__0_once, _init_l_Lake_Module_coFacet___closed__0);
v___x_222_ = lean_obj_once(&l_Lake_Module_leanFacet___closed__0, &l_Lake_Module_leanFacet___closed__0_once, _init_l_Lake_Module_leanFacet___closed__0);
v___x_223_ = l_Lean_Name_mkStr3(v___x_222_, v___x_221_, v___x_220_);
return v___x_223_;
}
}
static lean_object* _init_l_Lake_Module_oNoExportFacet(void){
_start:
{
lean_object* v___x_224_; 
v___x_224_ = lean_obj_once(&l_Lake_Module_oNoExportFacet___closed__0, &l_Lake_Module_oNoExportFacet___closed__0_once, _init_l_Lake_Module_oNoExportFacet___closed__0);
return v___x_224_;
}
}
static lean_object* _init_l_Lake_Package_optBuildCacheFacet___closed__0(void){
_start:
{
lean_object* v___x_225_; 
v___x_225_ = lean_mk_string_unchecked("package", 7, 7);
return v___x_225_;
}
}
static lean_object* _init_l_Lake_Package_optBuildCacheFacet___closed__1(void){
_start:
{
lean_object* v___x_226_; 
v___x_226_ = lean_mk_string_unchecked("optCache", 8, 8);
return v___x_226_;
}
}
static lean_object* _init_l_Lake_Package_optBuildCacheFacet___closed__2(void){
_start:
{
lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; 
v___x_227_ = lean_obj_once(&l_Lake_Package_optBuildCacheFacet___closed__1, &l_Lake_Package_optBuildCacheFacet___closed__1_once, _init_l_Lake_Package_optBuildCacheFacet___closed__1);
v___x_228_ = lean_obj_once(&l_Lake_Package_optBuildCacheFacet___closed__0, &l_Lake_Package_optBuildCacheFacet___closed__0_once, _init_l_Lake_Package_optBuildCacheFacet___closed__0);
v___x_229_ = l_Lean_Name_mkStr2(v___x_228_, v___x_227_);
return v___x_229_;
}
}
static lean_object* _init_l_Lake_Package_optBuildCacheFacet(void){
_start:
{
lean_object* v___x_230_; 
v___x_230_ = lean_obj_once(&l_Lake_Package_optBuildCacheFacet___closed__2, &l_Lake_Package_optBuildCacheFacet___closed__2_once, _init_l_Lake_Package_optBuildCacheFacet___closed__2);
return v___x_230_;
}
}
static lean_object* _init_l_Lake_Package_buildCacheFacet___closed__0(void){
_start:
{
lean_object* v___x_231_; 
v___x_231_ = lean_mk_string_unchecked("cache", 5, 5);
return v___x_231_;
}
}
static lean_object* _init_l_Lake_Package_buildCacheFacet___closed__1(void){
_start:
{
lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; 
v___x_232_ = lean_obj_once(&l_Lake_Package_buildCacheFacet___closed__0, &l_Lake_Package_buildCacheFacet___closed__0_once, _init_l_Lake_Package_buildCacheFacet___closed__0);
v___x_233_ = lean_obj_once(&l_Lake_Package_optBuildCacheFacet___closed__0, &l_Lake_Package_optBuildCacheFacet___closed__0_once, _init_l_Lake_Package_optBuildCacheFacet___closed__0);
v___x_234_ = l_Lean_Name_mkStr2(v___x_233_, v___x_232_);
return v___x_234_;
}
}
static lean_object* _init_l_Lake_Package_buildCacheFacet(void){
_start:
{
lean_object* v___x_235_; 
v___x_235_ = lean_obj_once(&l_Lake_Package_buildCacheFacet___closed__1, &l_Lake_Package_buildCacheFacet___closed__1_once, _init_l_Lake_Package_buildCacheFacet___closed__1);
return v___x_235_;
}
}
static lean_object* _init_l_Lake_Package_optReservoirBarrelFacet___closed__0(void){
_start:
{
lean_object* v___x_236_; 
v___x_236_ = lean_mk_string_unchecked("optBarrel", 9, 9);
return v___x_236_;
}
}
static lean_object* _init_l_Lake_Package_optReservoirBarrelFacet___closed__1(void){
_start:
{
lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; 
v___x_237_ = lean_obj_once(&l_Lake_Package_optReservoirBarrelFacet___closed__0, &l_Lake_Package_optReservoirBarrelFacet___closed__0_once, _init_l_Lake_Package_optReservoirBarrelFacet___closed__0);
v___x_238_ = lean_obj_once(&l_Lake_Package_optBuildCacheFacet___closed__0, &l_Lake_Package_optBuildCacheFacet___closed__0_once, _init_l_Lake_Package_optBuildCacheFacet___closed__0);
v___x_239_ = l_Lean_Name_mkStr2(v___x_238_, v___x_237_);
return v___x_239_;
}
}
static lean_object* _init_l_Lake_Package_optReservoirBarrelFacet(void){
_start:
{
lean_object* v___x_240_; 
v___x_240_ = lean_obj_once(&l_Lake_Package_optReservoirBarrelFacet___closed__1, &l_Lake_Package_optReservoirBarrelFacet___closed__1_once, _init_l_Lake_Package_optReservoirBarrelFacet___closed__1);
return v___x_240_;
}
}
static lean_object* _init_l_Lake_Package_reservoirBarrelFacet___closed__0(void){
_start:
{
lean_object* v___x_241_; 
v___x_241_ = lean_mk_string_unchecked("barrel", 6, 6);
return v___x_241_;
}
}
static lean_object* _init_l_Lake_Package_reservoirBarrelFacet___closed__1(void){
_start:
{
lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; 
v___x_242_ = lean_obj_once(&l_Lake_Package_reservoirBarrelFacet___closed__0, &l_Lake_Package_reservoirBarrelFacet___closed__0_once, _init_l_Lake_Package_reservoirBarrelFacet___closed__0);
v___x_243_ = lean_obj_once(&l_Lake_Package_optBuildCacheFacet___closed__0, &l_Lake_Package_optBuildCacheFacet___closed__0_once, _init_l_Lake_Package_optBuildCacheFacet___closed__0);
v___x_244_ = l_Lean_Name_mkStr2(v___x_243_, v___x_242_);
return v___x_244_;
}
}
static lean_object* _init_l_Lake_Package_reservoirBarrelFacet(void){
_start:
{
lean_object* v___x_245_; 
v___x_245_ = lean_obj_once(&l_Lake_Package_reservoirBarrelFacet___closed__1, &l_Lake_Package_reservoirBarrelFacet___closed__1_once, _init_l_Lake_Package_reservoirBarrelFacet___closed__1);
return v___x_245_;
}
}
static lean_object* _init_l_Lake_Package_optGitHubReleaseFacet___closed__0(void){
_start:
{
lean_object* v___x_246_; 
v___x_246_ = lean_mk_string_unchecked("optRelease", 10, 10);
return v___x_246_;
}
}
static lean_object* _init_l_Lake_Package_optGitHubReleaseFacet___closed__1(void){
_start:
{
lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; 
v___x_247_ = lean_obj_once(&l_Lake_Package_optGitHubReleaseFacet___closed__0, &l_Lake_Package_optGitHubReleaseFacet___closed__0_once, _init_l_Lake_Package_optGitHubReleaseFacet___closed__0);
v___x_248_ = lean_obj_once(&l_Lake_Package_optBuildCacheFacet___closed__0, &l_Lake_Package_optBuildCacheFacet___closed__0_once, _init_l_Lake_Package_optBuildCacheFacet___closed__0);
v___x_249_ = l_Lean_Name_mkStr2(v___x_248_, v___x_247_);
return v___x_249_;
}
}
static lean_object* _init_l_Lake_Package_optGitHubReleaseFacet(void){
_start:
{
lean_object* v___x_250_; 
v___x_250_ = lean_obj_once(&l_Lake_Package_optGitHubReleaseFacet___closed__1, &l_Lake_Package_optGitHubReleaseFacet___closed__1_once, _init_l_Lake_Package_optGitHubReleaseFacet___closed__1);
return v___x_250_;
}
}
static lean_object* _init_l_Lake_Package_gitHubReleaseFacet___closed__0(void){
_start:
{
lean_object* v___x_251_; 
v___x_251_ = lean_mk_string_unchecked("release", 7, 7);
return v___x_251_;
}
}
static lean_object* _init_l_Lake_Package_gitHubReleaseFacet___closed__1(void){
_start:
{
lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; 
v___x_252_ = lean_obj_once(&l_Lake_Package_gitHubReleaseFacet___closed__0, &l_Lake_Package_gitHubReleaseFacet___closed__0_once, _init_l_Lake_Package_gitHubReleaseFacet___closed__0);
v___x_253_ = lean_obj_once(&l_Lake_Package_optBuildCacheFacet___closed__0, &l_Lake_Package_optBuildCacheFacet___closed__0_once, _init_l_Lake_Package_optBuildCacheFacet___closed__0);
v___x_254_ = l_Lean_Name_mkStr2(v___x_253_, v___x_252_);
return v___x_254_;
}
}
static lean_object* _init_l_Lake_Package_gitHubReleaseFacet(void){
_start:
{
lean_object* v___x_255_; 
v___x_255_ = lean_obj_once(&l_Lake_Package_gitHubReleaseFacet___closed__1, &l_Lake_Package_gitHubReleaseFacet___closed__1_once, _init_l_Lake_Package_gitHubReleaseFacet___closed__1);
return v___x_255_;
}
}
static lean_object* _init_l_Lake_Package_extraDepFacet___closed__0(void){
_start:
{
lean_object* v___x_256_; 
v___x_256_ = lean_mk_string_unchecked("extraDep", 8, 8);
return v___x_256_;
}
}
static lean_object* _init_l_Lake_Package_extraDepFacet___closed__1(void){
_start:
{
lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; 
v___x_257_ = lean_obj_once(&l_Lake_Package_extraDepFacet___closed__0, &l_Lake_Package_extraDepFacet___closed__0_once, _init_l_Lake_Package_extraDepFacet___closed__0);
v___x_258_ = lean_obj_once(&l_Lake_Package_optBuildCacheFacet___closed__0, &l_Lake_Package_optBuildCacheFacet___closed__0_once, _init_l_Lake_Package_optBuildCacheFacet___closed__0);
v___x_259_ = l_Lean_Name_mkStr2(v___x_258_, v___x_257_);
return v___x_259_;
}
}
static lean_object* _init_l_Lake_Package_extraDepFacet(void){
_start:
{
lean_object* v___x_260_; 
v___x_260_ = lean_obj_once(&l_Lake_Package_extraDepFacet___closed__1, &l_Lake_Package_extraDepFacet___closed__1_once, _init_l_Lake_Package_extraDepFacet___closed__1);
return v___x_260_;
}
}
static lean_object* _init_l_Lake_LeanLib_defaultFacet___closed__0(void){
_start:
{
lean_object* v___x_261_; 
v___x_261_ = lean_mk_string_unchecked("lean_lib", 8, 8);
return v___x_261_;
}
}
static lean_object* _init_l_Lake_LeanLib_defaultFacet___closed__1(void){
_start:
{
lean_object* v___x_262_; 
v___x_262_ = lean_mk_string_unchecked("default", 7, 7);
return v___x_262_;
}
}
static lean_object* _init_l_Lake_LeanLib_defaultFacet___closed__2(void){
_start:
{
lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; 
v___x_263_ = lean_obj_once(&l_Lake_LeanLib_defaultFacet___closed__1, &l_Lake_LeanLib_defaultFacet___closed__1_once, _init_l_Lake_LeanLib_defaultFacet___closed__1);
v___x_264_ = lean_obj_once(&l_Lake_LeanLib_defaultFacet___closed__0, &l_Lake_LeanLib_defaultFacet___closed__0_once, _init_l_Lake_LeanLib_defaultFacet___closed__0);
v___x_265_ = l_Lean_Name_mkStr2(v___x_264_, v___x_263_);
return v___x_265_;
}
}
static lean_object* _init_l_Lake_LeanLib_defaultFacet(void){
_start:
{
lean_object* v___x_266_; 
v___x_266_ = lean_obj_once(&l_Lake_LeanLib_defaultFacet___closed__2, &l_Lake_LeanLib_defaultFacet___closed__2_once, _init_l_Lake_LeanLib_defaultFacet___closed__2);
return v___x_266_;
}
}
static lean_object* _init_l_Lake_LeanLib_leanArtsFacet___closed__0(void){
_start:
{
lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; 
v___x_267_ = lean_obj_once(&l_Lake_Module_leanArtsFacet___closed__0, &l_Lake_Module_leanArtsFacet___closed__0_once, _init_l_Lake_Module_leanArtsFacet___closed__0);
v___x_268_ = lean_obj_once(&l_Lake_LeanLib_defaultFacet___closed__0, &l_Lake_LeanLib_defaultFacet___closed__0_once, _init_l_Lake_LeanLib_defaultFacet___closed__0);
v___x_269_ = l_Lean_Name_mkStr2(v___x_268_, v___x_267_);
return v___x_269_;
}
}
static lean_object* _init_l_Lake_LeanLib_leanArtsFacet(void){
_start:
{
lean_object* v___x_270_; 
v___x_270_ = lean_obj_once(&l_Lake_LeanLib_leanArtsFacet___closed__0, &l_Lake_LeanLib_leanArtsFacet___closed__0_once, _init_l_Lake_LeanLib_leanArtsFacet___closed__0);
return v___x_270_;
}
}
static lean_object* _init_l_Lake_LeanLib_staticFacet___closed__0(void){
_start:
{
lean_object* v___x_271_; 
v___x_271_ = lean_mk_string_unchecked("static", 6, 6);
return v___x_271_;
}
}
static lean_object* _init_l_Lake_LeanLib_staticFacet___closed__1(void){
_start:
{
lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; 
v___x_272_ = lean_obj_once(&l_Lake_LeanLib_staticFacet___closed__0, &l_Lake_LeanLib_staticFacet___closed__0_once, _init_l_Lake_LeanLib_staticFacet___closed__0);
v___x_273_ = lean_obj_once(&l_Lake_LeanLib_defaultFacet___closed__0, &l_Lake_LeanLib_defaultFacet___closed__0_once, _init_l_Lake_LeanLib_defaultFacet___closed__0);
v___x_274_ = l_Lean_Name_mkStr2(v___x_273_, v___x_272_);
return v___x_274_;
}
}
static lean_object* _init_l_Lake_LeanLib_staticFacet(void){
_start:
{
lean_object* v___x_275_; 
v___x_275_ = lean_obj_once(&l_Lake_LeanLib_staticFacet___closed__1, &l_Lake_LeanLib_staticFacet___closed__1_once, _init_l_Lake_LeanLib_staticFacet___closed__1);
return v___x_275_;
}
}
static lean_object* _init_l_Lake_LeanLib_staticExportFacet___closed__0(void){
_start:
{
lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; 
v___x_276_ = lean_obj_once(&l_Lake_Module_coExportFacet___closed__0, &l_Lake_Module_coExportFacet___closed__0_once, _init_l_Lake_Module_coExportFacet___closed__0);
v___x_277_ = lean_obj_once(&l_Lake_LeanLib_staticFacet___closed__0, &l_Lake_LeanLib_staticFacet___closed__0_once, _init_l_Lake_LeanLib_staticFacet___closed__0);
v___x_278_ = lean_obj_once(&l_Lake_LeanLib_defaultFacet___closed__0, &l_Lake_LeanLib_defaultFacet___closed__0_once, _init_l_Lake_LeanLib_defaultFacet___closed__0);
v___x_279_ = l_Lean_Name_mkStr3(v___x_278_, v___x_277_, v___x_276_);
return v___x_279_;
}
}
static lean_object* _init_l_Lake_LeanLib_staticExportFacet(void){
_start:
{
lean_object* v___x_280_; 
v___x_280_ = lean_obj_once(&l_Lake_LeanLib_staticExportFacet___closed__0, &l_Lake_LeanLib_staticExportFacet___closed__0_once, _init_l_Lake_LeanLib_staticExportFacet___closed__0);
return v___x_280_;
}
}
static lean_object* _init_l_Lake_LeanLib_sharedFacet___closed__0(void){
_start:
{
lean_object* v___x_281_; 
v___x_281_ = lean_mk_string_unchecked("shared", 6, 6);
return v___x_281_;
}
}
static lean_object* _init_l_Lake_LeanLib_sharedFacet___closed__1(void){
_start:
{
lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; 
v___x_282_ = lean_obj_once(&l_Lake_LeanLib_sharedFacet___closed__0, &l_Lake_LeanLib_sharedFacet___closed__0_once, _init_l_Lake_LeanLib_sharedFacet___closed__0);
v___x_283_ = lean_obj_once(&l_Lake_LeanLib_defaultFacet___closed__0, &l_Lake_LeanLib_defaultFacet___closed__0_once, _init_l_Lake_LeanLib_defaultFacet___closed__0);
v___x_284_ = l_Lean_Name_mkStr2(v___x_283_, v___x_282_);
return v___x_284_;
}
}
static lean_object* _init_l_Lake_LeanLib_sharedFacet(void){
_start:
{
lean_object* v___x_285_; 
v___x_285_ = lean_obj_once(&l_Lake_LeanLib_sharedFacet___closed__1, &l_Lake_LeanLib_sharedFacet___closed__1_once, _init_l_Lake_LeanLib_sharedFacet___closed__1);
return v___x_285_;
}
}
static lean_object* _init_l_Lake_LeanLib_extraDepFacet___closed__0(void){
_start:
{
lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; 
v___x_286_ = lean_obj_once(&l_Lake_Package_extraDepFacet___closed__0, &l_Lake_Package_extraDepFacet___closed__0_once, _init_l_Lake_Package_extraDepFacet___closed__0);
v___x_287_ = lean_obj_once(&l_Lake_LeanLib_defaultFacet___closed__0, &l_Lake_LeanLib_defaultFacet___closed__0_once, _init_l_Lake_LeanLib_defaultFacet___closed__0);
v___x_288_ = l_Lean_Name_mkStr2(v___x_287_, v___x_286_);
return v___x_288_;
}
}
static lean_object* _init_l_Lake_LeanLib_extraDepFacet(void){
_start:
{
lean_object* v___x_289_; 
v___x_289_ = lean_obj_once(&l_Lake_LeanLib_extraDepFacet___closed__0, &l_Lake_LeanLib_extraDepFacet___closed__0_once, _init_l_Lake_LeanLib_extraDepFacet___closed__0);
return v___x_289_;
}
}
static lean_object* _init_l_Lake_LeanExe_defaultFacet___closed__0(void){
_start:
{
lean_object* v___x_290_; 
v___x_290_ = lean_mk_string_unchecked("lean_exe", 8, 8);
return v___x_290_;
}
}
static lean_object* _init_l_Lake_LeanExe_defaultFacet___closed__1(void){
_start:
{
lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; 
v___x_291_ = lean_obj_once(&l_Lake_LeanLib_defaultFacet___closed__1, &l_Lake_LeanLib_defaultFacet___closed__1_once, _init_l_Lake_LeanLib_defaultFacet___closed__1);
v___x_292_ = lean_obj_once(&l_Lake_LeanExe_defaultFacet___closed__0, &l_Lake_LeanExe_defaultFacet___closed__0_once, _init_l_Lake_LeanExe_defaultFacet___closed__0);
v___x_293_ = l_Lean_Name_mkStr2(v___x_292_, v___x_291_);
return v___x_293_;
}
}
static lean_object* _init_l_Lake_LeanExe_defaultFacet(void){
_start:
{
lean_object* v___x_294_; 
v___x_294_ = lean_obj_once(&l_Lake_LeanExe_defaultFacet___closed__1, &l_Lake_LeanExe_defaultFacet___closed__1_once, _init_l_Lake_LeanExe_defaultFacet___closed__1);
return v___x_294_;
}
}
static lean_object* _init_l_Lake_LeanExe_exeFacet___closed__0(void){
_start:
{
lean_object* v___x_295_; 
v___x_295_ = lean_mk_string_unchecked("exe", 3, 3);
return v___x_295_;
}
}
static lean_object* _init_l_Lake_LeanExe_exeFacet___closed__1(void){
_start:
{
lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; 
v___x_296_ = lean_obj_once(&l_Lake_LeanExe_exeFacet___closed__0, &l_Lake_LeanExe_exeFacet___closed__0_once, _init_l_Lake_LeanExe_exeFacet___closed__0);
v___x_297_ = lean_obj_once(&l_Lake_LeanExe_defaultFacet___closed__0, &l_Lake_LeanExe_defaultFacet___closed__0_once, _init_l_Lake_LeanExe_defaultFacet___closed__0);
v___x_298_ = l_Lean_Name_mkStr2(v___x_297_, v___x_296_);
return v___x_298_;
}
}
static lean_object* _init_l_Lake_LeanExe_exeFacet(void){
_start:
{
lean_object* v___x_299_; 
v___x_299_ = lean_obj_once(&l_Lake_LeanExe_exeFacet___closed__1, &l_Lake_LeanExe_exeFacet___closed__1_once, _init_l_Lake_LeanExe_exeFacet___closed__1);
return v___x_299_;
}
}
static lean_object* _init_l_Lake_ExternLib_defaultFacet___closed__0(void){
_start:
{
lean_object* v___x_300_; 
v___x_300_ = lean_mk_string_unchecked("extern_lib", 10, 10);
return v___x_300_;
}
}
static lean_object* _init_l_Lake_ExternLib_defaultFacet___closed__1(void){
_start:
{
lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; 
v___x_301_ = lean_obj_once(&l_Lake_LeanLib_defaultFacet___closed__1, &l_Lake_LeanLib_defaultFacet___closed__1_once, _init_l_Lake_LeanLib_defaultFacet___closed__1);
v___x_302_ = lean_obj_once(&l_Lake_ExternLib_defaultFacet___closed__0, &l_Lake_ExternLib_defaultFacet___closed__0_once, _init_l_Lake_ExternLib_defaultFacet___closed__0);
v___x_303_ = l_Lean_Name_mkStr2(v___x_302_, v___x_301_);
return v___x_303_;
}
}
static lean_object* _init_l_Lake_ExternLib_defaultFacet(void){
_start:
{
lean_object* v___x_304_; 
v___x_304_ = lean_obj_once(&l_Lake_ExternLib_defaultFacet___closed__1, &l_Lake_ExternLib_defaultFacet___closed__1_once, _init_l_Lake_ExternLib_defaultFacet___closed__1);
return v___x_304_;
}
}
static lean_object* _init_l_Lake_ExternLib_staticFacet___closed__0(void){
_start:
{
lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; 
v___x_305_ = lean_obj_once(&l_Lake_LeanLib_staticFacet___closed__0, &l_Lake_LeanLib_staticFacet___closed__0_once, _init_l_Lake_LeanLib_staticFacet___closed__0);
v___x_306_ = lean_obj_once(&l_Lake_ExternLib_defaultFacet___closed__0, &l_Lake_ExternLib_defaultFacet___closed__0_once, _init_l_Lake_ExternLib_defaultFacet___closed__0);
v___x_307_ = l_Lean_Name_mkStr2(v___x_306_, v___x_305_);
return v___x_307_;
}
}
static lean_object* _init_l_Lake_ExternLib_staticFacet(void){
_start:
{
lean_object* v___x_308_; 
v___x_308_ = lean_obj_once(&l_Lake_ExternLib_staticFacet___closed__0, &l_Lake_ExternLib_staticFacet___closed__0_once, _init_l_Lake_ExternLib_staticFacet___closed__0);
return v___x_308_;
}
}
static lean_object* _init_l_Lake_ExternLib_sharedFacet___closed__0(void){
_start:
{
lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; 
v___x_309_ = lean_obj_once(&l_Lake_LeanLib_sharedFacet___closed__0, &l_Lake_LeanLib_sharedFacet___closed__0_once, _init_l_Lake_LeanLib_sharedFacet___closed__0);
v___x_310_ = lean_obj_once(&l_Lake_ExternLib_defaultFacet___closed__0, &l_Lake_ExternLib_defaultFacet___closed__0_once, _init_l_Lake_ExternLib_defaultFacet___closed__0);
v___x_311_ = l_Lean_Name_mkStr2(v___x_310_, v___x_309_);
return v___x_311_;
}
}
static lean_object* _init_l_Lake_ExternLib_sharedFacet(void){
_start:
{
lean_object* v___x_312_; 
v___x_312_ = lean_obj_once(&l_Lake_ExternLib_sharedFacet___closed__0, &l_Lake_ExternLib_sharedFacet___closed__0_once, _init_l_Lake_ExternLib_sharedFacet___closed__0);
return v___x_312_;
}
}
static lean_object* _init_l_Lake_ExternLib_dynlibFacet___closed__0(void){
_start:
{
lean_object* v___x_313_; 
v___x_313_ = lean_mk_string_unchecked("dynlib", 6, 6);
return v___x_313_;
}
}
static lean_object* _init_l_Lake_ExternLib_dynlibFacet___closed__1(void){
_start:
{
lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; 
v___x_314_ = lean_obj_once(&l_Lake_ExternLib_dynlibFacet___closed__0, &l_Lake_ExternLib_dynlibFacet___closed__0_once, _init_l_Lake_ExternLib_dynlibFacet___closed__0);
v___x_315_ = lean_obj_once(&l_Lake_ExternLib_defaultFacet___closed__0, &l_Lake_ExternLib_defaultFacet___closed__0_once, _init_l_Lake_ExternLib_defaultFacet___closed__0);
v___x_316_ = l_Lean_Name_mkStr2(v___x_315_, v___x_314_);
return v___x_316_;
}
}
static lean_object* _init_l_Lake_ExternLib_dynlibFacet(void){
_start:
{
lean_object* v___x_317_; 
v___x_317_ = lean_obj_once(&l_Lake_ExternLib_dynlibFacet___closed__1, &l_Lake_ExternLib_dynlibFacet___closed__1_once, _init_l_Lake_ExternLib_dynlibFacet___closed__1);
return v___x_317_;
}
}
static lean_object* _init_l_Lake_InputFile_defaultFacet___closed__0(void){
_start:
{
lean_object* v___x_318_; 
v___x_318_ = lean_mk_string_unchecked("input_file", 10, 10);
return v___x_318_;
}
}
static lean_object* _init_l_Lake_InputFile_defaultFacet___closed__1(void){
_start:
{
lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; 
v___x_319_ = lean_obj_once(&l_Lake_LeanLib_defaultFacet___closed__1, &l_Lake_LeanLib_defaultFacet___closed__1_once, _init_l_Lake_LeanLib_defaultFacet___closed__1);
v___x_320_ = lean_obj_once(&l_Lake_InputFile_defaultFacet___closed__0, &l_Lake_InputFile_defaultFacet___closed__0_once, _init_l_Lake_InputFile_defaultFacet___closed__0);
v___x_321_ = l_Lean_Name_mkStr2(v___x_320_, v___x_319_);
return v___x_321_;
}
}
static lean_object* _init_l_Lake_InputFile_defaultFacet(void){
_start:
{
lean_object* v___x_322_; 
v___x_322_ = lean_obj_once(&l_Lake_InputFile_defaultFacet___closed__1, &l_Lake_InputFile_defaultFacet___closed__1_once, _init_l_Lake_InputFile_defaultFacet___closed__1);
return v___x_322_;
}
}
static lean_object* _init_l_Lake_InputDir_defaultFacet___closed__0(void){
_start:
{
lean_object* v___x_323_; 
v___x_323_ = lean_mk_string_unchecked("input_dir", 9, 9);
return v___x_323_;
}
}
static lean_object* _init_l_Lake_InputDir_defaultFacet___closed__1(void){
_start:
{
lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; 
v___x_324_ = lean_obj_once(&l_Lake_LeanLib_defaultFacet___closed__1, &l_Lake_LeanLib_defaultFacet___closed__1_once, _init_l_Lake_LeanLib_defaultFacet___closed__1);
v___x_325_ = lean_obj_once(&l_Lake_InputDir_defaultFacet___closed__0, &l_Lake_InputDir_defaultFacet___closed__0_once, _init_l_Lake_InputDir_defaultFacet___closed__0);
v___x_326_ = l_Lean_Name_mkStr2(v___x_325_, v___x_324_);
return v___x_326_;
}
}
static lean_object* _init_l_Lake_InputDir_defaultFacet(void){
_start:
{
lean_object* v___x_327_; 
v___x_327_ = lean_obj_once(&l_Lake_InputDir_defaultFacet___closed__1, &l_Lake_InputDir_defaultFacet___closed__1_once, _init_l_Lake_InputDir_defaultFacet___closed__1);
return v___x_327_;
}
}
lean_object* runtime_initialize_Lake_Build_Job_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lake_Build_ModuleArtifacts(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Build_Facets(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lake_Build_Job_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_ModuleArtifacts(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lake_Module_leanFacet = _init_l_Lake_Module_leanFacet();
lean_mark_persistent(l_Lake_Module_leanFacet);
l_Lake_Module_headerFacet = _init_l_Lake_Module_headerFacet();
lean_mark_persistent(l_Lake_Module_headerFacet);
l_Lake_Module_setupFacet = _init_l_Lake_Module_setupFacet();
lean_mark_persistent(l_Lake_Module_setupFacet);
l_Lake_Module_depsFacet = _init_l_Lake_Module_depsFacet();
lean_mark_persistent(l_Lake_Module_depsFacet);
l_Lake_instInhabitedModuleImportInfo_default = _init_l_Lake_instInhabitedModuleImportInfo_default();
lean_mark_persistent(l_Lake_instInhabitedModuleImportInfo_default);
l_Lake_instInhabitedModuleImportInfo = _init_l_Lake_instInhabitedModuleImportInfo();
lean_mark_persistent(l_Lake_instInhabitedModuleImportInfo);
l_Lake_Module_importInfoFacet = _init_l_Lake_Module_importInfoFacet();
lean_mark_persistent(l_Lake_Module_importInfoFacet);
l_Lake_instInhabitedModuleExportInfo_default = _init_l_Lake_instInhabitedModuleExportInfo_default();
lean_mark_persistent(l_Lake_instInhabitedModuleExportInfo_default);
l_Lake_instInhabitedModuleExportInfo = _init_l_Lake_instInhabitedModuleExportInfo();
lean_mark_persistent(l_Lake_instInhabitedModuleExportInfo);
l_Lake_Module_exportInfoFacet = _init_l_Lake_Module_exportInfoFacet();
lean_mark_persistent(l_Lake_Module_exportInfoFacet);
l_Lake_Module_importArtsFacet = _init_l_Lake_Module_importArtsFacet();
lean_mark_persistent(l_Lake_Module_importArtsFacet);
l_Lake_Module_importAllArtsFacet = _init_l_Lake_Module_importAllArtsFacet();
lean_mark_persistent(l_Lake_Module_importAllArtsFacet);
l_Lake_Module_leanArtsFacet = _init_l_Lake_Module_leanArtsFacet();
lean_mark_persistent(l_Lake_Module_leanArtsFacet);
l_Lake_Module_ltarFacet = _init_l_Lake_Module_ltarFacet();
lean_mark_persistent(l_Lake_Module_ltarFacet);
l_Lake_Module_oleanFacet = _init_l_Lake_Module_oleanFacet();
lean_mark_persistent(l_Lake_Module_oleanFacet);
l_Lake_Module_oleanServerFacet = _init_l_Lake_Module_oleanServerFacet();
lean_mark_persistent(l_Lake_Module_oleanServerFacet);
l_Lake_Module_oleanPrivateFacet = _init_l_Lake_Module_oleanPrivateFacet();
lean_mark_persistent(l_Lake_Module_oleanPrivateFacet);
l_Lake_Module_ileanFacet = _init_l_Lake_Module_ileanFacet();
lean_mark_persistent(l_Lake_Module_ileanFacet);
l_Lake_Module_irFacet = _init_l_Lake_Module_irFacet();
lean_mark_persistent(l_Lake_Module_irFacet);
l_Lake_Module_cFacet = _init_l_Lake_Module_cFacet();
lean_mark_persistent(l_Lake_Module_cFacet);
l_Lake_Module_bcFacet = _init_l_Lake_Module_bcFacet();
lean_mark_persistent(l_Lake_Module_bcFacet);
l_Lake_Module_coFacet = _init_l_Lake_Module_coFacet();
lean_mark_persistent(l_Lake_Module_coFacet);
l_Lake_Module_coExportFacet = _init_l_Lake_Module_coExportFacet();
lean_mark_persistent(l_Lake_Module_coExportFacet);
l_Lake_Module_coNoExportFacet = _init_l_Lake_Module_coNoExportFacet();
lean_mark_persistent(l_Lake_Module_coNoExportFacet);
l_Lake_Module_bcoFacet = _init_l_Lake_Module_bcoFacet();
lean_mark_persistent(l_Lake_Module_bcoFacet);
l_Lake_Module_oFacet = _init_l_Lake_Module_oFacet();
lean_mark_persistent(l_Lake_Module_oFacet);
l_Lake_Module_oExportFacet = _init_l_Lake_Module_oExportFacet();
lean_mark_persistent(l_Lake_Module_oExportFacet);
l_Lake_Module_oNoExportFacet = _init_l_Lake_Module_oNoExportFacet();
lean_mark_persistent(l_Lake_Module_oNoExportFacet);
l_Lake_Package_optBuildCacheFacet = _init_l_Lake_Package_optBuildCacheFacet();
lean_mark_persistent(l_Lake_Package_optBuildCacheFacet);
l_Lake_Package_buildCacheFacet = _init_l_Lake_Package_buildCacheFacet();
lean_mark_persistent(l_Lake_Package_buildCacheFacet);
l_Lake_Package_optReservoirBarrelFacet = _init_l_Lake_Package_optReservoirBarrelFacet();
lean_mark_persistent(l_Lake_Package_optReservoirBarrelFacet);
l_Lake_Package_reservoirBarrelFacet = _init_l_Lake_Package_reservoirBarrelFacet();
lean_mark_persistent(l_Lake_Package_reservoirBarrelFacet);
l_Lake_Package_optGitHubReleaseFacet = _init_l_Lake_Package_optGitHubReleaseFacet();
lean_mark_persistent(l_Lake_Package_optGitHubReleaseFacet);
l_Lake_Package_gitHubReleaseFacet = _init_l_Lake_Package_gitHubReleaseFacet();
lean_mark_persistent(l_Lake_Package_gitHubReleaseFacet);
l_Lake_Package_extraDepFacet = _init_l_Lake_Package_extraDepFacet();
lean_mark_persistent(l_Lake_Package_extraDepFacet);
l_Lake_LeanLib_defaultFacet = _init_l_Lake_LeanLib_defaultFacet();
lean_mark_persistent(l_Lake_LeanLib_defaultFacet);
l_Lake_LeanLib_leanArtsFacet = _init_l_Lake_LeanLib_leanArtsFacet();
lean_mark_persistent(l_Lake_LeanLib_leanArtsFacet);
l_Lake_LeanLib_staticFacet = _init_l_Lake_LeanLib_staticFacet();
lean_mark_persistent(l_Lake_LeanLib_staticFacet);
l_Lake_LeanLib_staticExportFacet = _init_l_Lake_LeanLib_staticExportFacet();
lean_mark_persistent(l_Lake_LeanLib_staticExportFacet);
l_Lake_LeanLib_sharedFacet = _init_l_Lake_LeanLib_sharedFacet();
lean_mark_persistent(l_Lake_LeanLib_sharedFacet);
l_Lake_LeanLib_extraDepFacet = _init_l_Lake_LeanLib_extraDepFacet();
lean_mark_persistent(l_Lake_LeanLib_extraDepFacet);
l_Lake_LeanExe_defaultFacet = _init_l_Lake_LeanExe_defaultFacet();
lean_mark_persistent(l_Lake_LeanExe_defaultFacet);
l_Lake_LeanExe_exeFacet = _init_l_Lake_LeanExe_exeFacet();
lean_mark_persistent(l_Lake_LeanExe_exeFacet);
l_Lake_ExternLib_defaultFacet = _init_l_Lake_ExternLib_defaultFacet();
lean_mark_persistent(l_Lake_ExternLib_defaultFacet);
l_Lake_ExternLib_staticFacet = _init_l_Lake_ExternLib_staticFacet();
lean_mark_persistent(l_Lake_ExternLib_staticFacet);
l_Lake_ExternLib_sharedFacet = _init_l_Lake_ExternLib_sharedFacet();
lean_mark_persistent(l_Lake_ExternLib_sharedFacet);
l_Lake_ExternLib_dynlibFacet = _init_l_Lake_ExternLib_dynlibFacet();
lean_mark_persistent(l_Lake_ExternLib_dynlibFacet);
l_Lake_InputFile_defaultFacet = _init_l_Lake_InputFile_defaultFacet();
lean_mark_persistent(l_Lake_InputFile_defaultFacet);
l_Lake_InputDir_defaultFacet = _init_l_Lake_InputDir_defaultFacet();
lean_mark_persistent(l_Lake_InputDir_defaultFacet);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Lake_Build_Data(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Build_Facets(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Lake_Build_Data(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lake_Build_Job_Basic(uint8_t builtin);
lean_object* initialize_Lake_Build_ModuleArtifacts(uint8_t builtin);
lean_object* initialize_Lake_Build_Data(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Build_Facets(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lake_Build_Job_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Build_ModuleArtifacts(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Build_Data(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Facets(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Build_Facets(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Build_Facets(builtin);
}
#ifdef __cplusplus
}
#endif

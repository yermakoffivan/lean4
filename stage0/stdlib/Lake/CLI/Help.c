// Lean compiler output
// Module: Lake.CLI.Help
// Imports: public import Init.Data.ToString import Lake.Version
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
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
extern lean_object* l_Lake_uiVersionString;
lean_object* lean_string_append(lean_object*, lean_object*);
static lean_once_cell_t l_Lake_usage___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_usage___closed__0;
static lean_once_cell_t l_Lake_usage___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_usage___closed__1;
LEAN_EXPORT lean_object* l_Lake_usage;
static lean_once_cell_t l___private_Lake_CLI_Help_0__Lake_newInitHelp___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_Help_0__Lake_newInitHelp___closed__0;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Help_0__Lake_newInitHelp;
static lean_once_cell_t l___private_Lake_CLI_Help_0__Lake_helpNew___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_Help_0__Lake_helpNew___closed__0;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Help_0__Lake_helpNew;
static lean_once_cell_t l___private_Lake_CLI_Help_0__Lake_helpInit___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_Help_0__Lake_helpInit___closed__0;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Help_0__Lake_helpInit;
static lean_once_cell_t l___private_Lake_CLI_Help_0__Lake_helpBuild___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_Help_0__Lake_helpBuild___closed__0;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Help_0__Lake_helpBuild;
static lean_once_cell_t l___private_Lake_CLI_Help_0__Lake_helpQuery___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_Help_0__Lake_helpQuery___closed__0;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Help_0__Lake_helpQuery;
static lean_once_cell_t l___private_Lake_CLI_Help_0__Lake_helpCheckBuild___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_Help_0__Lake_helpCheckBuild___closed__0;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Help_0__Lake_helpCheckBuild;
static lean_once_cell_t l___private_Lake_CLI_Help_0__Lake_helpUpdate___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_Help_0__Lake_helpUpdate___closed__0;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Help_0__Lake_helpUpdate;
static lean_once_cell_t l___private_Lake_CLI_Help_0__Lake_helpTest___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_Help_0__Lake_helpTest___closed__0;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Help_0__Lake_helpTest;
static lean_once_cell_t l___private_Lake_CLI_Help_0__Lake_helpCheckTest___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_Help_0__Lake_helpCheckTest___closed__0;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Help_0__Lake_helpCheckTest;
static lean_once_cell_t l___private_Lake_CLI_Help_0__Lake_helpLint___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_Help_0__Lake_helpLint___closed__0;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Help_0__Lake_helpLint;
static lean_once_cell_t l___private_Lake_CLI_Help_0__Lake_helpCheckLint___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_Help_0__Lake_helpCheckLint___closed__0;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Help_0__Lake_helpCheckLint;
static lean_once_cell_t l___private_Lake_CLI_Help_0__Lake_helpPack___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_Help_0__Lake_helpPack___closed__0;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Help_0__Lake_helpPack;
static lean_once_cell_t l___private_Lake_CLI_Help_0__Lake_helpUnpack___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_Help_0__Lake_helpUnpack___closed__0;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Help_0__Lake_helpUnpack;
static lean_once_cell_t l___private_Lake_CLI_Help_0__Lake_helpUpload___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_Help_0__Lake_helpUpload___closed__0;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Help_0__Lake_helpUpload;
static lean_once_cell_t l___private_Lake_CLI_Help_0__Lake_helpClean___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_Help_0__Lake_helpClean___closed__0;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Help_0__Lake_helpClean;
static lean_once_cell_t l___private_Lake_CLI_Help_0__Lake_helpShake___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_Help_0__Lake_helpShake___closed__0;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Help_0__Lake_helpShake;
static lean_once_cell_t l___private_Lake_CLI_Help_0__Lake_helpCacheCli___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_Help_0__Lake_helpCacheCli___closed__0;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Help_0__Lake_helpCacheCli;
static lean_once_cell_t l___private_Lake_CLI_Help_0__Lake_helpCacheGet___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_Help_0__Lake_helpCacheGet___closed__0;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Help_0__Lake_helpCacheGet;
static lean_once_cell_t l___private_Lake_CLI_Help_0__Lake_helpCachePut___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_Help_0__Lake_helpCachePut___closed__0;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Help_0__Lake_helpCachePut;
static lean_once_cell_t l___private_Lake_CLI_Help_0__Lake_helpCacheAdd___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_Help_0__Lake_helpCacheAdd___closed__0;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Help_0__Lake_helpCacheAdd;
static lean_once_cell_t l___private_Lake_CLI_Help_0__Lake_helpCacheStage___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_Help_0__Lake_helpCacheStage___closed__0;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Help_0__Lake_helpCacheStage;
static lean_once_cell_t l___private_Lake_CLI_Help_0__Lake_helpCacheUnstage___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_Help_0__Lake_helpCacheUnstage___closed__0;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Help_0__Lake_helpCacheUnstage;
static lean_once_cell_t l___private_Lake_CLI_Help_0__Lake_helpCachePutStaged___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_Help_0__Lake_helpCachePutStaged___closed__0;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Help_0__Lake_helpCachePutStaged;
static lean_once_cell_t l___private_Lake_CLI_Help_0__Lake_helpCacheClean___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_Help_0__Lake_helpCacheClean___closed__0;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Help_0__Lake_helpCacheClean;
static lean_once_cell_t l___private_Lake_CLI_Help_0__Lake_helpCacheServices___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_Help_0__Lake_helpCacheServices___closed__0;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Help_0__Lake_helpCacheServices;
static lean_once_cell_t l___private_Lake_CLI_Help_0__Lake_helpScriptCli___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_Help_0__Lake_helpScriptCli___closed__0;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Help_0__Lake_helpScriptCli;
static lean_once_cell_t l___private_Lake_CLI_Help_0__Lake_helpScriptList___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_Help_0__Lake_helpScriptList___closed__0;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Help_0__Lake_helpScriptList;
static lean_once_cell_t l___private_Lake_CLI_Help_0__Lake_helpScriptRun___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_Help_0__Lake_helpScriptRun___closed__0;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Help_0__Lake_helpScriptRun;
static lean_once_cell_t l___private_Lake_CLI_Help_0__Lake_helpScriptDoc___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_Help_0__Lake_helpScriptDoc___closed__0;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Help_0__Lake_helpScriptDoc;
static lean_once_cell_t l___private_Lake_CLI_Help_0__Lake_helpServe___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_Help_0__Lake_helpServe___closed__0;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Help_0__Lake_helpServe;
static lean_once_cell_t l___private_Lake_CLI_Help_0__Lake_helpEnv___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_Help_0__Lake_helpEnv___closed__0;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Help_0__Lake_helpEnv;
static lean_once_cell_t l___private_Lake_CLI_Help_0__Lake_helpExe___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_Help_0__Lake_helpExe___closed__0;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Help_0__Lake_helpExe;
static lean_once_cell_t l___private_Lake_CLI_Help_0__Lake_helpLean___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_Help_0__Lake_helpLean___closed__0;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Help_0__Lake_helpLean;
static lean_once_cell_t l___private_Lake_CLI_Help_0__Lake_helpTranslateConfig___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_Help_0__Lake_helpTranslateConfig___closed__0;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Help_0__Lake_helpTranslateConfig;
static lean_once_cell_t l_Lake_helpScript___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_helpScript___closed__0;
static lean_once_cell_t l_Lake_helpScript___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_helpScript___closed__1;
static lean_once_cell_t l_Lake_helpScript___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_helpScript___closed__2;
LEAN_EXPORT lean_object* l_Lake_helpScript(lean_object*);
LEAN_EXPORT lean_object* l_Lake_helpScript___boxed(lean_object*);
static lean_once_cell_t l_Lake_helpCache___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_helpCache___closed__0;
static lean_once_cell_t l_Lake_helpCache___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_helpCache___closed__1;
static lean_once_cell_t l_Lake_helpCache___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_helpCache___closed__2;
static lean_once_cell_t l_Lake_helpCache___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_helpCache___closed__3;
static lean_once_cell_t l_Lake_helpCache___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_helpCache___closed__4;
static lean_once_cell_t l_Lake_helpCache___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_helpCache___closed__5;
static lean_once_cell_t l_Lake_helpCache___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_helpCache___closed__6;
static lean_once_cell_t l_Lake_helpCache___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_helpCache___closed__7;
LEAN_EXPORT lean_object* l_Lake_helpCache(lean_object*);
LEAN_EXPORT lean_object* l_Lake_helpCache___boxed(lean_object*);
static lean_once_cell_t l_Lake_help___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_help___closed__0;
static lean_once_cell_t l_Lake_help___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_help___closed__1;
static lean_once_cell_t l_Lake_help___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_help___closed__2;
static lean_once_cell_t l_Lake_help___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_help___closed__3;
static lean_once_cell_t l_Lake_help___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_help___closed__4;
static lean_once_cell_t l_Lake_help___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_help___closed__5;
static lean_once_cell_t l_Lake_help___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_help___closed__6;
static lean_once_cell_t l_Lake_help___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_help___closed__7;
static lean_once_cell_t l_Lake_help___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_help___closed__8;
static lean_once_cell_t l_Lake_help___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_help___closed__9;
static lean_once_cell_t l_Lake_help___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_help___closed__10;
static lean_once_cell_t l_Lake_help___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_help___closed__11;
static lean_once_cell_t l_Lake_help___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_help___closed__12;
static lean_once_cell_t l_Lake_help___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_help___closed__13;
static lean_once_cell_t l_Lake_help___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_help___closed__14;
static lean_once_cell_t l_Lake_help___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_help___closed__15;
static lean_once_cell_t l_Lake_help___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_help___closed__16;
static lean_once_cell_t l_Lake_help___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_help___closed__17;
static lean_once_cell_t l_Lake_help___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_help___closed__18;
static lean_once_cell_t l_Lake_help___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_help___closed__19;
static lean_once_cell_t l_Lake_help___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_help___closed__20;
static lean_once_cell_t l_Lake_help___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_help___closed__21;
static lean_once_cell_t l_Lake_help___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_help___closed__22;
static lean_once_cell_t l_Lake_help___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_help___closed__23;
LEAN_EXPORT lean_object* l_Lake_help(lean_object*);
LEAN_EXPORT lean_object* l_Lake_help___boxed(lean_object*);
static lean_object* _init_l_Lake_usage___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = lean_mk_string_unchecked("\n\nUSAGE:\n  lake [OPTIONS] <COMMAND>\n\nCOMMANDS:\n  new <name> <temp>     create a Lean package in a new directory\n  init <name> <temp>    create a Lean package in the current directory\n  build <targets>...    build targets\n  query <targets>...    build targets and output results\n  exe <exe> <args>...   build an exe and run it in Lake's environment\n  check-build           check if any default build targets are configured\n  test                  test the package using the configured test driver\n  check-test            check if there is a properly configured test driver\n  lint                  lint the package\n  check-lint            check if there is a properly configured lint driver\n  clean                 remove build outputs\n  shake                 minimize imports in source files\n  env <cmd> <args>...   execute a command in Lake's environment\n  lean <file>           elaborate a Lean file in Lake's context\n  update                update dependencies and save them to the manifest\n  pack                  pack build artifacts into an archive for distribution\n  unpack                unpack build artifacts from an distributed archive\n  upload <tag>          upload build artifacts to a GitHub release\n  cache                 manage the Lake cache\n  script                manage and run workspace scripts\n  scripts               shorthand for `lake script list`\n  run <script>          shorthand for `lake script run`\n  translate-config      change language of the package configuration\n  serve                 start the Lean language server\n\nBASIC OPTIONS:\n  --version             print version and exit\n  --help, -h            print help of the program or a command and exit\n  --dir, -d=file        use the package configuration in a specific directory\n  --file, -f=file       use a specific file for the package configuration\n  -K key[=value]        set the configuration file option named key\n  --old                 only rebuild modified modules (ignore transitive deps)\n  --rehash, -H          hash all files for traces (do not trust `.hash` files)\n  --update              update dependencies on load (e.g., before a build)\n  --packages=file       JSON file of package entries that override the manifest\n  --reconfigure, -R     elaborate configuration files instead of using OLeans\n  --keep-toolchain      do not update toolchain on workspace update\n  --allow-empty         accept bare builds with no default targets configured\n  --no-build            exit immediately if a build target is not up-to-date\n  --no-cache            build packages locally; do not download build caches\n  --try-cache           attempt to download build caches for supported packages\n  --json, -J            output JSON-formatted results (in `lake query`)\n  --text                output results as plain text (in `lake query`)\n\nOUTPUT OPTIONS:\n  --quiet, -q           hide informational logs and the progress indicator\n  --verbose, -v         show trace logs (command invocations) and built targets\n  --ansi, --no-ansi     toggle the use of ANSI escape codes to prettify output\n  --log-level=lv        minimum log level to output on success\n                        (levels: trace, info, warning, error)\n  --fail-level=lv       minimum log level to fail a build (default: error)\n  --iofail              fail build if any I/O or other info is logged\n                        (same as --fail-level=info)\n  --wfail               fail build if warnings are logged\n                        (same as --fail-level=warning)\n\n\nSee `lake help <command>` for more information on a specific command.", 3579, 3579);
return v___x_1_;
}
}
static lean_object* _init_l_Lake_usage___closed__1(void){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; lean_object* v___x_4_; 
v___x_2_ = lean_obj_once(&l_Lake_usage___closed__0, &l_Lake_usage___closed__0_once, _init_l_Lake_usage___closed__0);
v___x_3_ = l_Lake_uiVersionString;
v___x_4_ = lean_string_append(v___x_3_, v___x_2_);
return v___x_4_;
}
}
static lean_object* _init_l_Lake_usage(void){
_start:
{
lean_object* v___x_5_; 
v___x_5_ = lean_obj_once(&l_Lake_usage___closed__1, &l_Lake_usage___closed__1_once, _init_l_Lake_usage___closed__1);
return v___x_5_;
}
}
static lean_object* _init_l___private_Lake_CLI_Help_0__Lake_newInitHelp___closed__0(void){
_start:
{
lean_object* v___x_6_; 
v___x_6_ = lean_mk_string_unchecked("If you are using Lake through Elan (which is standard), you can create a\npackage with a specific Lean version via the `+` option.\n\nThe initial configuration and starter files are based on the template:\n\n  std                   library and executable; default\n  exe                   executable only\n  lib                   library only\n  math-lax              library only with a Mathlib dependency\n  math                  library with Mathlib standards for linting and workflows\n\nTemplates can be suffixed with `.lean` or `.toml` to produce a Lean or TOML\nversion of the configuration file, respectively. The default is TOML.", 626, 626);
return v___x_6_;
}
}
static lean_object* _init_l___private_Lake_CLI_Help_0__Lake_newInitHelp(void){
_start:
{
lean_object* v___x_7_; 
v___x_7_ = lean_obj_once(&l___private_Lake_CLI_Help_0__Lake_newInitHelp___closed__0, &l___private_Lake_CLI_Help_0__Lake_newInitHelp___closed__0_once, _init_l___private_Lake_CLI_Help_0__Lake_newInitHelp___closed__0);
return v___x_7_;
}
}
static lean_object* _init_l___private_Lake_CLI_Help_0__Lake_helpNew___closed__0(void){
_start:
{
lean_object* v___x_8_; 
v___x_8_ = lean_mk_string_unchecked("Create a Lean package in a new directory\n\nUSAGE:\n  lake [+<lean-version>] new <name> [<template>][.<language>]\n\nIf you are using Lake through Elan (which is standard), you can create a\npackage with a specific Lean version via the `+` option.\n\nThe initial configuration and starter files are based on the template:\n\n  std                   library and executable; default\n  exe                   executable only\n  lib                   library only\n  math-lax              library only with a Mathlib dependency\n  math                  library with Mathlib standards for linting and workflows\n\nTemplates can be suffixed with `.lean` or `.toml` to produce a Lean or TOML\nversion of the configuration file, respectively. The default is TOML.", 738, 738);
return v___x_8_;
}
}
static lean_object* _init_l___private_Lake_CLI_Help_0__Lake_helpNew(void){
_start:
{
lean_object* v___x_9_; 
v___x_9_ = lean_obj_once(&l___private_Lake_CLI_Help_0__Lake_helpNew___closed__0, &l___private_Lake_CLI_Help_0__Lake_helpNew___closed__0_once, _init_l___private_Lake_CLI_Help_0__Lake_helpNew___closed__0);
return v___x_9_;
}
}
static lean_object* _init_l___private_Lake_CLI_Help_0__Lake_helpInit___closed__0(void){
_start:
{
lean_object* v___x_10_; 
v___x_10_ = lean_mk_string_unchecked("Create a Lean package in the current directory\n\nUSAGE:\n  lake [+<lean-version>] init [<name>] [<template>][.<language>]\n\nIf you are using Lake through Elan (which is standard), you can create a\npackage with a specific Lean version via the `+` option.\n\nThe initial configuration and starter files are based on the template:\n\n  std                   library and executable; default\n  exe                   executable only\n  lib                   library only\n  math-lax              library only with a Mathlib dependency\n  math                  library with Mathlib standards for linting and workflows\n\nTemplates can be suffixed with `.lean` or `.toml` to produce a Lean or TOML\nversion of the configuration file, respectively. The default is TOML.\n\nYou can create a package with current directory's name via `lake init .`\nor a bare `lake init`.", 844, 844);
return v___x_10_;
}
}
static lean_object* _init_l___private_Lake_CLI_Help_0__Lake_helpInit(void){
_start:
{
lean_object* v___x_11_; 
v___x_11_ = lean_obj_once(&l___private_Lake_CLI_Help_0__Lake_helpInit___closed__0, &l___private_Lake_CLI_Help_0__Lake_helpInit___closed__0_once, _init_l___private_Lake_CLI_Help_0__Lake_helpInit___closed__0);
return v___x_11_;
}
}
static lean_object* _init_l___private_Lake_CLI_Help_0__Lake_helpBuild___closed__0(void){
_start:
{
lean_object* v___x_12_; 
v___x_12_ = lean_mk_string_unchecked("Build targets\n\nUSAGE:\n  lake build [<targets>...] [-o <mappings>]\n\nA target is specified with a string of the form:\n\n  [@[<package>]/][<target>|[+]<module>][:<facet>]\n\nYou can also use the source path of a module as a target. For example,\n\n  lake build Foo/Bar.lean:o\n\nwill build the Lean module (within the workspace) whose source file is\n`Foo/Bar.lean` and compile the generated C file into a native object file.\n\nThe `@` and `+` markers can be used to disambiguate packages and modules\nfrom file paths or other kinds of targets (e.g., executables or libraries).\n\nLIBRARY FACETS:         build the library's ...\n  leanArts (default)    Lean artifacts (*.olean, *.ilean, *.c files)\n  static                static artifact (*.a file)\n  shared                shared artifact (*.so, *.dll, or *.dylib file)\n\nMODULE FACETS:          build the module's ...\n  deps                  dependencies (e.g., imports, shared libraries, etc.)\n  leanArts (default)    Lean artifacts (*.olean, *.ilean, *.c files)\n  olean                 OLean (binary blob of Lean data for importers)\n  ilean                 ILean (binary blob of metadata for the Lean LSP server)\n  c                     compiled C file\n  bc                    compiled LLVM bitcode file\n  c.o                   compiled object file (of its C file)\n  bc.o                  compiled object file (of its LLVM bitcode file)\n  o                     compiled object file (of its configured backend)\n  dynlib                shared library (e.g., for `--load-dynlib`)\n\nTARGET EXAMPLES:        build the ...\n  a                     default facet(s) of target `a`\n  @a                    default target(s) of package `a`\n  +A                    default facet(s) of module `A`\n  @/a                   default facet(s) of target `a` of the root package\n  @a/b                  default facet(s) of target `b` of package `a`\n  @a/+A:c               C file of module `A` of package `a`\n  :foo                  facet `foo` of the root package\n\nA bare `lake build` command will build the default target(s) of the root\npackage. Package dependencies are not updated during a build.\n\nWith the Lake cache enabled, the `-o` option will cause Lake to track the\ninput-to-outputs mappings of targets in the root package touched during the\nbuild and write them to the specified file at the end of the build. These\nmappings can then be used to upload build artifacts to a remote cache with\n`lake cache put`.", 2434, 2434);
return v___x_12_;
}
}
static lean_object* _init_l___private_Lake_CLI_Help_0__Lake_helpBuild(void){
_start:
{
lean_object* v___x_13_; 
v___x_13_ = lean_obj_once(&l___private_Lake_CLI_Help_0__Lake_helpBuild___closed__0, &l___private_Lake_CLI_Help_0__Lake_helpBuild___closed__0_once, _init_l___private_Lake_CLI_Help_0__Lake_helpBuild___closed__0);
return v___x_13_;
}
}
static lean_object* _init_l___private_Lake_CLI_Help_0__Lake_helpQuery___closed__0(void){
_start:
{
lean_object* v___x_14_; 
v___x_14_ = lean_mk_string_unchecked("Build targets and output results\n\nUSAGE:\n  lake query [<targets>...]\n\nBuilds a set of targets, reporting progress on standard error and outputting\nthe results on standard out. Target results are output in the same order they\nare listed and end with a newline. If `--json` is set, results are formatted as\nJSON. Otherwise, they are printed as raw strings. Targets which do not have\noutput configured will be printed as an empty string or `null`.\n\nSee `lake help build` for information on and examples of targets.", 511, 511);
return v___x_14_;
}
}
static lean_object* _init_l___private_Lake_CLI_Help_0__Lake_helpQuery(void){
_start:
{
lean_object* v___x_15_; 
v___x_15_ = lean_obj_once(&l___private_Lake_CLI_Help_0__Lake_helpQuery___closed__0, &l___private_Lake_CLI_Help_0__Lake_helpQuery___closed__0_once, _init_l___private_Lake_CLI_Help_0__Lake_helpQuery___closed__0);
return v___x_15_;
}
}
static lean_object* _init_l___private_Lake_CLI_Help_0__Lake_helpCheckBuild___closed__0(void){
_start:
{
lean_object* v___x_16_; 
v___x_16_ = lean_mk_string_unchecked("Check if any default build targets are configured\n\nUSAGE:\n  lake check-build\n\nExits with code 0 if the workspace's root package has any\ndefault targets configured. Errors (with code 1) otherwise.\n\nDoes NOT verify that the configured default targets are valid.\nIt merely verifies that some are specified.\n", 304, 304);
return v___x_16_;
}
}
static lean_object* _init_l___private_Lake_CLI_Help_0__Lake_helpCheckBuild(void){
_start:
{
lean_object* v___x_17_; 
v___x_17_ = lean_obj_once(&l___private_Lake_CLI_Help_0__Lake_helpCheckBuild___closed__0, &l___private_Lake_CLI_Help_0__Lake_helpCheckBuild___closed__0_once, _init_l___private_Lake_CLI_Help_0__Lake_helpCheckBuild___closed__0);
return v___x_17_;
}
}
static lean_object* _init_l___private_Lake_CLI_Help_0__Lake_helpUpdate___closed__0(void){
_start:
{
lean_object* v___x_18_; 
v___x_18_ = lean_mk_string_unchecked("Update dependencies and save them to the manifest\n\nUSAGE:\n  lake update [<package>...]\n\nALIAS: lake upgrade\n\nUpdates the Lake package manifest (i.e., `lake-manifest.json`),\ndownloading and upgrading packages as needed. For each new (transitive) git\ndependency, the appropriate commit is cloned into a subdirectory of\n`packagesDir`. No copy is made of local dependencies.\n\nIf a set of packages are specified, said dependencies are upgraded to\nthe latest version compatible with the package's configuration (or removed if\nremoved from the configuration). If there are dependencies on multiple versions\nof the same package, the version materialized is undefined.\n\nA bare `lake update` will upgrade all dependencies.", 712, 712);
return v___x_18_;
}
}
static lean_object* _init_l___private_Lake_CLI_Help_0__Lake_helpUpdate(void){
_start:
{
lean_object* v___x_19_; 
v___x_19_ = lean_obj_once(&l___private_Lake_CLI_Help_0__Lake_helpUpdate___closed__0, &l___private_Lake_CLI_Help_0__Lake_helpUpdate___closed__0_once, _init_l___private_Lake_CLI_Help_0__Lake_helpUpdate___closed__0);
return v___x_19_;
}
}
static lean_object* _init_l___private_Lake_CLI_Help_0__Lake_helpTest___closed__0(void){
_start:
{
lean_object* v___x_20_; 
v___x_20_ = lean_mk_string_unchecked("Test the workspace's root package using its configured test driver\n\nUSAGE:\n  lake test [-- <args>...]\n\nA test driver can be configured by either setting the 'testDriver'\npackage configuration option or by tagging a script, executable, or library\n`@[test_driver]`. A definition in a dependency can be used as a test driver\nby using the `<pkg>/<name>` syntax for the 'testDriver' configuration option.\n\nA script test driver will be run with the  package configuration's\n`testDriverArgs` plus the CLI `args`. An executable test driver will be\nbuilt and then run like a script. A library test driver will just be built.\n", 616, 616);
return v___x_20_;
}
}
static lean_object* _init_l___private_Lake_CLI_Help_0__Lake_helpTest(void){
_start:
{
lean_object* v___x_21_; 
v___x_21_ = lean_obj_once(&l___private_Lake_CLI_Help_0__Lake_helpTest___closed__0, &l___private_Lake_CLI_Help_0__Lake_helpTest___closed__0_once, _init_l___private_Lake_CLI_Help_0__Lake_helpTest___closed__0);
return v___x_21_;
}
}
static lean_object* _init_l___private_Lake_CLI_Help_0__Lake_helpCheckTest___closed__0(void){
_start:
{
lean_object* v___x_22_; 
v___x_22_ = lean_mk_string_unchecked("Check if there is a properly configured test driver\n\nUSAGE:\n  lake check-test\n\nExits with code 0 if the workspace's root package has a properly\nconfigured lint driver. Errors (with code 1) otherwise.\n\nDoes NOT verify that the configured test driver actually exists in the\npackage or its dependencies. It merely verifies that one is specified.\n", 343, 343);
return v___x_22_;
}
}
static lean_object* _init_l___private_Lake_CLI_Help_0__Lake_helpCheckTest(void){
_start:
{
lean_object* v___x_23_; 
v___x_23_ = lean_obj_once(&l___private_Lake_CLI_Help_0__Lake_helpCheckTest___closed__0, &l___private_Lake_CLI_Help_0__Lake_helpCheckTest___closed__0_once, _init_l___private_Lake_CLI_Help_0__Lake_helpCheckTest___closed__0);
return v___x_23_;
}
}
static lean_object* _init_l___private_Lake_CLI_Help_0__Lake_helpLint___closed__0(void){
_start:
{
lean_object* v___x_24_; 
v___x_24_ = lean_mk_string_unchecked("Lint the workspace's root package\n\nUSAGE:\n  lake lint [OPTIONS] [<MODULE>...] [-- <args>...]\n\nBy default, runs the package's configured lint driver. If `builtinLint` is\nset to `true` in the package configuration, builtin lints also run.\n\nPositional `MODULE` arguments narrow only the builtin lints; if omitted,\nthe workspace's default target roots are used. The lint driver is invoked\nwith `lintDriverArgs` from the package config plus any arguments after\n`--`; the `MODULE` list is not passed to it.\n\nOPTIONS:\n  --builtin-lint        run builtin environment linters\n  --builtin-only        run only builtin linters, skip the lint driver\n  --clippy              run only non-default (clippy) builtin linters\n  --lint-all            run all builtin linters (default + clippy)\n  --lint-only <name>    run only the specified builtin linter (repeatable)\n  --force               skip the up-to-date build check\n\nA lint driver can be configured by either setting the `lintDriver` package\nconfiguration option or by tagging a script or executable `@[lint_driver]`.\nA definition in a dependency can be used as a lint driver by using the\n`<pkg>/<name>` syntax for the 'lintDriver' configuration option.\n\nA script lint driver will be run with the package configuration's\n`lintDriverArgs` plus the CLI `args`. An executable lint driver will be\nbuilt and then run like a script.\n", 1367, 1367);
return v___x_24_;
}
}
static lean_object* _init_l___private_Lake_CLI_Help_0__Lake_helpLint(void){
_start:
{
lean_object* v___x_25_; 
v___x_25_ = lean_obj_once(&l___private_Lake_CLI_Help_0__Lake_helpLint___closed__0, &l___private_Lake_CLI_Help_0__Lake_helpLint___closed__0_once, _init_l___private_Lake_CLI_Help_0__Lake_helpLint___closed__0);
return v___x_25_;
}
}
static lean_object* _init_l___private_Lake_CLI_Help_0__Lake_helpCheckLint___closed__0(void){
_start:
{
lean_object* v___x_26_; 
v___x_26_ = lean_mk_string_unchecked("Check if there is a properly configured lint driver\n\nUSAGE:\n  lake check-lint\n\nExits with code 0 if the workspace's root package has a properly\nconfigured lint driver. Errors (with code 1) otherwise.\n\nDoes NOT verify that the configured lint driver actually exists in the\npackage or its dependencies. It merely verifies that one is specified.\n", 343, 343);
return v___x_26_;
}
}
static lean_object* _init_l___private_Lake_CLI_Help_0__Lake_helpCheckLint(void){
_start:
{
lean_object* v___x_27_; 
v___x_27_ = lean_obj_once(&l___private_Lake_CLI_Help_0__Lake_helpCheckLint___closed__0, &l___private_Lake_CLI_Help_0__Lake_helpCheckLint___closed__0_once, _init_l___private_Lake_CLI_Help_0__Lake_helpCheckLint___closed__0);
return v___x_27_;
}
}
static lean_object* _init_l___private_Lake_CLI_Help_0__Lake_helpPack___closed__0(void){
_start:
{
lean_object* v___x_28_; 
v___x_28_ = lean_mk_string_unchecked("Pack build artifacts into an archive for distribution\n\nUSAGE:\n  lake pack [<file.tgz>]\n\nPacks the root package's `buildDir` into a gzip tar archive using `tar`.\nIf a path for the archive is not specified, creates an archive in the package's\nLake directory (`.lake`) named according to its `buildArchive` setting.\n\nDoes NOT build any artifacts. It just packs the existing ones.", 376, 376);
return v___x_28_;
}
}
static lean_object* _init_l___private_Lake_CLI_Help_0__Lake_helpPack(void){
_start:
{
lean_object* v___x_29_; 
v___x_29_ = lean_obj_once(&l___private_Lake_CLI_Help_0__Lake_helpPack___closed__0, &l___private_Lake_CLI_Help_0__Lake_helpPack___closed__0_once, _init_l___private_Lake_CLI_Help_0__Lake_helpPack___closed__0);
return v___x_29_;
}
}
static lean_object* _init_l___private_Lake_CLI_Help_0__Lake_helpUnpack___closed__0(void){
_start:
{
lean_object* v___x_30_; 
v___x_30_ = lean_mk_string_unchecked("Unpack build artifacts from a distributed archive\n\nUSAGE:\n  lake unpack [<file.tgz>]\n\nUnpack build artifacts from the gzip tar archive `file.tgz` into the root\npackage's `buildDir`. If a path for the archive is not specified, uses the\nthe package's `buildArchive` in its Lake directory (`.lake`).", 296, 296);
return v___x_30_;
}
}
static lean_object* _init_l___private_Lake_CLI_Help_0__Lake_helpUnpack(void){
_start:
{
lean_object* v___x_31_; 
v___x_31_ = lean_obj_once(&l___private_Lake_CLI_Help_0__Lake_helpUnpack___closed__0, &l___private_Lake_CLI_Help_0__Lake_helpUnpack___closed__0_once, _init_l___private_Lake_CLI_Help_0__Lake_helpUnpack___closed__0);
return v___x_31_;
}
}
static lean_object* _init_l___private_Lake_CLI_Help_0__Lake_helpUpload___closed__0(void){
_start:
{
lean_object* v___x_32_; 
v___x_32_ = lean_mk_string_unchecked("Upload build artifacts to a GitHub release\n\nUSAGE:\n  lake upload <tag>\n\nPacks the root package's `buildDir` into a `tar.gz` archive using `tar` and\nthen uploads the asset to the pre-existing GitHub release `tag` using `gh`.", 223, 223);
return v___x_32_;
}
}
static lean_object* _init_l___private_Lake_CLI_Help_0__Lake_helpUpload(void){
_start:
{
lean_object* v___x_33_; 
v___x_33_ = lean_obj_once(&l___private_Lake_CLI_Help_0__Lake_helpUpload___closed__0, &l___private_Lake_CLI_Help_0__Lake_helpUpload___closed__0_once, _init_l___private_Lake_CLI_Help_0__Lake_helpUpload___closed__0);
return v___x_33_;
}
}
static lean_object* _init_l___private_Lake_CLI_Help_0__Lake_helpClean___closed__0(void){
_start:
{
lean_object* v___x_34_; 
v___x_34_ = lean_mk_string_unchecked("Remove build outputs\n\nUSAGE:\n  lake clean [<package>...]\n\nIf no package is specified, deletes the build directories of every package in\nthe workspace. Otherwise, just deletes those of the specified packages.", 207, 207);
return v___x_34_;
}
}
static lean_object* _init_l___private_Lake_CLI_Help_0__Lake_helpClean(void){
_start:
{
lean_object* v___x_35_; 
v___x_35_ = lean_obj_once(&l___private_Lake_CLI_Help_0__Lake_helpClean___closed__0, &l___private_Lake_CLI_Help_0__Lake_helpClean___closed__0_once, _init_l___private_Lake_CLI_Help_0__Lake_helpClean___closed__0);
return v___x_35_;
}
}
static lean_object* _init_l___private_Lake_CLI_Help_0__Lake_helpShake___closed__0(void){
_start:
{
lean_object* v___x_36_; 
v___x_36_ = lean_mk_string_unchecked("Minimize imports in Lean source files\n\nUSAGE:\n  lake shake [OPTIONS] [<MODULE>...]\n\nChecks the current project for unused imports by analyzing generated `.olean`\nfiles to deduce required imports and ensuring that every import contributes\nsome constant or other elaboration dependency.\n\nARGUMENTS:\n  <MODULE>              A module path like `Mathlib`. All files transitively\n                        reachable from the provided module(s) will be checked.\n                        If not specified, uses the package's default targets.\n\nOPTIONS:\n  --force               Skip the `lake build --no-build` sanity check\n  --keep-implied        Preserve imports implied by other imports\n  --keep-prefix         Prefer parent module imports over specific submodules\n  --keep-public         Preserve all `public` imports for API stability\n  --add-public          Add new imports as `public` if they were in the\n                        original public closure\n  --explain             Show which constants require each import\n  --fix                 Apply suggested fixes directly to source files\n  --gh-style            Output in GitHub problem matcher format\n\nANNOTATIONS:\n  Source files can contain special comments to control shake behavior:\n\n  * `module -- shake: keep-downstream`\n    Preserves this module in all downstream modules\n\n  * `module -- shake: keep-all`\n    Preserves all existing imports in this module\n\n  * `import X -- shake: keep`\n    Preserves this specific import", 1472, 1472);
return v___x_36_;
}
}
static lean_object* _init_l___private_Lake_CLI_Help_0__Lake_helpShake(void){
_start:
{
lean_object* v___x_37_; 
v___x_37_ = lean_obj_once(&l___private_Lake_CLI_Help_0__Lake_helpShake___closed__0, &l___private_Lake_CLI_Help_0__Lake_helpShake___closed__0_once, _init_l___private_Lake_CLI_Help_0__Lake_helpShake___closed__0);
return v___x_37_;
}
}
static lean_object* _init_l___private_Lake_CLI_Help_0__Lake_helpCacheCli___closed__0(void){
_start:
{
lean_object* v___x_38_; 
v___x_38_ = lean_mk_string_unchecked("Manage the Lake cache\n\nUSAGE:\n  lake cache <COMMAND>\n\nCOMMANDS:\n  get [<mappings>]      download build outputs into the local Lake cache\n  put <mappings>        upload build outputs to a remote cache\n  add <mappings>        add input-to-output mappings to the Lake cache\n  clean                 removes ALL from the local Lake cache\n  services              print configured remote cache services\n\nSTAGING COMMANDS:\n  stage <map> <dir>     copy build outputs from the cache to a directory\n  unstage <dir>         cache build outputs from a staging directory\n  put-staged <dir>      upload build outputs from a staging directory\n\nSee `lake cache help <command>` for more information on a specific command.", 703, 703);
return v___x_38_;
}
}
static lean_object* _init_l___private_Lake_CLI_Help_0__Lake_helpCacheCli(void){
_start:
{
lean_object* v___x_39_; 
v___x_39_ = lean_obj_once(&l___private_Lake_CLI_Help_0__Lake_helpCacheCli___closed__0, &l___private_Lake_CLI_Help_0__Lake_helpCacheCli___closed__0_once, _init_l___private_Lake_CLI_Help_0__Lake_helpCacheCli___closed__0);
return v___x_39_;
}
}
static lean_object* _init_l___private_Lake_CLI_Help_0__Lake_helpCacheGet___closed__0(void){
_start:
{
lean_object* v___x_40_; 
v___x_40_ = lean_mk_string_unchecked("Download build outputs from a remote service into the Lake cache\n\nUSAGE:\n  lake cache get [<mappings>]\n\nOPTIONS:\n  --max-revs=<n>                  backtrack up to n revisions (default: 100)\n  --rev=<commit-hash>             uses this exact revision to lookup artifacts\n  --service=<name>                cache service to fetch from\n  --repo=<github-repo>            GitHub repository of the package or a fork\n  --platform=<target-triple>      with Reservoir or --repo, sets the platform\n  --toolchain=<name>              with Reservoir or --repo, sets the toolchain\n  --scope=<remote-scope>          scope for a custom endpoint\n  --mappings-only                 only download mappings, delay artifacts\n  --force-download                redownload existing files\n\nDownloads build outputs for packages in the workspace from a remote cache\nservice. The cache service used can be specified via the `--service` option.\nOtherwise, Lake will the system default, or, if none is configured, Reservoir.\nSee `lake cache services` for more information on how to configure services.\n\nIf an input-to-outputs mappings file, `--scope`, or `--repo` is provided,\nLake will download build outputs for the root package. Otherwise, it will use\nReservoir to download outputs for each dependency in the workspace (in order).\nNon-Reservoir dependencies will be skipped.\n\nTo determine what to download, Lake searches for input-to-output mappings for\na given build of the package via the cache service. This mapping is identified\nby a Git revision and prefixed with a scope derived from the package's name,\nGitHub repository, Lean toolchain, and current platform. The exact configuration\ncan be customized using options.\n\nFor Reservoir, setting `--repo` will cause Lake to lookup outputs for the root\npackage by a repository name, rather than the package's. This can be used to\ndownload outputs for a fork of the Reservoir package (if such artifacts are\navailable). The `--platform` and `--toolchain` options can be used to download\nartifacts for a different platform/toolchain configuration than Lake detects.\nFor a custom endpoint, the full prefix Lake uses can be set via  `--scope`.\n\nIf `--rev` is not set, Lake uses the package's current revision to lookup\nartifacts. If no mappings are found, Lake will backtrack the Git history up to\n`--max-revs`, looking for a revision with mappings. If `--max-revs` is 0, Lake\nwill search the repository's entire history (or as far as Git will allow).\n\nBy default, Lake will download both the input-to-output mappings and the\noutput artifacts for a package. By using `--mappings-onlys`, Lake will only\ndownload the mappings and delay downloading artifacts until they are needed.\n\nIf a download for an artifact fails or the download process for a whole\npackage fails, Lake will report this and continue on to the next. Once done,\nif any download failed, Lake will exit with a nonzero status code.", 2911, 2911);
return v___x_40_;
}
}
static lean_object* _init_l___private_Lake_CLI_Help_0__Lake_helpCacheGet(void){
_start:
{
lean_object* v___x_41_; 
v___x_41_ = lean_obj_once(&l___private_Lake_CLI_Help_0__Lake_helpCacheGet___closed__0, &l___private_Lake_CLI_Help_0__Lake_helpCacheGet___closed__0_once, _init_l___private_Lake_CLI_Help_0__Lake_helpCacheGet___closed__0);
return v___x_41_;
}
}
static lean_object* _init_l___private_Lake_CLI_Help_0__Lake_helpCachePut___closed__0(void){
_start:
{
lean_object* v___x_42_; 
v___x_42_ = lean_mk_string_unchecked("Upload build outputs from the Lake cache to a remote service\n\nUSAGE:\n  lake cache put <mappings> <scope-option>\n\nUploads the input-to-output mappings contained in the specified file along\nwith the corresponding output artifacts to a remote cache. The cache service\nused can be specified via the `--service` option. If not specified, Lake will use\nthe system default, or error if none is configured. See the help page of\n`lake cache services` for more information on how to configure services.\n\nFiles are uploaded using the AWS Signature Version 4 authentication protocol\nvia `curl`. Thus, the service should generally be an S3-compatible bucket. The\nauthentication key is set via the `LAKE_CACHE_KEY` environment variable.\n\nSince Lake does not currently use cryptographically secure hashes for\nartifacts and outputs, uploads to the cache are prefixed with a scope to avoid\nclashes. This scope is configured with the following options:\n\n  --scope=<remote-scope>          sets a fixed scope\n  --repo=<github-repo>            uses the repository + toolchain & platform\n  --toolchain=<name>              with --repo, sets the toolchain\n  --platform=<target-triple>      with --repo, sets the platform\n\nAt least one of `--scope` or `--repo` must be set. If `--repo` is used, Lake\nwill produce a scope by augmenting the repository with toolchain and platform\ninformation as it deems necessary. If `--scope` is set, Lake will use the\nspecified scope verbatim.\n\nArtifacts are uploaded to the artifact endpoint with a file name derived\nfrom their Lake content hash (and prefixed by the repository or scope).\nThe mappings file is uploaded to the revision endpoint with a file name\nderived from the package's current Git revision (and prefixed by the\nfull scope). As such, the command will warn if the work tree currently\nhas changes.", 1823, 1823);
return v___x_42_;
}
}
static lean_object* _init_l___private_Lake_CLI_Help_0__Lake_helpCachePut(void){
_start:
{
lean_object* v___x_43_; 
v___x_43_ = lean_obj_once(&l___private_Lake_CLI_Help_0__Lake_helpCachePut___closed__0, &l___private_Lake_CLI_Help_0__Lake_helpCachePut___closed__0_once, _init_l___private_Lake_CLI_Help_0__Lake_helpCachePut___closed__0);
return v___x_43_;
}
}
static lean_object* _init_l___private_Lake_CLI_Help_0__Lake_helpCacheAdd___closed__0(void){
_start:
{
lean_object* v___x_44_; 
v___x_44_ = lean_mk_string_unchecked("Add input-to-output mappings to the Lake cache\n\nUSAGE:\n  lake cache add <mappings>\n\nOPTIONS:\n  --service=<name>                cache service to fetch from on demand\n  --scope=<remote-scope>          the prefix of artifacts within the service\n  --repo=<github-repo>            for Reservoir, a GitHub repository scope\n\nReads a list of input-to-output mappings from the provided file and adds\nthem to the local Lake cache. If `--service` is provided, the output artifacts\ncan then be fetched lazily from that service during a Lake build. The service\nmust either be `reservoir` or  be configured through the Lake system\nconfiguration (see the help page of `lake cache services` for details).\n\nSince Lake does not currently use cryptographically secure hashes for\nartifacts and outputs, artifacts in a cache service are prefixed with a scope\nto avoid clashes. For Reservoir, this scope can either be a package (set via\n`--scope`) or a repository (set via `--repo`). For S3 services, both options\nare synonymous.", 1007, 1007);
return v___x_44_;
}
}
static lean_object* _init_l___private_Lake_CLI_Help_0__Lake_helpCacheAdd(void){
_start:
{
lean_object* v___x_45_; 
v___x_45_ = lean_obj_once(&l___private_Lake_CLI_Help_0__Lake_helpCacheAdd___closed__0, &l___private_Lake_CLI_Help_0__Lake_helpCacheAdd___closed__0_once, _init_l___private_Lake_CLI_Help_0__Lake_helpCacheAdd___closed__0);
return v___x_45_;
}
}
static lean_object* _init_l___private_Lake_CLI_Help_0__Lake_helpCacheStage___closed__0(void){
_start:
{
lean_object* v___x_46_; 
v___x_46_ = lean_mk_string_unchecked("Copy build outputs from the cache to a staging directory\n\nUSAGE:\n  lake cache stage <mappings> <staging-directory>\n\nCreates the staging directory and copies the mappings file to it. Then, it\ncopies all artifacts described within the mappings file from the cache to the\nstaging directory. Errors if any of the artifacts described cannot be found in\nthe cache.", 358, 358);
return v___x_46_;
}
}
static lean_object* _init_l___private_Lake_CLI_Help_0__Lake_helpCacheStage(void){
_start:
{
lean_object* v___x_47_; 
v___x_47_ = lean_obj_once(&l___private_Lake_CLI_Help_0__Lake_helpCacheStage___closed__0, &l___private_Lake_CLI_Help_0__Lake_helpCacheStage___closed__0_once, _init_l___private_Lake_CLI_Help_0__Lake_helpCacheStage___closed__0);
return v___x_47_;
}
}
static lean_object* _init_l___private_Lake_CLI_Help_0__Lake_helpCacheUnstage___closed__0(void){
_start:
{
lean_object* v___x_48_; 
v___x_48_ = lean_mk_string_unchecked("Cache build outputs from a staging directory\n\nUSAGE:\n  lake cache unstage <staging-directory>\n\nCopies the mappings and artifacts stored in staging directory (e.g., via\n`lake cache stage`) back into the cache.\n\nReads the mappings file located at `outputs.jsonl` within the staging\ndirectory and writes the mappings to the Lake cache. Then, it copies the\ndescribed artifacts from the staging directory into the cache.", 415, 415);
return v___x_48_;
}
}
static lean_object* _init_l___private_Lake_CLI_Help_0__Lake_helpCacheUnstage(void){
_start:
{
lean_object* v___x_49_; 
v___x_49_ = lean_obj_once(&l___private_Lake_CLI_Help_0__Lake_helpCacheUnstage___closed__0, &l___private_Lake_CLI_Help_0__Lake_helpCacheUnstage___closed__0_once, _init_l___private_Lake_CLI_Help_0__Lake_helpCacheUnstage___closed__0);
return v___x_49_;
}
}
static lean_object* _init_l___private_Lake_CLI_Help_0__Lake_helpCachePutStaged___closed__0(void){
_start:
{
lean_object* v___x_50_; 
v___x_50_ = lean_mk_string_unchecked("Upload build outputs from a staging directory to a remote service\n\nUSAGE:\n  lake cache put-staged <staging-directory>\n\nOPTIONS:\n  --scope=<remote-scope>          verbatim scope\n  --repo=<github-repo>            scope with repository + toolchain & platform\n  --toolchain=<name>              with --repo, sets the toolchain\n  --platform=<target-triple>      with --repo, sets the platform\n\nWorks like `lake cache put` but uploads outputs from the staging directory\ninstead of the Lake cache. Does not configure the workspace and thus does not\nexecute arbitrary user code. However, because of this, the package's platform\nand toolchain settings will not be automatically detected and must be\nspecified manually via `--platform` and `--toolchain` (if desired).", 756, 756);
return v___x_50_;
}
}
static lean_object* _init_l___private_Lake_CLI_Help_0__Lake_helpCachePutStaged(void){
_start:
{
lean_object* v___x_51_; 
v___x_51_ = lean_obj_once(&l___private_Lake_CLI_Help_0__Lake_helpCachePutStaged___closed__0, &l___private_Lake_CLI_Help_0__Lake_helpCachePutStaged___closed__0_once, _init_l___private_Lake_CLI_Help_0__Lake_helpCachePutStaged___closed__0);
return v___x_51_;
}
}
static lean_object* _init_l___private_Lake_CLI_Help_0__Lake_helpCacheClean___closed__0(void){
_start:
{
lean_object* v___x_52_; 
v___x_52_ = lean_mk_string_unchecked("Removes ALL files from the local Lake cache\n\nUSAGE:\n  lake cache clean\n\nDeletes the configured Lake cache directory. If a workspace configuration\nexists, this will delete the cache directory it uses. Otherwise, it will\ndelete the default Lake cache directory for the system.", 274, 274);
return v___x_52_;
}
}
static lean_object* _init_l___private_Lake_CLI_Help_0__Lake_helpCacheClean(void){
_start:
{
lean_object* v___x_53_; 
v___x_53_ = lean_obj_once(&l___private_Lake_CLI_Help_0__Lake_helpCacheClean___closed__0, &l___private_Lake_CLI_Help_0__Lake_helpCacheClean___closed__0_once, _init_l___private_Lake_CLI_Help_0__Lake_helpCacheClean___closed__0);
return v___x_53_;
}
}
static lean_object* _init_l___private_Lake_CLI_Help_0__Lake_helpCacheServices___closed__0(void){
_start:
{
lean_object* v___x_54_; 
v___x_54_ = lean_mk_string_unchecked("Print configured remote cache services\n\nUSAGE:\n  lake cache services\n\nPrints the name of each configured remote cache services (one per line).\nAdditional services can be added by modifying the system Lake configuration.\nThe exact location of the this configuration file is system dependent and can\nbe set by `LAKE_CONFIG`, but it is usually located at `~/.lake/config.toml`.\n\nThe configuration of the system cache could look something like the following:\n\n  cache.defaultService = \"my-s3\"\n  cache.defaultUploadService = \"my-s3\"\n\n  [[cache.service]]\n  name = \"my-s3\"\n  kind = \"s3\"\n  artifactEndpoint = \"https://my-s3.com/a0\"\n  revisionEndpoint = \"https://my-s3.com/r0\"\n\nIf no `cache.defaultService` is configured, Lake will use Reservoir by default.", 748, 748);
return v___x_54_;
}
}
static lean_object* _init_l___private_Lake_CLI_Help_0__Lake_helpCacheServices(void){
_start:
{
lean_object* v___x_55_; 
v___x_55_ = lean_obj_once(&l___private_Lake_CLI_Help_0__Lake_helpCacheServices___closed__0, &l___private_Lake_CLI_Help_0__Lake_helpCacheServices___closed__0_once, _init_l___private_Lake_CLI_Help_0__Lake_helpCacheServices___closed__0);
return v___x_55_;
}
}
static lean_object* _init_l___private_Lake_CLI_Help_0__Lake_helpScriptCli___closed__0(void){
_start:
{
lean_object* v___x_56_; 
v___x_56_ = lean_mk_string_unchecked("Manage Lake scripts\n\nUSAGE:\n  lake script <COMMAND>\n\nCOMMANDS:\n  list                  list available scripts\n  run <script>          run a script\n  doc <script>          print the docstring of a given script\n\nSee `lake script help <command>` for more information on a specific command.", 286, 286);
return v___x_56_;
}
}
static lean_object* _init_l___private_Lake_CLI_Help_0__Lake_helpScriptCli(void){
_start:
{
lean_object* v___x_57_; 
v___x_57_ = lean_obj_once(&l___private_Lake_CLI_Help_0__Lake_helpScriptCli___closed__0, &l___private_Lake_CLI_Help_0__Lake_helpScriptCli___closed__0_once, _init_l___private_Lake_CLI_Help_0__Lake_helpScriptCli___closed__0);
return v___x_57_;
}
}
static lean_object* _init_l___private_Lake_CLI_Help_0__Lake_helpScriptList___closed__0(void){
_start:
{
lean_object* v___x_58_; 
v___x_58_ = lean_mk_string_unchecked("List available scripts\n\nUSAGE:\n  lake script list\n\nALIAS: lake scripts\n\nThis command prints the list of all available scripts in the workspace.", 143, 143);
return v___x_58_;
}
}
static lean_object* _init_l___private_Lake_CLI_Help_0__Lake_helpScriptList(void){
_start:
{
lean_object* v___x_59_; 
v___x_59_ = lean_obj_once(&l___private_Lake_CLI_Help_0__Lake_helpScriptList___closed__0, &l___private_Lake_CLI_Help_0__Lake_helpScriptList___closed__0_once, _init_l___private_Lake_CLI_Help_0__Lake_helpScriptList___closed__0);
return v___x_59_;
}
}
static lean_object* _init_l___private_Lake_CLI_Help_0__Lake_helpScriptRun___closed__0(void){
_start:
{
lean_object* v___x_60_; 
v___x_60_ = lean_mk_string_unchecked("Run a script\n\nUSAGE:\n  lake script run [[<package>/]<script>] [<args>...]\n\nALIAS: lake run\n\nThis command runs the `script` of the workspace (or the specific `package`),\npassing `args` to it.\n\nA bare `lake run` command will run the default script(s) of the root package\n(with no arguments).", 289, 289);
return v___x_60_;
}
}
static lean_object* _init_l___private_Lake_CLI_Help_0__Lake_helpScriptRun(void){
_start:
{
lean_object* v___x_61_; 
v___x_61_ = lean_obj_once(&l___private_Lake_CLI_Help_0__Lake_helpScriptRun___closed__0, &l___private_Lake_CLI_Help_0__Lake_helpScriptRun___closed__0_once, _init_l___private_Lake_CLI_Help_0__Lake_helpScriptRun___closed__0);
return v___x_61_;
}
}
static lean_object* _init_l___private_Lake_CLI_Help_0__Lake_helpScriptDoc___closed__0(void){
_start:
{
lean_object* v___x_62_; 
v___x_62_ = lean_mk_string_unchecked("Print a script's docstring\n\nUSAGE:\n  lake script doc [<package>/]<script>\n\nPrint the docstring of `script` in the workspace or the specific `package`.", 150, 150);
return v___x_62_;
}
}
static lean_object* _init_l___private_Lake_CLI_Help_0__Lake_helpScriptDoc(void){
_start:
{
lean_object* v___x_63_; 
v___x_63_ = lean_obj_once(&l___private_Lake_CLI_Help_0__Lake_helpScriptDoc___closed__0, &l___private_Lake_CLI_Help_0__Lake_helpScriptDoc___closed__0_once, _init_l___private_Lake_CLI_Help_0__Lake_helpScriptDoc___closed__0);
return v___x_63_;
}
}
static lean_object* _init_l___private_Lake_CLI_Help_0__Lake_helpServe___closed__0(void){
_start:
{
lean_object* v___x_64_; 
v___x_64_ = lean_mk_string_unchecked("Start the Lean language server\n\nUSAGE:\n  lake serve [-- <args>...]\n\nRun the language server of the Lean installation (i.e., via `lean --server`)\nwith the package configuration's `moreServerArgs` field and `args`.\n", 213, 213);
return v___x_64_;
}
}
static lean_object* _init_l___private_Lake_CLI_Help_0__Lake_helpServe(void){
_start:
{
lean_object* v___x_65_; 
v___x_65_ = lean_obj_once(&l___private_Lake_CLI_Help_0__Lake_helpServe___closed__0, &l___private_Lake_CLI_Help_0__Lake_helpServe___closed__0_once, _init_l___private_Lake_CLI_Help_0__Lake_helpServe___closed__0);
return v___x_65_;
}
}
static lean_object* _init_l___private_Lake_CLI_Help_0__Lake_helpEnv___closed__0(void){
_start:
{
lean_object* v___x_66_; 
v___x_66_ = lean_mk_string_unchecked("Execute a command in Lake's environment\n\nUSAGE:\n  lake env [<cmd>] [<args>...]\n\nSpawns a new process executing `cmd` with the given `args` and with\nthe environment set based on the detected Lean/Lake installations and\nthe workspace configuration (if it exists).\n\nSpecifically, this command sets the following environment variables:\n\n  LAKE                  set to the detected Lake executable\n  LAKE_HOME             set to the detected Lake home\n  LEAN_SYSROOT          set to the detected Lean toolchain directory\n  LEAN_AR               set to the detected Lean `ar` binary\n  LEAN_CC               set to the detected `cc` (if not using the bundled one)\n  LEAN_PATH             adds Lake's and the workspace's Lean library dirs\n  LEAN_SRC_PATH         adds Lake's and the workspace's source dirs\n  PATH                  adds Lean's, Lake's, and the workspace's binary dirs\n  PATH                  adds Lean's and the workspace's library dirs (Windows)\n  DYLD_LIBRARY_PATH     adds Lean's and the workspace's library dirs (MacOS)\n  LD_LIBRARY_PATH       adds Lean's and the workspace's library dirs (other)\n\nA bare `lake env` will print out the variables set and their values,\nusing the form NAME=VALUE like the POSIX `env` command.", 1234, 1234);
return v___x_66_;
}
}
static lean_object* _init_l___private_Lake_CLI_Help_0__Lake_helpEnv(void){
_start:
{
lean_object* v___x_67_; 
v___x_67_ = lean_obj_once(&l___private_Lake_CLI_Help_0__Lake_helpEnv___closed__0, &l___private_Lake_CLI_Help_0__Lake_helpEnv___closed__0_once, _init_l___private_Lake_CLI_Help_0__Lake_helpEnv___closed__0);
return v___x_67_;
}
}
static lean_object* _init_l___private_Lake_CLI_Help_0__Lake_helpExe___closed__0(void){
_start:
{
lean_object* v___x_68_; 
v___x_68_ = lean_mk_string_unchecked("Build an executable target and run it in Lake's environment\n\nUSAGE:\n  lake exe <exe-target> [<args>...]\n\nALIAS: lake exec\n\nLooks for the executable target in the workspace (see `lake help build` to\nlearn how to specify targets), builds it if it is out of date, and then runs\nit with the given `args` in Lake's environment (see `lake help env` for how\nthe environment is set up).", 378, 378);
return v___x_68_;
}
}
static lean_object* _init_l___private_Lake_CLI_Help_0__Lake_helpExe(void){
_start:
{
lean_object* v___x_69_; 
v___x_69_ = lean_obj_once(&l___private_Lake_CLI_Help_0__Lake_helpExe___closed__0, &l___private_Lake_CLI_Help_0__Lake_helpExe___closed__0_once, _init_l___private_Lake_CLI_Help_0__Lake_helpExe___closed__0);
return v___x_69_;
}
}
static lean_object* _init_l___private_Lake_CLI_Help_0__Lake_helpLean___closed__0(void){
_start:
{
lean_object* v___x_70_; 
v___x_70_ = lean_mk_string_unchecked("Elaborate a Lean file in the context of the Lake workspace\n\nUSAGE:\n  lake lean <file> [-- <args>...]\n\nBuild the imports of the given file and then runs `lean` on it using\nthe workspace's root package's additional Lean arguments and the given args\n(in that order). The `lean` process is executed in Lake's environment like\n`lake env lean` (see `lake help env` for how the environment is set up).", 394, 394);
return v___x_70_;
}
}
static lean_object* _init_l___private_Lake_CLI_Help_0__Lake_helpLean(void){
_start:
{
lean_object* v___x_71_; 
v___x_71_ = lean_obj_once(&l___private_Lake_CLI_Help_0__Lake_helpLean___closed__0, &l___private_Lake_CLI_Help_0__Lake_helpLean___closed__0_once, _init_l___private_Lake_CLI_Help_0__Lake_helpLean___closed__0);
return v___x_71_;
}
}
static lean_object* _init_l___private_Lake_CLI_Help_0__Lake_helpTranslateConfig___closed__0(void){
_start:
{
lean_object* v___x_72_; 
v___x_72_ = lean_mk_string_unchecked("Translate a Lake configuration file into a different language\n\nUSAGE:\n  lake translate-config <lang> [<out-file>]\n\nTranslates the loaded package's configuration into another of\nLake's supported configuration languages (i.e., either `lean` or `toml`).\nThe produced file is written to `out-file` or, if not provided, the path of\nthe configuration file with the new language's extension. If the output file\nalready exists, Lake will error.\n\nTranslation is lossy. It does not preserve comments or formatting and\nnon-declarative configuration will be discarded.", 556, 556);
return v___x_72_;
}
}
static lean_object* _init_l___private_Lake_CLI_Help_0__Lake_helpTranslateConfig(void){
_start:
{
lean_object* v___x_73_; 
v___x_73_ = lean_obj_once(&l___private_Lake_CLI_Help_0__Lake_helpTranslateConfig___closed__0, &l___private_Lake_CLI_Help_0__Lake_helpTranslateConfig___closed__0_once, _init_l___private_Lake_CLI_Help_0__Lake_helpTranslateConfig___closed__0);
return v___x_73_;
}
}
static lean_object* _init_l_Lake_helpScript___closed__0(void){
_start:
{
lean_object* v___x_74_; 
v___x_74_ = lean_mk_string_unchecked("list", 4, 4);
return v___x_74_;
}
}
static lean_object* _init_l_Lake_helpScript___closed__1(void){
_start:
{
lean_object* v___x_75_; 
v___x_75_ = lean_mk_string_unchecked("run", 3, 3);
return v___x_75_;
}
}
static lean_object* _init_l_Lake_helpScript___closed__2(void){
_start:
{
lean_object* v___x_76_; 
v___x_76_ = lean_mk_string_unchecked("doc", 3, 3);
return v___x_76_;
}
}
LEAN_EXPORT lean_object* l_Lake_helpScript(lean_object* v_x_77_){
_start:
{
lean_object* v___x_78_; uint8_t v___x_79_; 
v___x_78_ = lean_obj_once(&l_Lake_helpScript___closed__0, &l_Lake_helpScript___closed__0_once, _init_l_Lake_helpScript___closed__0);
v___x_79_ = lean_string_dec_eq(v_x_77_, v___x_78_);
if (v___x_79_ == 0)
{
lean_object* v___x_80_; uint8_t v___x_81_; 
v___x_80_ = lean_obj_once(&l_Lake_helpScript___closed__1, &l_Lake_helpScript___closed__1_once, _init_l_Lake_helpScript___closed__1);
v___x_81_ = lean_string_dec_eq(v_x_77_, v___x_80_);
if (v___x_81_ == 0)
{
lean_object* v___x_82_; uint8_t v___x_83_; 
v___x_82_ = lean_obj_once(&l_Lake_helpScript___closed__2, &l_Lake_helpScript___closed__2_once, _init_l_Lake_helpScript___closed__2);
v___x_83_ = lean_string_dec_eq(v_x_77_, v___x_82_);
if (v___x_83_ == 0)
{
lean_object* v___x_84_; 
v___x_84_ = lean_obj_once(&l___private_Lake_CLI_Help_0__Lake_helpScriptCli___closed__0, &l___private_Lake_CLI_Help_0__Lake_helpScriptCli___closed__0_once, _init_l___private_Lake_CLI_Help_0__Lake_helpScriptCli___closed__0);
return v___x_84_;
}
else
{
lean_object* v___x_85_; 
v___x_85_ = lean_obj_once(&l___private_Lake_CLI_Help_0__Lake_helpScriptDoc___closed__0, &l___private_Lake_CLI_Help_0__Lake_helpScriptDoc___closed__0_once, _init_l___private_Lake_CLI_Help_0__Lake_helpScriptDoc___closed__0);
return v___x_85_;
}
}
else
{
lean_object* v___x_86_; 
v___x_86_ = lean_obj_once(&l___private_Lake_CLI_Help_0__Lake_helpScriptRun___closed__0, &l___private_Lake_CLI_Help_0__Lake_helpScriptRun___closed__0_once, _init_l___private_Lake_CLI_Help_0__Lake_helpScriptRun___closed__0);
return v___x_86_;
}
}
else
{
lean_object* v___x_87_; 
v___x_87_ = lean_obj_once(&l___private_Lake_CLI_Help_0__Lake_helpScriptList___closed__0, &l___private_Lake_CLI_Help_0__Lake_helpScriptList___closed__0_once, _init_l___private_Lake_CLI_Help_0__Lake_helpScriptList___closed__0);
return v___x_87_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_helpScript___boxed(lean_object* v_x_88_){
_start:
{
lean_object* v_res_89_; 
v_res_89_ = l_Lake_helpScript(v_x_88_);
lean_dec_ref(v_x_88_);
return v_res_89_;
}
}
static lean_object* _init_l_Lake_helpCache___closed__0(void){
_start:
{
lean_object* v___x_90_; 
v___x_90_ = lean_mk_string_unchecked("get", 3, 3);
return v___x_90_;
}
}
static lean_object* _init_l_Lake_helpCache___closed__1(void){
_start:
{
lean_object* v___x_91_; 
v___x_91_ = lean_mk_string_unchecked("put", 3, 3);
return v___x_91_;
}
}
static lean_object* _init_l_Lake_helpCache___closed__2(void){
_start:
{
lean_object* v___x_92_; 
v___x_92_ = lean_mk_string_unchecked("add", 3, 3);
return v___x_92_;
}
}
static lean_object* _init_l_Lake_helpCache___closed__3(void){
_start:
{
lean_object* v___x_93_; 
v___x_93_ = lean_mk_string_unchecked("stage", 5, 5);
return v___x_93_;
}
}
static lean_object* _init_l_Lake_helpCache___closed__4(void){
_start:
{
lean_object* v___x_94_; 
v___x_94_ = lean_mk_string_unchecked("unstage", 7, 7);
return v___x_94_;
}
}
static lean_object* _init_l_Lake_helpCache___closed__5(void){
_start:
{
lean_object* v___x_95_; 
v___x_95_ = lean_mk_string_unchecked("put-staged", 10, 10);
return v___x_95_;
}
}
static lean_object* _init_l_Lake_helpCache___closed__6(void){
_start:
{
lean_object* v___x_96_; 
v___x_96_ = lean_mk_string_unchecked("clean", 5, 5);
return v___x_96_;
}
}
static lean_object* _init_l_Lake_helpCache___closed__7(void){
_start:
{
lean_object* v___x_97_; 
v___x_97_ = lean_mk_string_unchecked("services", 8, 8);
return v___x_97_;
}
}
LEAN_EXPORT lean_object* l_Lake_helpCache(lean_object* v_x_98_){
_start:
{
lean_object* v___x_99_; uint8_t v___x_100_; 
v___x_99_ = lean_obj_once(&l_Lake_helpCache___closed__0, &l_Lake_helpCache___closed__0_once, _init_l_Lake_helpCache___closed__0);
v___x_100_ = lean_string_dec_eq(v_x_98_, v___x_99_);
if (v___x_100_ == 0)
{
lean_object* v___x_101_; uint8_t v___x_102_; 
v___x_101_ = lean_obj_once(&l_Lake_helpCache___closed__1, &l_Lake_helpCache___closed__1_once, _init_l_Lake_helpCache___closed__1);
v___x_102_ = lean_string_dec_eq(v_x_98_, v___x_101_);
if (v___x_102_ == 0)
{
lean_object* v___x_103_; uint8_t v___x_104_; 
v___x_103_ = lean_obj_once(&l_Lake_helpCache___closed__2, &l_Lake_helpCache___closed__2_once, _init_l_Lake_helpCache___closed__2);
v___x_104_ = lean_string_dec_eq(v_x_98_, v___x_103_);
if (v___x_104_ == 0)
{
lean_object* v___x_105_; uint8_t v___x_106_; 
v___x_105_ = lean_obj_once(&l_Lake_helpCache___closed__3, &l_Lake_helpCache___closed__3_once, _init_l_Lake_helpCache___closed__3);
v___x_106_ = lean_string_dec_eq(v_x_98_, v___x_105_);
if (v___x_106_ == 0)
{
lean_object* v___x_107_; uint8_t v___x_108_; 
v___x_107_ = lean_obj_once(&l_Lake_helpCache___closed__4, &l_Lake_helpCache___closed__4_once, _init_l_Lake_helpCache___closed__4);
v___x_108_ = lean_string_dec_eq(v_x_98_, v___x_107_);
if (v___x_108_ == 0)
{
lean_object* v___x_109_; uint8_t v___x_110_; 
v___x_109_ = lean_obj_once(&l_Lake_helpCache___closed__5, &l_Lake_helpCache___closed__5_once, _init_l_Lake_helpCache___closed__5);
v___x_110_ = lean_string_dec_eq(v_x_98_, v___x_109_);
if (v___x_110_ == 0)
{
lean_object* v___x_111_; uint8_t v___x_112_; 
v___x_111_ = lean_obj_once(&l_Lake_helpCache___closed__6, &l_Lake_helpCache___closed__6_once, _init_l_Lake_helpCache___closed__6);
v___x_112_ = lean_string_dec_eq(v_x_98_, v___x_111_);
if (v___x_112_ == 0)
{
lean_object* v___x_113_; uint8_t v___x_114_; 
v___x_113_ = lean_obj_once(&l_Lake_helpCache___closed__7, &l_Lake_helpCache___closed__7_once, _init_l_Lake_helpCache___closed__7);
v___x_114_ = lean_string_dec_eq(v_x_98_, v___x_113_);
if (v___x_114_ == 0)
{
lean_object* v___x_115_; 
v___x_115_ = lean_obj_once(&l___private_Lake_CLI_Help_0__Lake_helpCacheCli___closed__0, &l___private_Lake_CLI_Help_0__Lake_helpCacheCli___closed__0_once, _init_l___private_Lake_CLI_Help_0__Lake_helpCacheCli___closed__0);
return v___x_115_;
}
else
{
lean_object* v___x_116_; 
v___x_116_ = lean_obj_once(&l___private_Lake_CLI_Help_0__Lake_helpCacheServices___closed__0, &l___private_Lake_CLI_Help_0__Lake_helpCacheServices___closed__0_once, _init_l___private_Lake_CLI_Help_0__Lake_helpCacheServices___closed__0);
return v___x_116_;
}
}
else
{
lean_object* v___x_117_; 
v___x_117_ = lean_obj_once(&l___private_Lake_CLI_Help_0__Lake_helpCacheClean___closed__0, &l___private_Lake_CLI_Help_0__Lake_helpCacheClean___closed__0_once, _init_l___private_Lake_CLI_Help_0__Lake_helpCacheClean___closed__0);
return v___x_117_;
}
}
else
{
lean_object* v___x_118_; 
v___x_118_ = lean_obj_once(&l___private_Lake_CLI_Help_0__Lake_helpCachePutStaged___closed__0, &l___private_Lake_CLI_Help_0__Lake_helpCachePutStaged___closed__0_once, _init_l___private_Lake_CLI_Help_0__Lake_helpCachePutStaged___closed__0);
return v___x_118_;
}
}
else
{
lean_object* v___x_119_; 
v___x_119_ = lean_obj_once(&l___private_Lake_CLI_Help_0__Lake_helpCacheUnstage___closed__0, &l___private_Lake_CLI_Help_0__Lake_helpCacheUnstage___closed__0_once, _init_l___private_Lake_CLI_Help_0__Lake_helpCacheUnstage___closed__0);
return v___x_119_;
}
}
else
{
lean_object* v___x_120_; 
v___x_120_ = lean_obj_once(&l___private_Lake_CLI_Help_0__Lake_helpCacheStage___closed__0, &l___private_Lake_CLI_Help_0__Lake_helpCacheStage___closed__0_once, _init_l___private_Lake_CLI_Help_0__Lake_helpCacheStage___closed__0);
return v___x_120_;
}
}
else
{
lean_object* v___x_121_; 
v___x_121_ = lean_obj_once(&l___private_Lake_CLI_Help_0__Lake_helpCacheAdd___closed__0, &l___private_Lake_CLI_Help_0__Lake_helpCacheAdd___closed__0_once, _init_l___private_Lake_CLI_Help_0__Lake_helpCacheAdd___closed__0);
return v___x_121_;
}
}
else
{
lean_object* v___x_122_; 
v___x_122_ = lean_obj_once(&l___private_Lake_CLI_Help_0__Lake_helpCachePut___closed__0, &l___private_Lake_CLI_Help_0__Lake_helpCachePut___closed__0_once, _init_l___private_Lake_CLI_Help_0__Lake_helpCachePut___closed__0);
return v___x_122_;
}
}
else
{
lean_object* v___x_123_; 
v___x_123_ = lean_obj_once(&l___private_Lake_CLI_Help_0__Lake_helpCacheGet___closed__0, &l___private_Lake_CLI_Help_0__Lake_helpCacheGet___closed__0_once, _init_l___private_Lake_CLI_Help_0__Lake_helpCacheGet___closed__0);
return v___x_123_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_helpCache___boxed(lean_object* v_x_124_){
_start:
{
lean_object* v_res_125_; 
v_res_125_ = l_Lake_helpCache(v_x_124_);
lean_dec_ref(v_x_124_);
return v_res_125_;
}
}
static lean_object* _init_l_Lake_help___closed__0(void){
_start:
{
lean_object* v___x_126_; 
v___x_126_ = lean_mk_string_unchecked("new", 3, 3);
return v___x_126_;
}
}
static lean_object* _init_l_Lake_help___closed__1(void){
_start:
{
lean_object* v___x_127_; 
v___x_127_ = lean_mk_string_unchecked("init", 4, 4);
return v___x_127_;
}
}
static lean_object* _init_l_Lake_help___closed__2(void){
_start:
{
lean_object* v___x_128_; 
v___x_128_ = lean_mk_string_unchecked("build", 5, 5);
return v___x_128_;
}
}
static lean_object* _init_l_Lake_help___closed__3(void){
_start:
{
lean_object* v___x_129_; 
v___x_129_ = lean_mk_string_unchecked("check-build", 11, 11);
return v___x_129_;
}
}
static lean_object* _init_l_Lake_help___closed__4(void){
_start:
{
lean_object* v___x_130_; 
v___x_130_ = lean_mk_string_unchecked("query", 5, 5);
return v___x_130_;
}
}
static lean_object* _init_l_Lake_help___closed__5(void){
_start:
{
lean_object* v___x_131_; 
v___x_131_ = lean_mk_string_unchecked("update", 6, 6);
return v___x_131_;
}
}
static lean_object* _init_l_Lake_help___closed__6(void){
_start:
{
lean_object* v___x_132_; 
v___x_132_ = lean_mk_string_unchecked("upgrade", 7, 7);
return v___x_132_;
}
}
static lean_object* _init_l_Lake_help___closed__7(void){
_start:
{
lean_object* v___x_133_; 
v___x_133_ = lean_mk_string_unchecked("pack", 4, 4);
return v___x_133_;
}
}
static lean_object* _init_l_Lake_help___closed__8(void){
_start:
{
lean_object* v___x_134_; 
v___x_134_ = lean_mk_string_unchecked("unpack", 6, 6);
return v___x_134_;
}
}
static lean_object* _init_l_Lake_help___closed__9(void){
_start:
{
lean_object* v___x_135_; 
v___x_135_ = lean_mk_string_unchecked("upload", 6, 6);
return v___x_135_;
}
}
static lean_object* _init_l_Lake_help___closed__10(void){
_start:
{
lean_object* v___x_136_; 
v___x_136_ = lean_mk_string_unchecked("cache", 5, 5);
return v___x_136_;
}
}
static lean_object* _init_l_Lake_help___closed__11(void){
_start:
{
lean_object* v___x_137_; 
v___x_137_ = lean_mk_string_unchecked("test", 4, 4);
return v___x_137_;
}
}
static lean_object* _init_l_Lake_help___closed__12(void){
_start:
{
lean_object* v___x_138_; 
v___x_138_ = lean_mk_string_unchecked("check-test", 10, 10);
return v___x_138_;
}
}
static lean_object* _init_l_Lake_help___closed__13(void){
_start:
{
lean_object* v___x_139_; 
v___x_139_ = lean_mk_string_unchecked("lint", 4, 4);
return v___x_139_;
}
}
static lean_object* _init_l_Lake_help___closed__14(void){
_start:
{
lean_object* v___x_140_; 
v___x_140_ = lean_mk_string_unchecked("check-lint", 10, 10);
return v___x_140_;
}
}
static lean_object* _init_l_Lake_help___closed__15(void){
_start:
{
lean_object* v___x_141_; 
v___x_141_ = lean_mk_string_unchecked("shake", 5, 5);
return v___x_141_;
}
}
static lean_object* _init_l_Lake_help___closed__16(void){
_start:
{
lean_object* v___x_142_; 
v___x_142_ = lean_mk_string_unchecked("script", 6, 6);
return v___x_142_;
}
}
static lean_object* _init_l_Lake_help___closed__17(void){
_start:
{
lean_object* v___x_143_; 
v___x_143_ = lean_mk_string_unchecked("scripts", 7, 7);
return v___x_143_;
}
}
static lean_object* _init_l_Lake_help___closed__18(void){
_start:
{
lean_object* v___x_144_; 
v___x_144_ = lean_mk_string_unchecked("serve", 5, 5);
return v___x_144_;
}
}
static lean_object* _init_l_Lake_help___closed__19(void){
_start:
{
lean_object* v___x_145_; 
v___x_145_ = lean_mk_string_unchecked("env", 3, 3);
return v___x_145_;
}
}
static lean_object* _init_l_Lake_help___closed__20(void){
_start:
{
lean_object* v___x_146_; 
v___x_146_ = lean_mk_string_unchecked("exe", 3, 3);
return v___x_146_;
}
}
static lean_object* _init_l_Lake_help___closed__21(void){
_start:
{
lean_object* v___x_147_; 
v___x_147_ = lean_mk_string_unchecked("exec", 4, 4);
return v___x_147_;
}
}
static lean_object* _init_l_Lake_help___closed__22(void){
_start:
{
lean_object* v___x_148_; 
v___x_148_ = lean_mk_string_unchecked("lean", 4, 4);
return v___x_148_;
}
}
static lean_object* _init_l_Lake_help___closed__23(void){
_start:
{
lean_object* v___x_149_; 
v___x_149_ = lean_mk_string_unchecked("translate-config", 16, 16);
return v___x_149_;
}
}
LEAN_EXPORT lean_object* l_Lake_help(lean_object* v_x_150_){
_start:
{
lean_object* v___x_151_; uint8_t v___x_152_; 
v___x_151_ = lean_obj_once(&l_Lake_help___closed__0, &l_Lake_help___closed__0_once, _init_l_Lake_help___closed__0);
v___x_152_ = lean_string_dec_eq(v_x_150_, v___x_151_);
if (v___x_152_ == 0)
{
lean_object* v___x_153_; uint8_t v___x_154_; 
v___x_153_ = lean_obj_once(&l_Lake_help___closed__1, &l_Lake_help___closed__1_once, _init_l_Lake_help___closed__1);
v___x_154_ = lean_string_dec_eq(v_x_150_, v___x_153_);
if (v___x_154_ == 0)
{
lean_object* v___x_155_; uint8_t v___x_156_; 
v___x_155_ = lean_obj_once(&l_Lake_help___closed__2, &l_Lake_help___closed__2_once, _init_l_Lake_help___closed__2);
v___x_156_ = lean_string_dec_eq(v_x_150_, v___x_155_);
if (v___x_156_ == 0)
{
lean_object* v___x_157_; uint8_t v___x_158_; 
v___x_157_ = lean_obj_once(&l_Lake_help___closed__3, &l_Lake_help___closed__3_once, _init_l_Lake_help___closed__3);
v___x_158_ = lean_string_dec_eq(v_x_150_, v___x_157_);
if (v___x_158_ == 0)
{
lean_object* v___x_159_; uint8_t v___x_160_; 
v___x_159_ = lean_obj_once(&l_Lake_help___closed__4, &l_Lake_help___closed__4_once, _init_l_Lake_help___closed__4);
v___x_160_ = lean_string_dec_eq(v_x_150_, v___x_159_);
if (v___x_160_ == 0)
{
lean_object* v___x_161_; uint8_t v___x_162_; 
v___x_161_ = lean_obj_once(&l_Lake_help___closed__5, &l_Lake_help___closed__5_once, _init_l_Lake_help___closed__5);
v___x_162_ = lean_string_dec_eq(v_x_150_, v___x_161_);
if (v___x_162_ == 0)
{
lean_object* v___x_163_; uint8_t v___x_164_; 
v___x_163_ = lean_obj_once(&l_Lake_help___closed__6, &l_Lake_help___closed__6_once, _init_l_Lake_help___closed__6);
v___x_164_ = lean_string_dec_eq(v_x_150_, v___x_163_);
if (v___x_164_ == 0)
{
lean_object* v___x_165_; uint8_t v___x_166_; 
v___x_165_ = lean_obj_once(&l_Lake_help___closed__7, &l_Lake_help___closed__7_once, _init_l_Lake_help___closed__7);
v___x_166_ = lean_string_dec_eq(v_x_150_, v___x_165_);
if (v___x_166_ == 0)
{
lean_object* v___x_167_; uint8_t v___x_168_; 
v___x_167_ = lean_obj_once(&l_Lake_help___closed__8, &l_Lake_help___closed__8_once, _init_l_Lake_help___closed__8);
v___x_168_ = lean_string_dec_eq(v_x_150_, v___x_167_);
if (v___x_168_ == 0)
{
lean_object* v___x_169_; uint8_t v___x_170_; 
v___x_169_ = lean_obj_once(&l_Lake_help___closed__9, &l_Lake_help___closed__9_once, _init_l_Lake_help___closed__9);
v___x_170_ = lean_string_dec_eq(v_x_150_, v___x_169_);
if (v___x_170_ == 0)
{
lean_object* v___x_171_; uint8_t v___x_172_; 
v___x_171_ = lean_obj_once(&l_Lake_help___closed__10, &l_Lake_help___closed__10_once, _init_l_Lake_help___closed__10);
v___x_172_ = lean_string_dec_eq(v_x_150_, v___x_171_);
if (v___x_172_ == 0)
{
lean_object* v___x_173_; uint8_t v___x_174_; 
v___x_173_ = lean_obj_once(&l_Lake_help___closed__11, &l_Lake_help___closed__11_once, _init_l_Lake_help___closed__11);
v___x_174_ = lean_string_dec_eq(v_x_150_, v___x_173_);
if (v___x_174_ == 0)
{
lean_object* v___x_175_; uint8_t v___x_176_; 
v___x_175_ = lean_obj_once(&l_Lake_help___closed__12, &l_Lake_help___closed__12_once, _init_l_Lake_help___closed__12);
v___x_176_ = lean_string_dec_eq(v_x_150_, v___x_175_);
if (v___x_176_ == 0)
{
lean_object* v___x_177_; uint8_t v___x_178_; 
v___x_177_ = lean_obj_once(&l_Lake_help___closed__13, &l_Lake_help___closed__13_once, _init_l_Lake_help___closed__13);
v___x_178_ = lean_string_dec_eq(v_x_150_, v___x_177_);
if (v___x_178_ == 0)
{
lean_object* v___x_179_; uint8_t v___x_180_; 
v___x_179_ = lean_obj_once(&l_Lake_help___closed__14, &l_Lake_help___closed__14_once, _init_l_Lake_help___closed__14);
v___x_180_ = lean_string_dec_eq(v_x_150_, v___x_179_);
if (v___x_180_ == 0)
{
lean_object* v___x_181_; uint8_t v___x_182_; 
v___x_181_ = lean_obj_once(&l_Lake_helpCache___closed__6, &l_Lake_helpCache___closed__6_once, _init_l_Lake_helpCache___closed__6);
v___x_182_ = lean_string_dec_eq(v_x_150_, v___x_181_);
if (v___x_182_ == 0)
{
lean_object* v___x_183_; uint8_t v___x_184_; 
v___x_183_ = lean_obj_once(&l_Lake_help___closed__15, &l_Lake_help___closed__15_once, _init_l_Lake_help___closed__15);
v___x_184_ = lean_string_dec_eq(v_x_150_, v___x_183_);
if (v___x_184_ == 0)
{
lean_object* v___x_185_; uint8_t v___x_186_; 
v___x_185_ = lean_obj_once(&l_Lake_help___closed__16, &l_Lake_help___closed__16_once, _init_l_Lake_help___closed__16);
v___x_186_ = lean_string_dec_eq(v_x_150_, v___x_185_);
if (v___x_186_ == 0)
{
lean_object* v___x_187_; uint8_t v___x_188_; 
v___x_187_ = lean_obj_once(&l_Lake_help___closed__17, &l_Lake_help___closed__17_once, _init_l_Lake_help___closed__17);
v___x_188_ = lean_string_dec_eq(v_x_150_, v___x_187_);
if (v___x_188_ == 0)
{
lean_object* v___x_189_; uint8_t v___x_190_; 
v___x_189_ = lean_obj_once(&l_Lake_helpScript___closed__1, &l_Lake_helpScript___closed__1_once, _init_l_Lake_helpScript___closed__1);
v___x_190_ = lean_string_dec_eq(v_x_150_, v___x_189_);
if (v___x_190_ == 0)
{
lean_object* v___x_191_; uint8_t v___x_192_; 
v___x_191_ = lean_obj_once(&l_Lake_help___closed__18, &l_Lake_help___closed__18_once, _init_l_Lake_help___closed__18);
v___x_192_ = lean_string_dec_eq(v_x_150_, v___x_191_);
if (v___x_192_ == 0)
{
lean_object* v___x_193_; uint8_t v___x_194_; 
v___x_193_ = lean_obj_once(&l_Lake_help___closed__19, &l_Lake_help___closed__19_once, _init_l_Lake_help___closed__19);
v___x_194_ = lean_string_dec_eq(v_x_150_, v___x_193_);
if (v___x_194_ == 0)
{
lean_object* v___x_195_; uint8_t v___x_196_; 
v___x_195_ = lean_obj_once(&l_Lake_help___closed__20, &l_Lake_help___closed__20_once, _init_l_Lake_help___closed__20);
v___x_196_ = lean_string_dec_eq(v_x_150_, v___x_195_);
if (v___x_196_ == 0)
{
lean_object* v___x_197_; uint8_t v___x_198_; 
v___x_197_ = lean_obj_once(&l_Lake_help___closed__21, &l_Lake_help___closed__21_once, _init_l_Lake_help___closed__21);
v___x_198_ = lean_string_dec_eq(v_x_150_, v___x_197_);
if (v___x_198_ == 0)
{
lean_object* v___x_199_; uint8_t v___x_200_; 
v___x_199_ = lean_obj_once(&l_Lake_help___closed__22, &l_Lake_help___closed__22_once, _init_l_Lake_help___closed__22);
v___x_200_ = lean_string_dec_eq(v_x_150_, v___x_199_);
if (v___x_200_ == 0)
{
lean_object* v___x_201_; uint8_t v___x_202_; 
v___x_201_ = lean_obj_once(&l_Lake_help___closed__23, &l_Lake_help___closed__23_once, _init_l_Lake_help___closed__23);
v___x_202_ = lean_string_dec_eq(v_x_150_, v___x_201_);
if (v___x_202_ == 0)
{
lean_object* v___x_203_; 
v___x_203_ = l_Lake_usage;
return v___x_203_;
}
else
{
lean_object* v___x_204_; 
v___x_204_ = lean_obj_once(&l___private_Lake_CLI_Help_0__Lake_helpTranslateConfig___closed__0, &l___private_Lake_CLI_Help_0__Lake_helpTranslateConfig___closed__0_once, _init_l___private_Lake_CLI_Help_0__Lake_helpTranslateConfig___closed__0);
return v___x_204_;
}
}
else
{
lean_object* v___x_205_; 
v___x_205_ = lean_obj_once(&l___private_Lake_CLI_Help_0__Lake_helpLean___closed__0, &l___private_Lake_CLI_Help_0__Lake_helpLean___closed__0_once, _init_l___private_Lake_CLI_Help_0__Lake_helpLean___closed__0);
return v___x_205_;
}
}
else
{
lean_object* v___x_206_; 
v___x_206_ = lean_obj_once(&l___private_Lake_CLI_Help_0__Lake_helpExe___closed__0, &l___private_Lake_CLI_Help_0__Lake_helpExe___closed__0_once, _init_l___private_Lake_CLI_Help_0__Lake_helpExe___closed__0);
return v___x_206_;
}
}
else
{
lean_object* v___x_207_; 
v___x_207_ = lean_obj_once(&l___private_Lake_CLI_Help_0__Lake_helpExe___closed__0, &l___private_Lake_CLI_Help_0__Lake_helpExe___closed__0_once, _init_l___private_Lake_CLI_Help_0__Lake_helpExe___closed__0);
return v___x_207_;
}
}
else
{
lean_object* v___x_208_; 
v___x_208_ = lean_obj_once(&l___private_Lake_CLI_Help_0__Lake_helpEnv___closed__0, &l___private_Lake_CLI_Help_0__Lake_helpEnv___closed__0_once, _init_l___private_Lake_CLI_Help_0__Lake_helpEnv___closed__0);
return v___x_208_;
}
}
else
{
lean_object* v___x_209_; 
v___x_209_ = lean_obj_once(&l___private_Lake_CLI_Help_0__Lake_helpServe___closed__0, &l___private_Lake_CLI_Help_0__Lake_helpServe___closed__0_once, _init_l___private_Lake_CLI_Help_0__Lake_helpServe___closed__0);
return v___x_209_;
}
}
else
{
lean_object* v___x_210_; 
v___x_210_ = lean_obj_once(&l___private_Lake_CLI_Help_0__Lake_helpScriptRun___closed__0, &l___private_Lake_CLI_Help_0__Lake_helpScriptRun___closed__0_once, _init_l___private_Lake_CLI_Help_0__Lake_helpScriptRun___closed__0);
return v___x_210_;
}
}
else
{
lean_object* v___x_211_; 
v___x_211_ = lean_obj_once(&l___private_Lake_CLI_Help_0__Lake_helpScriptList___closed__0, &l___private_Lake_CLI_Help_0__Lake_helpScriptList___closed__0_once, _init_l___private_Lake_CLI_Help_0__Lake_helpScriptList___closed__0);
return v___x_211_;
}
}
else
{
lean_object* v___x_212_; 
v___x_212_ = lean_obj_once(&l___private_Lake_CLI_Help_0__Lake_helpScriptCli___closed__0, &l___private_Lake_CLI_Help_0__Lake_helpScriptCli___closed__0_once, _init_l___private_Lake_CLI_Help_0__Lake_helpScriptCli___closed__0);
return v___x_212_;
}
}
else
{
lean_object* v___x_213_; 
v___x_213_ = lean_obj_once(&l___private_Lake_CLI_Help_0__Lake_helpShake___closed__0, &l___private_Lake_CLI_Help_0__Lake_helpShake___closed__0_once, _init_l___private_Lake_CLI_Help_0__Lake_helpShake___closed__0);
return v___x_213_;
}
}
else
{
lean_object* v___x_214_; 
v___x_214_ = lean_obj_once(&l___private_Lake_CLI_Help_0__Lake_helpClean___closed__0, &l___private_Lake_CLI_Help_0__Lake_helpClean___closed__0_once, _init_l___private_Lake_CLI_Help_0__Lake_helpClean___closed__0);
return v___x_214_;
}
}
else
{
lean_object* v___x_215_; 
v___x_215_ = lean_obj_once(&l___private_Lake_CLI_Help_0__Lake_helpCheckLint___closed__0, &l___private_Lake_CLI_Help_0__Lake_helpCheckLint___closed__0_once, _init_l___private_Lake_CLI_Help_0__Lake_helpCheckLint___closed__0);
return v___x_215_;
}
}
else
{
lean_object* v___x_216_; 
v___x_216_ = lean_obj_once(&l___private_Lake_CLI_Help_0__Lake_helpLint___closed__0, &l___private_Lake_CLI_Help_0__Lake_helpLint___closed__0_once, _init_l___private_Lake_CLI_Help_0__Lake_helpLint___closed__0);
return v___x_216_;
}
}
else
{
lean_object* v___x_217_; 
v___x_217_ = lean_obj_once(&l___private_Lake_CLI_Help_0__Lake_helpCheckTest___closed__0, &l___private_Lake_CLI_Help_0__Lake_helpCheckTest___closed__0_once, _init_l___private_Lake_CLI_Help_0__Lake_helpCheckTest___closed__0);
return v___x_217_;
}
}
else
{
lean_object* v___x_218_; 
v___x_218_ = lean_obj_once(&l___private_Lake_CLI_Help_0__Lake_helpTest___closed__0, &l___private_Lake_CLI_Help_0__Lake_helpTest___closed__0_once, _init_l___private_Lake_CLI_Help_0__Lake_helpTest___closed__0);
return v___x_218_;
}
}
else
{
lean_object* v___x_219_; 
v___x_219_ = lean_obj_once(&l___private_Lake_CLI_Help_0__Lake_helpCacheCli___closed__0, &l___private_Lake_CLI_Help_0__Lake_helpCacheCli___closed__0_once, _init_l___private_Lake_CLI_Help_0__Lake_helpCacheCli___closed__0);
return v___x_219_;
}
}
else
{
lean_object* v___x_220_; 
v___x_220_ = lean_obj_once(&l___private_Lake_CLI_Help_0__Lake_helpUpload___closed__0, &l___private_Lake_CLI_Help_0__Lake_helpUpload___closed__0_once, _init_l___private_Lake_CLI_Help_0__Lake_helpUpload___closed__0);
return v___x_220_;
}
}
else
{
lean_object* v___x_221_; 
v___x_221_ = lean_obj_once(&l___private_Lake_CLI_Help_0__Lake_helpUnpack___closed__0, &l___private_Lake_CLI_Help_0__Lake_helpUnpack___closed__0_once, _init_l___private_Lake_CLI_Help_0__Lake_helpUnpack___closed__0);
return v___x_221_;
}
}
else
{
lean_object* v___x_222_; 
v___x_222_ = lean_obj_once(&l___private_Lake_CLI_Help_0__Lake_helpPack___closed__0, &l___private_Lake_CLI_Help_0__Lake_helpPack___closed__0_once, _init_l___private_Lake_CLI_Help_0__Lake_helpPack___closed__0);
return v___x_222_;
}
}
else
{
lean_object* v___x_223_; 
v___x_223_ = lean_obj_once(&l___private_Lake_CLI_Help_0__Lake_helpUpdate___closed__0, &l___private_Lake_CLI_Help_0__Lake_helpUpdate___closed__0_once, _init_l___private_Lake_CLI_Help_0__Lake_helpUpdate___closed__0);
return v___x_223_;
}
}
else
{
lean_object* v___x_224_; 
v___x_224_ = lean_obj_once(&l___private_Lake_CLI_Help_0__Lake_helpUpdate___closed__0, &l___private_Lake_CLI_Help_0__Lake_helpUpdate___closed__0_once, _init_l___private_Lake_CLI_Help_0__Lake_helpUpdate___closed__0);
return v___x_224_;
}
}
else
{
lean_object* v___x_225_; 
v___x_225_ = lean_obj_once(&l___private_Lake_CLI_Help_0__Lake_helpQuery___closed__0, &l___private_Lake_CLI_Help_0__Lake_helpQuery___closed__0_once, _init_l___private_Lake_CLI_Help_0__Lake_helpQuery___closed__0);
return v___x_225_;
}
}
else
{
lean_object* v___x_226_; 
v___x_226_ = lean_obj_once(&l___private_Lake_CLI_Help_0__Lake_helpCheckBuild___closed__0, &l___private_Lake_CLI_Help_0__Lake_helpCheckBuild___closed__0_once, _init_l___private_Lake_CLI_Help_0__Lake_helpCheckBuild___closed__0);
return v___x_226_;
}
}
else
{
lean_object* v___x_227_; 
v___x_227_ = lean_obj_once(&l___private_Lake_CLI_Help_0__Lake_helpBuild___closed__0, &l___private_Lake_CLI_Help_0__Lake_helpBuild___closed__0_once, _init_l___private_Lake_CLI_Help_0__Lake_helpBuild___closed__0);
return v___x_227_;
}
}
else
{
lean_object* v___x_228_; 
v___x_228_ = lean_obj_once(&l___private_Lake_CLI_Help_0__Lake_helpInit___closed__0, &l___private_Lake_CLI_Help_0__Lake_helpInit___closed__0_once, _init_l___private_Lake_CLI_Help_0__Lake_helpInit___closed__0);
return v___x_228_;
}
}
else
{
lean_object* v___x_229_; 
v___x_229_ = lean_obj_once(&l___private_Lake_CLI_Help_0__Lake_helpNew___closed__0, &l___private_Lake_CLI_Help_0__Lake_helpNew___closed__0_once, _init_l___private_Lake_CLI_Help_0__Lake_helpNew___closed__0);
return v___x_229_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_help___boxed(lean_object* v_x_230_){
_start:
{
lean_object* v_res_231_; 
v_res_231_ = l_Lake_help(v_x_230_);
lean_dec_ref(v_x_230_);
return v_res_231_;
}
}
lean_object* runtime_initialize_Init_Data_ToString(uint8_t builtin);
lean_object* runtime_initialize_Lake_Version(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_CLI_Help(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Init_Data_ToString(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Version(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lake_usage = _init_l_Lake_usage();
lean_mark_persistent(l_Lake_usage);
l___private_Lake_CLI_Help_0__Lake_newInitHelp = _init_l___private_Lake_CLI_Help_0__Lake_newInitHelp();
lean_mark_persistent(l___private_Lake_CLI_Help_0__Lake_newInitHelp);
l___private_Lake_CLI_Help_0__Lake_helpNew = _init_l___private_Lake_CLI_Help_0__Lake_helpNew();
lean_mark_persistent(l___private_Lake_CLI_Help_0__Lake_helpNew);
l___private_Lake_CLI_Help_0__Lake_helpInit = _init_l___private_Lake_CLI_Help_0__Lake_helpInit();
lean_mark_persistent(l___private_Lake_CLI_Help_0__Lake_helpInit);
l___private_Lake_CLI_Help_0__Lake_helpBuild = _init_l___private_Lake_CLI_Help_0__Lake_helpBuild();
lean_mark_persistent(l___private_Lake_CLI_Help_0__Lake_helpBuild);
l___private_Lake_CLI_Help_0__Lake_helpQuery = _init_l___private_Lake_CLI_Help_0__Lake_helpQuery();
lean_mark_persistent(l___private_Lake_CLI_Help_0__Lake_helpQuery);
l___private_Lake_CLI_Help_0__Lake_helpCheckBuild = _init_l___private_Lake_CLI_Help_0__Lake_helpCheckBuild();
lean_mark_persistent(l___private_Lake_CLI_Help_0__Lake_helpCheckBuild);
l___private_Lake_CLI_Help_0__Lake_helpUpdate = _init_l___private_Lake_CLI_Help_0__Lake_helpUpdate();
lean_mark_persistent(l___private_Lake_CLI_Help_0__Lake_helpUpdate);
l___private_Lake_CLI_Help_0__Lake_helpTest = _init_l___private_Lake_CLI_Help_0__Lake_helpTest();
lean_mark_persistent(l___private_Lake_CLI_Help_0__Lake_helpTest);
l___private_Lake_CLI_Help_0__Lake_helpCheckTest = _init_l___private_Lake_CLI_Help_0__Lake_helpCheckTest();
lean_mark_persistent(l___private_Lake_CLI_Help_0__Lake_helpCheckTest);
l___private_Lake_CLI_Help_0__Lake_helpLint = _init_l___private_Lake_CLI_Help_0__Lake_helpLint();
lean_mark_persistent(l___private_Lake_CLI_Help_0__Lake_helpLint);
l___private_Lake_CLI_Help_0__Lake_helpCheckLint = _init_l___private_Lake_CLI_Help_0__Lake_helpCheckLint();
lean_mark_persistent(l___private_Lake_CLI_Help_0__Lake_helpCheckLint);
l___private_Lake_CLI_Help_0__Lake_helpPack = _init_l___private_Lake_CLI_Help_0__Lake_helpPack();
lean_mark_persistent(l___private_Lake_CLI_Help_0__Lake_helpPack);
l___private_Lake_CLI_Help_0__Lake_helpUnpack = _init_l___private_Lake_CLI_Help_0__Lake_helpUnpack();
lean_mark_persistent(l___private_Lake_CLI_Help_0__Lake_helpUnpack);
l___private_Lake_CLI_Help_0__Lake_helpUpload = _init_l___private_Lake_CLI_Help_0__Lake_helpUpload();
lean_mark_persistent(l___private_Lake_CLI_Help_0__Lake_helpUpload);
l___private_Lake_CLI_Help_0__Lake_helpClean = _init_l___private_Lake_CLI_Help_0__Lake_helpClean();
lean_mark_persistent(l___private_Lake_CLI_Help_0__Lake_helpClean);
l___private_Lake_CLI_Help_0__Lake_helpShake = _init_l___private_Lake_CLI_Help_0__Lake_helpShake();
lean_mark_persistent(l___private_Lake_CLI_Help_0__Lake_helpShake);
l___private_Lake_CLI_Help_0__Lake_helpCacheCli = _init_l___private_Lake_CLI_Help_0__Lake_helpCacheCli();
lean_mark_persistent(l___private_Lake_CLI_Help_0__Lake_helpCacheCli);
l___private_Lake_CLI_Help_0__Lake_helpCacheGet = _init_l___private_Lake_CLI_Help_0__Lake_helpCacheGet();
lean_mark_persistent(l___private_Lake_CLI_Help_0__Lake_helpCacheGet);
l___private_Lake_CLI_Help_0__Lake_helpCachePut = _init_l___private_Lake_CLI_Help_0__Lake_helpCachePut();
lean_mark_persistent(l___private_Lake_CLI_Help_0__Lake_helpCachePut);
l___private_Lake_CLI_Help_0__Lake_helpCacheAdd = _init_l___private_Lake_CLI_Help_0__Lake_helpCacheAdd();
lean_mark_persistent(l___private_Lake_CLI_Help_0__Lake_helpCacheAdd);
l___private_Lake_CLI_Help_0__Lake_helpCacheStage = _init_l___private_Lake_CLI_Help_0__Lake_helpCacheStage();
lean_mark_persistent(l___private_Lake_CLI_Help_0__Lake_helpCacheStage);
l___private_Lake_CLI_Help_0__Lake_helpCacheUnstage = _init_l___private_Lake_CLI_Help_0__Lake_helpCacheUnstage();
lean_mark_persistent(l___private_Lake_CLI_Help_0__Lake_helpCacheUnstage);
l___private_Lake_CLI_Help_0__Lake_helpCachePutStaged = _init_l___private_Lake_CLI_Help_0__Lake_helpCachePutStaged();
lean_mark_persistent(l___private_Lake_CLI_Help_0__Lake_helpCachePutStaged);
l___private_Lake_CLI_Help_0__Lake_helpCacheClean = _init_l___private_Lake_CLI_Help_0__Lake_helpCacheClean();
lean_mark_persistent(l___private_Lake_CLI_Help_0__Lake_helpCacheClean);
l___private_Lake_CLI_Help_0__Lake_helpCacheServices = _init_l___private_Lake_CLI_Help_0__Lake_helpCacheServices();
lean_mark_persistent(l___private_Lake_CLI_Help_0__Lake_helpCacheServices);
l___private_Lake_CLI_Help_0__Lake_helpScriptCli = _init_l___private_Lake_CLI_Help_0__Lake_helpScriptCli();
lean_mark_persistent(l___private_Lake_CLI_Help_0__Lake_helpScriptCli);
l___private_Lake_CLI_Help_0__Lake_helpScriptList = _init_l___private_Lake_CLI_Help_0__Lake_helpScriptList();
lean_mark_persistent(l___private_Lake_CLI_Help_0__Lake_helpScriptList);
l___private_Lake_CLI_Help_0__Lake_helpScriptRun = _init_l___private_Lake_CLI_Help_0__Lake_helpScriptRun();
lean_mark_persistent(l___private_Lake_CLI_Help_0__Lake_helpScriptRun);
l___private_Lake_CLI_Help_0__Lake_helpScriptDoc = _init_l___private_Lake_CLI_Help_0__Lake_helpScriptDoc();
lean_mark_persistent(l___private_Lake_CLI_Help_0__Lake_helpScriptDoc);
l___private_Lake_CLI_Help_0__Lake_helpServe = _init_l___private_Lake_CLI_Help_0__Lake_helpServe();
lean_mark_persistent(l___private_Lake_CLI_Help_0__Lake_helpServe);
l___private_Lake_CLI_Help_0__Lake_helpEnv = _init_l___private_Lake_CLI_Help_0__Lake_helpEnv();
lean_mark_persistent(l___private_Lake_CLI_Help_0__Lake_helpEnv);
l___private_Lake_CLI_Help_0__Lake_helpExe = _init_l___private_Lake_CLI_Help_0__Lake_helpExe();
lean_mark_persistent(l___private_Lake_CLI_Help_0__Lake_helpExe);
l___private_Lake_CLI_Help_0__Lake_helpLean = _init_l___private_Lake_CLI_Help_0__Lake_helpLean();
lean_mark_persistent(l___private_Lake_CLI_Help_0__Lake_helpLean);
l___private_Lake_CLI_Help_0__Lake_helpTranslateConfig = _init_l___private_Lake_CLI_Help_0__Lake_helpTranslateConfig();
lean_mark_persistent(l___private_Lake_CLI_Help_0__Lake_helpTranslateConfig);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_CLI_Help(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_ToString(uint8_t builtin);
lean_object* initialize_Lake_Version(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_CLI_Help(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_ToString(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Version(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_CLI_Help(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_CLI_Help(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_CLI_Help(builtin);
}
#ifdef __cplusplus
}
#endif

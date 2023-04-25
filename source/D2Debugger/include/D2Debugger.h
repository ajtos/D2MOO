#pragma once

#ifdef D2DEBUGGER_IMPL
#define D2DEBUGGER_DLL_DECL __declspec( dllexport )
#else
#define D2DEBUGGER_DLL_DECL __declspec( dllimport )
#endif

D2DEBUGGER_DLL_DECL
int D2DebuggerInit();

D2DEBUGGER_DLL_DECL
bool D2DebuggerNewFrame();

D2DEBUGGER_DLL_DECL
void D2DebuggerEndFrame();

D2DEBUGGER_DLL_DECL
void D2DebuggerDestroy();

D2DEBUGGER_DLL_DECL
void D2DebugGame(struct D2GameStrc* pGame);
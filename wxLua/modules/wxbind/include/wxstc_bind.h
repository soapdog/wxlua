// ---------------------------------------------------------------------------
// wxstc.h - headers and wxLua types for wxLua binding
//
// This file was generated by genwxbind.lua 
// Any changes made to this file will be lost when the file is regenerated
// ---------------------------------------------------------------------------

#ifndef __HOOK_WXLUA_wxstc_H__
#define __HOOK_WXLUA_wxstc_H__

#include "wxbind/include/wxbinddefs.h"
#include "wxluasetup.h"
#include "wxbind/include/wxcore_bind.h"

#include "wxlua/wxlstate.h"
#include "wxlua/wxlbind.h"

// ---------------------------------------------------------------------------
// Check if the version of binding generator used to create this is older than
//   the current version of the bindings.
//   See 'bindings/genwxbind.lua' and 'modules/wxlua/wxldefs.h'
#if WXLUA_BINDING_VERSION > 31
#   error "The WXLUA_BINDING_VERSION in the bindings is too old, regenerate bindings."
#endif //WXLUA_BINDING_VERSION > 31
// ---------------------------------------------------------------------------

// binding class
class WXDLLIMPEXP_BINDWXSTC wxLuaBinding_wxstc : public wxLuaBinding
{
public:
    wxLuaBinding_wxstc();


private:
    DECLARE_DYNAMIC_CLASS(wxLuaBinding_wxstc)
};


// initialize wxLuaBinding_wxstc for all wxLuaStates
extern WXDLLIMPEXP_BINDWXSTC wxLuaBinding* wxLuaBinding_wxstc_init();

// ---------------------------------------------------------------------------
// Includes
// ---------------------------------------------------------------------------

#include "wx/stc/stc.h"

// ---------------------------------------------------------------------------
// Lua Tag Method Values and Tables for each Class
// ---------------------------------------------------------------------------

extern WXDLLIMPEXP_DATA_BINDWXSTC(int) wxluatype_wxStyledTextCtrl;
extern WXDLLIMPEXP_DATA_BINDWXSTC(int) wxluatype_wxStyledTextEvent;



#endif // __HOOK_WXLUA_wxstc_H__


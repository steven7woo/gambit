//
// FILE: efgaccl.h -- Names for various extensive form GUI accelerators
//
// $Id$
//

#ifndef EFGACCL_H
#define EFGACCL_H

#include "accels.h"

#define NUM_EFG_EVENTS 79

AccelEvent efg_events[NUM_EFG_EVENTS] = 
{
  AccelEvent("Save", efgmenuFILE_SAVE),
  AccelEvent("Print", efgmenuFILE_OUTPUT),
  AccelEvent("Close", efgmenuFILE_CLOSE),
  AccelEvent("NodeAdd", efgmenuEDIT_NODE_ADD),
  AccelEvent("NodeDelete", efgmenuEDIT_NODE_DELETE),
  AccelEvent("NodeInsert", efgmenuEDIT_NODE_INSERT),
  AccelEvent("NodeLabel", efgmenuEDIT_NODE_LABEL),
  AccelEvent("SetMark", efgmenuEDIT_NODE_SET_MARK),
  AccelEvent("GoToMark", efgmenuEDIT_NODE_GOTO_MARK),
  AccelEvent("ActionDelete", efgmenuEDIT_ACTION_DELETE),
  AccelEvent("ActionInsert", efgmenuEDIT_ACTION_INSERT),
  AccelEvent("ActionLabel", efgmenuEDIT_ACTION_LABEL),
  AccelEvent("ActionProbs", efgmenuEDIT_ACTION_PROBS),
  AccelEvent("InfosetMerge", efgmenuEDIT_INFOSET_MERGE),
  AccelEvent("InfosetBreak", efgmenuEDIT_INFOSET_BREAK),
  AccelEvent("InfosetSplit", efgmenuEDIT_INFOSET_SPLIT),
  AccelEvent("InfosetJoin", efgmenuEDIT_INFOSET_JOIN),
  AccelEvent("InfosetLabel", efgmenuEDIT_INFOSET_LABEL),
  AccelEvent("InfosetPlayer", efgmenuEDIT_INFOSET_PLAYER),
  AccelEvent("InfosetReveal", efgmenuEDIT_INFOSET_REVEAL),
  AccelEvent("OutcomeAttach", efgmenuEDIT_OUTCOMES_ATTACH),
  AccelEvent("OutcomeDetach", efgmenuEDIT_OUTCOMES_DETACH),
  AccelEvent("OutcomeLabel", efgmenuEDIT_OUTCOMES_LABEL),
  AccelEvent("OutcomePayoffs", efgmenuEDIT_OUTCOMES_PAYOFFS),
  AccelEvent("TreeCopy", efgmenuEDIT_TREE_COPY),
  AccelEvent("TreeMove", efgmenuEDIT_TREE_MOVE),
  AccelEvent("TreeDelete", efgmenuEDIT_TREE_DELETE),
  AccelEvent("TreeLabel", efgmenuEDIT_TREE_LABEL),
  AccelEvent("TreePlayers", efgmenuEDIT_TREE_PLAYERS),
  AccelEvent("TreeInfosetss", efgmenuEDIT_TREE_INFOSETS),
  AccelEvent("Subgames MarkAll", efgmenuSUBGAME_MARKALL),
  AccelEvent("Subgames Mark", efgmenuSUBGAME_MARK),
  AccelEvent("Subgames UnmarkAll", efgmenuSUBGAME_UNMARKALL),
  AccelEvent("Subgames Unmark", efgmenuSUBGAME_UNMARK),
  AccelEvent("Subgames CollapseAll", efgmenuSUBGAME_COLLAPSEALL),
  AccelEvent("Subgames Collapse", efgmenuSUBGAME_COLLAPSE),
  AccelEvent("Subgames ExpandLevel", efgmenuSUBGAME_EXPAND),
  AccelEvent("Subgames ExpandBranch", efgmenuSUBGAME_EXPANDBRANCH),
  AccelEvent("Subgames ExpandAll", efgmenuSUBGAME_EXPANDALL),
  AccelEvent("SupportsElimDom", efgmenuSUPPORTS_ELIMDOM),
  AccelEvent("SupportsSelect", efgmenuSUPPORTS_SELECT),
  AccelEvent("SolveStandard", efgmenuSOLVE_STANDARD),
  AccelEvent("EF EnumPure", efgmenuSOLVE_CUSTOM_EFG_ENUMPURE),
  AccelEvent("EF LCP", efgmenuSOLVE_CUSTOM_EFG_LCP),
  AccelEvent("EF LP", efgmenuSOLVE_CUSTOM_EFG_LP),
  AccelEvent("EF Liap", efgmenuSOLVE_CUSTOM_EFG_LIAP),
  AccelEvent("EF PolEnum", efgmenuSOLVE_CUSTOM_EFG_POLENUM),
  AccelEvent("EF QRE", efgmenuSOLVE_CUSTOM_EFG_QRE),
  AccelEvent("NF EnumPure", efgmenuSOLVE_CUSTOM_NFG_ENUMPURE),
  AccelEvent("NF EnumMixed", efgmenuSOLVE_CUSTOM_NFG_ENUMMIXED),
  AccelEvent("NF LCP", efgmenuSOLVE_CUSTOM_NFG_LCP),
  AccelEvent("NF LP", efgmenuSOLVE_CUSTOM_NFG_LP),
  AccelEvent("NF Liap", efgmenuSOLVE_CUSTOM_NFG_LIAP),
  AccelEvent("NF SimpDiv", efgmenuSOLVE_CUSTOM_NFG_SIMPDIV),
  AccelEvent("NF PolEnum", efgmenuSOLVE_CUSTOM_NFG_POLENUM),
  AccelEvent("NF Qre", efgmenuSOLVE_CUSTOM_NFG_QRE),
  AccelEvent("NF QreGrid", efgmenuSOLVE_CUSTOM_NFG_QREGRID),
  AccelEvent("Solve NormalForm", efgmenuSOLVE_NFG),
  AccelEvent("Reduced NF", efgmenuSOLVE_NFG_REDUCED),
  AccelEvent("Agent NF", efgmenuSOLVE_NFG_AGENT),
  AccelEvent("InspectSolutions", efgmenuINSPECT_SOLUTIONS),
  AccelEvent("InspectCursor", efgmenuINSPECT_CURSOR),
  AccelEvent("InspectInfosets", efgmenuINSPECT_INFOSETS),
  AccelEvent("InspectZoomWindow", efgmenuINSPECT_ZOOM_WIN),
  AccelEvent("InspectGameInfo", efgmenuINSPECT_GAMEINFO),
  AccelEvent("PrefsZoom", efgmenuPREFS_SET_ZOOM),
  AccelEvent("PrefsDisplay", efgmenuPREFS_DISPLAY),
  AccelEvent("PrefsLegend", efgmenuPREFS_LEGEND),
  AccelEvent("PrefsColors", efgmenuPREFS_COLORS),
  AccelEvent("PrefsAccels", efgmenuPREFS_ACCELS),
  AccelEvent("PrefsSaveDefault", efgmenuPREFS_SAVE_DEFAULT),
  AccelEvent("PrefsLoadDefault", efgmenuPREFS_LOAD_DEFAULT),
  AccelEvent("PrefsSaveCustom", efgmenuPREFS_SAVE_CUSTOM),
  AccelEvent("PrefsLoadCustom", efgmenuPREFS_LOAD_CUSTOM),
  AccelEvent("Help", efgmenuHELP_CONTENTS),
  AccelEvent("HelpAbout", efgmenuHELP_ABOUT),
  AccelEvent("ZoomIn", efgmenuPREFS_INC_ZOOM),
  AccelEvent("ZoomOut", efgmenuPREFS_DEC_ZOOM),
  AccelEvent("Redraw", efgmenuPREFS_REDRAW),
};

#endif  // EFGACCL_H

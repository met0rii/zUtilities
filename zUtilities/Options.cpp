// Supported with union (c) 2020 Union team
// Union SOURCE file

namespace GOTHIC_ENGINE {

#define pluginName "ZUTILITIES"
#define printWin(a) ogame->GetTextView()->Printwin(a);

  int bColorNpcs, bColorChests, bColorDoors, bColorItems, bUseQuickSave, bTrampleMeatbugs, bRenderInvItems;

  void initOptions() {
    bColorNpcs = zoptions->ReadInt( pluginName, "bColorNpcs", true );
    bColorChests = zoptions->ReadInt( pluginName, "bColorChests", true );
    bColorDoors = zoptions->ReadInt( pluginName, "bColorDoors", true );
    bColorItems = zoptions->ReadInt( pluginName, "bColorItems", true );
    bUseQuickSave = zoptions->ReadInt( pluginName, "bUseQuickSave", true );
    bTrampleMeatbugs = zoptions->ReadInt( pluginName, "bTrampleMeatbugs", true );
    bRenderInvItems = zoptions->ReadInt( pluginName, "bRenderInvItems", true );
  }

}
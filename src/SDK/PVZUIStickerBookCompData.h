///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/PVZUIDisplayStat.h>
#include <fb/PVZUIStickerBookClass.h>
#include <fb/PVZUIStickerBookNotShownAssets.h>
#include <fb/PVZUIStickerBookTeam.h>
#include <fb/RefArray.h>
#include <fb/UIComponentData.h>

namespace fb {
	class TextureAsset;
}

namespace fb {
	class PVZUIStickerBookCompData : public UIComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZUIStickerBookCompData"); }
		virtual ~PVZUIStickerBookCompData() override {}
		PVZUIStickerBookCompData() {
		};

		Array<PVZUIDisplayStat> m_globalStats; // 0x30 (48)
		PVZUIStickerBookTeam m_zombieTeam; // 0x38 (56)
		PVZUIStickerBookTeam m_plantTeam; // 0x50 (80)
		Array<PVZUIStickerBookClass> m_zombieClasses; // 0x68 (104)
		Array<PVZUIStickerBookClass> m_plantClasses; // 0x70 (112)
		PVZUIStickerBookNotShownAssets m_notShownAssets; // 0x78 (120)
		RefArray<TextureAsset> m_additionalTextures; // 0x88 (136)
	}; // 0x90 (144)
}


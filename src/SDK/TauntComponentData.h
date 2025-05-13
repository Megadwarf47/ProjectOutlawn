///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/CtrRef.h>
#include <fb/GameComponentData.h>
#include <fb/TauntCommonBinding.h>
#include <fb/TauntEntry.h>
#include <fb/TauntInput.h>

namespace fb {
	class InputRestrictionAsset;
}

namespace fb {
	class TauntComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("TauntComponentData"); }
		virtual ~TauntComponentData() override {}
		TauntComponentData() {
			m_restrictAIMovement = true;
		};

		Array<TauntInput> m_tauntInputSlots; // 0x70 (112)
		Array<TauntEntry> m_taunts; // 0x78 (120)
		CtrRef<InputRestrictionAsset> m_tauntingInputRestrictions; // 0x80 (128)
		TauntCommonBinding m_tauntBinding; // 0x88 (136)
		bool m_restrictAIMovement; // 0xEC (236)
	}; // 0xF0 (240)
}


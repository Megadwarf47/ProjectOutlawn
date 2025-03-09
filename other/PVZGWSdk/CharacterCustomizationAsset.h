///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/DataContainerPolicyAsset.h>
#include <fb/RefArray.h>
#include <fb/String.h>
#include <fb/UIHudIcon.h>

namespace fb {
	class CharacterBlueprint;
	class CustomizationTable;
	class VoiceOverLabel;
}

namespace fb {
	class CharacterCustomizationAsset : public DataContainerPolicyAsset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CharacterCustomizationAsset"); }
		virtual ~CharacterCustomizationAsset() override {}
		CharacterCustomizationAsset() {
			m_uiHudIcon = UIHudIcon::UIHudIcon_Unused;
		};

		UIHudIcon m_uiHudIcon; // 0x18 (24)
		String m_uiKitIconName; // 0x20 (32)
		String m_labelSid; // 0x28 (40)
		String m_classDescriptionSid; // 0x30 (48)
		CtrRef<CustomizationTable> m_visualTable; // 0x38 (56)
		CtrRef<CustomizationTable> m_specializationTable; // 0x40 (64)
		RefArray<VoiceOverLabel> m_voiceOverLabels; // 0x48 (72)
		CtrRef<CharacterBlueprint> m_soldier; // 0x50 (80)
	}; // 0x58 (88)
}


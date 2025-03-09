///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>
#include <fb/InputActionMapSlot.h>
#include <fb/RefArray.h>

namespace fb {
	class EntryInputActionMapData;
}

namespace fb {
	class EntryInputActionMapsData : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("EntryInputActionMapsData"); }
		virtual ~EntryInputActionMapsData() override {}
		EntryInputActionMapsData() {
			m_actionMapSettingsScheme = 0;
			m_defaultInputActionMap = InputActionMapSlot::InputActionMapSlot_Undefined;
		};

		s32 m_actionMapSettingsScheme; // 0x18 (24)
		InputActionMapSlot m_defaultInputActionMap; // 0x1C (28)
		RefArray<EntryInputActionMapData> m_inputActionMaps; // 0x20 (32)
	}; // 0x28 (40)
}


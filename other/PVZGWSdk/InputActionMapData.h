///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>
#include <fb/InputActionMapPlatform.h>
#include <fb/InputActionMapSlot.h>
#include <fb/RefArray.h>
#include <fb/String.h>

namespace fb {
	class InputActionsData;
}

namespace fb {
	class InputActionMapData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("InputActionMapData"); }
		virtual ~InputActionMapData() override {}
		InputActionMapData() {
			m_platformSpecific = InputActionMapPlatform::IAMPAllPlatforms;
			m_slot = InputActionMapSlot::InputActionMapSlot_Root1;
		};

		RefArray<InputActionsData> m_actions; // 0x10 (16)
		InputActionMapPlatform m_platformSpecific; // 0x18 (24)
		InputActionMapSlot m_slot; // 0x1C (28)
		String m_copyKeyBindingsFrom; // 0x20 (32)
	}; // 0x28 (40)
}


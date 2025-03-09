///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/DataContainer.h>
#include <fb/GestureSlotData.h>
#include <fb/RefArray.h>

namespace fb {
	class GestureUnlockAsset;
}

namespace fb {
	class GestureTable : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("GestureTable"); }
		virtual ~GestureTable() override {}
		GestureTable() {
		};

		Array<GestureSlotData> m_gestureSlots; // 0x10 (16)
		RefArray<GestureUnlockAsset> m_selectableUnlocks; // 0x18 (24)
	}; // 0x20 (32)
}


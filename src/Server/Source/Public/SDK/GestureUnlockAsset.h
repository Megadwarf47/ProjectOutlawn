///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/UnlockAsset.h>

namespace fb {
	class GestureUnlockAsset : public UnlockAsset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("GestureUnlockAsset"); }
		virtual ~GestureUnlockAsset() override {}
		GestureUnlockAsset() {
			m_gestureIndex = 0;
		};

		u32 m_gestureIndex; // 0x40 (64)
	}; // 0x48 (72)
}


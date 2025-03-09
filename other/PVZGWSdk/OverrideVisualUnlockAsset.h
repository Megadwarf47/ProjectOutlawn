///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/PVZVisualUnlockAsset.h>
#include <fb/VisualUnlockPair.h>

namespace fb {
	class OverrideVisualUnlockAsset : public PVZVisualUnlockAsset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("OverrideVisualUnlockAsset"); }
		virtual ~OverrideVisualUnlockAsset() override {}
		OverrideVisualUnlockAsset() {
		};

		Array<VisualUnlockPair> m_overrideVisualUnlocks; // 0xA0 (160)
	}; // 0xA8 (168)
}


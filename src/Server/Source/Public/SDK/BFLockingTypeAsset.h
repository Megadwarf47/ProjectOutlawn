///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/LockingTypeAsset.h>
#include <fb/String.h>

namespace fb {
	class BFLockingTypeAsset : public LockingTypeAsset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BFLockingTypeAsset"); }
		virtual ~BFLockingTypeAsset() override {}
		BFLockingTypeAsset() {
			m_lockingBlinkInterval = 0.175f;
			m_lockingQuadSpacingStart = 0;
			m_lockedQuadSpacing = 0;
		};

		String m_lockingIconName; // 0x18 (24)
		float m_lockingBlinkInterval; // 0x20 (32)
		String m_targetIconName; // 0x28 (40)
		String m_chevronIconName; // 0x30 (48)
		u32 m_lockingQuadSpacingStart; // 0x38 (56)
		u32 m_lockedQuadSpacing; // 0x3C (60)
		String m_lockedText; // 0x40 (64)
		String m_lockedGuidingText; // 0x48 (72)
		String m_notLockedGuidingText; // 0x50 (80)
	}; // 0x58 (88)
}


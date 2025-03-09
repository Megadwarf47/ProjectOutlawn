///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/SpatialEntityData.h>

namespace fb {
	class SoundAsset;
}

namespace fb {
	class InteractionEntityData : public SpatialEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("InteractionEntityData"); }
		virtual ~InteractionEntityData() override {}
		InteractionEntityData() {
			m_useWithinRadius = 0.3f;
			m_useWithinAngle = 360.f;
			m_maxUses = 0;
			m_displayWithinRadius = 25.f;
			m_testIfOccluded = false;
			m_allowInteractionViaRemoteEntry = true;
			m_useDisplayWithinRadius = false;
			m_enabled = true;
		};

		float m_useWithinRadius; // 0x60 (96)
		float m_useWithinAngle; // 0x64 (100)
		u32 m_maxUses; // 0x68 (104)
		float m_displayWithinRadius; // 0x6C (108)
		CtrRef<SoundAsset> m_preInteractionSoundEffect; // 0x70 (112)
		bool m_testIfOccluded; // 0x78 (120)
		bool m_allowInteractionViaRemoteEntry; // 0x79 (121)
		bool m_useDisplayWithinRadius; // 0x7A (122)
		bool m_enabled; // 0x7B (123)
	}; // 0x80 (128)
}


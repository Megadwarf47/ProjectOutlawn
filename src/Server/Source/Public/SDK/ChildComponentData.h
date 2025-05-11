///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BoneComponentData.h>
#include <fb/CtrRef.h>
#include <fb/LinearTransform.h>
#include <fb/VehicleHealthZoneData.h>

namespace fb {
	class AlignmentData;
	class MovingBodyData;
	class SoundAsset;
}

namespace fb {
	class ChildComponentData : public BoneComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ChildComponentData"); }
		virtual ~ChildComponentData() override {}
		ChildComponentData() {
			m_soundEffectStartRpm = 0.1f;
			m_soundEffectStopRpm = 0.1f;
			m_worldSpacePositionLock = false;
			m_enableAlignToCamera = false;
		};

		LinearTransform m_alignTransform; // 0x70 (112)
		CtrRef<SoundAsset> m_soundEffect; // 0xB0 (176)
		CtrRef<MovingBodyData> m_movingBody; // 0xB8 (184)
		VehicleHealthZoneData m_healthZone; // 0xC0 (192)
		float m_soundEffectStartRpm; // 0xE0 (224)
		float m_soundEffectStopRpm; // 0xE4 (228)
		CtrRef<AlignmentData> m_alignmentSettings; // 0xE8 (232)
		bool m_worldSpacePositionLock; // 0xF0 (240)
		bool m_enableAlignToCamera; // 0xF1 (241)
	}; // 0x100 (256)
}


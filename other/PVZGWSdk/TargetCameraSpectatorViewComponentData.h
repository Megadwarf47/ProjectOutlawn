///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/SpectatorViewComponentData.h>

namespace fb {
	class ChaseCameraData;
}

namespace fb {
	class TargetCameraSpectatorViewComponentData : public SpectatorViewComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("TargetCameraSpectatorViewComponentData"); }
		virtual ~TargetCameraSpectatorViewComponentData() override {}
		TargetCameraSpectatorViewComponentData() {
			m_allowFirstPersonDeath = false;
		};

		CtrRef<ChaseCameraData> m_thirdPersonCamera; // 0x10 (16)
		CtrRef<ChaseCameraData> m_thirdPersonCharacterCamera; // 0x18 (24)
		CtrRef<ChaseCameraData> m_thirdPersonJetCamera; // 0x20 (32)
		bool m_allowFirstPersonDeath; // 0x28 (40)
	}; // 0x30 (48)
}


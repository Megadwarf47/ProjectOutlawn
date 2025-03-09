///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/GameObjectData.h>
#include <fb/LocalPlayerViewId.h>
#include <fb/Vec3.h>

namespace fb {
	class ViewFxData;
}

namespace fb {
	class CameraData : public GameObjectData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CameraData"); }
		virtual ~CameraData() override {}
		CameraData() {
			m_preFadeTime = 0.f;
			m_fadeTime = 0.f;
			m_fadeWaitTime = 0.f;
			m_nearPlane = -1.f;
			m_shadowViewDistanceScale = 1.f;
			m_soundOcclusion = 0.f;
			m_soundListenerRadius = 0.5f;
			m_soundListenerFov = 55.f;
			m_shakeFactor = 1.f;
			m_viewId = LocalPlayerViewId::LocalPlayerViewId_RootView;
			m_stayFadedWhileStreaming = false;
		};

		float m_preFadeTime; // 0x18 (24)
		Vec3 m_occlusionRayOffset; // 0x20 (32)
		float m_fadeTime; // 0x30 (48)
		float m_fadeWaitTime; // 0x34 (52)
		CtrRef<ViewFxData> m_viewFx; // 0x38 (56)
		float m_nearPlane; // 0x40 (64)
		float m_shadowViewDistanceScale; // 0x44 (68)
		float m_soundOcclusion; // 0x48 (72)
		float m_soundListenerRadius; // 0x4C (76)
		float m_soundListenerFov; // 0x50 (80)
		float m_shakeFactor; // 0x54 (84)
		LocalPlayerViewId m_viewId; // 0x58 (88)
		bool m_stayFadedWhileStreaming; // 0x5C (92)
	}; // 0x60 (96)
}


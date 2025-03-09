///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/Realm.h>
#include <fb/ScreenEffectFrameType.h>
#include <fb/Vec4.h>
#include <fb/VisualEnvironmentComponentData.h>

namespace fb {
	class SurfaceShaderBaseAsset;
}

namespace fb {
	class ScreenEffectComponentData : public VisualEnvironmentComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ScreenEffectComponentData"); }
		virtual ~ScreenEffectComponentData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		ScreenEffectComponentData() {
			m_realm = Realm::Realm_Client;
			m_frameType = ScreenEffectFrameType::ScreenEffectFrameType_FullFrame;
			m_frameWidth = 0.5f;
			m_outerFrameOpacity = 1.f;
			m_innerFrameOpacity = 1.f;
			m_angle = 0.f;
		};

		Vec4 m_screenEffectParams; // 0x80 (128)
		Realm m_realm; // 0x90 (144)
		ScreenEffectFrameType m_frameType; // 0x94 (148)
		CtrRef<SurfaceShaderBaseAsset> m_shader; // 0x98 (152)
		float m_frameWidth; // 0xA0 (160)
		float m_outerFrameOpacity; // 0xA4 (164)
		float m_innerFrameOpacity; // 0xA8 (168)
		float m_angle; // 0xAC (172)
	}; // 0xB0 (176)
}


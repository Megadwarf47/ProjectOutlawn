///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/CtrRef.h>
#include <fb/LocalPlayerViewId.h>
#include <fb/LogicReferenceObjectData.h>
#include <fb/UIScreenProjectionMode.h>
#include <fb/UIScreenRenderingPass.h>

namespace fb {
	class UICppScreenData;
}

namespace fb {
	class UIScreenRenderEntityData : public LogicReferenceObjectData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIScreenRenderEntityData"); }
		virtual ~UIScreenRenderEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		UIScreenRenderEntityData() {
			m_scale = 0.001f;
			m_projectionMode = UIScreenProjectionMode::UIScreenProjectionMode_Default;
			m_renderPass = UIScreenRenderingPass::UIScreenRenderingPass_BelowFlash;
			m_updateOrder = 0;
			m_viewId = LocalPlayerViewId::LocalPlayerViewId_RootView;
			m_useGameViewProjection = false;
			m_enableDepthCulling = false;
			m_centerScreen = false;
		};

		CtrRef<UICppScreenData> m_screenData; // 0x90 (144)
		float m_scale; // 0x98 (152)
		UIScreenProjectionMode m_projectionMode; // 0x9C (156)
		UIScreenRenderingPass m_renderPass; // 0xA0 (160)
		s32 m_updateOrder; // 0xA4 (164)
		LocalPlayerViewId m_viewId; // 0xA8 (168)
		Array<String> m_inputEvents; // 0xB0 (176)
		Array<String> m_outputEvents; // 0xB8 (184)
		Array<String> m_inputFloatProperties; // 0xC0 (192)
		Array<String> m_inputIntProperties; // 0xC8 (200)
		Array<String> m_inputBoolProperties; // 0xD0 (208)
		Array<String> m_inputStringProperties; // 0xD8 (216)
		Array<String> m_inputTransformProperties; // 0xE0 (224)
		Array<String> m_inputVec3Properties; // 0xE8 (232)
		Array<String> m_inputVec4Properties; // 0xF0 (240)
		bool m_useGameViewProjection; // 0xF8 (248)
		bool m_enableDepthCulling; // 0xF9 (249)
		bool m_centerScreen; // 0xFA (250)
	}; // 0x100 (256)
}


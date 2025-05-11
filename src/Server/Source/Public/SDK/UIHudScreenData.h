///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BFUICppScreenData.h>
#include <fb/HudCameraShakeParams.h>

namespace fb {
	class UIHudScreenData : public BFUICppScreenData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIHudScreenData"); }
		virtual ~UIHudScreenData() override {}
		UIHudScreenData() {
		};

		HudCameraShakeParams m_hudCameraShakeParams; // 0x30 (48)
	}; // 0x90 (144)
}


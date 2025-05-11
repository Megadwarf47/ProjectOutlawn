///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/WeaponModifierBase.h>

namespace fb {
	class WeaponZoomModifier : public WeaponModifierBase {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WeaponZoomModifier"); }
		virtual ~WeaponZoomModifier() override {}
		WeaponZoomModifier() {
			m_zoomRenderFov = 10.f;
		};

		float m_zoomRenderFov; // 0x18 (24)
	}; // 0x20 (32)
}


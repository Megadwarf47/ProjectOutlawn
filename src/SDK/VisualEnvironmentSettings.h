///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>

namespace fb {
	class VisualEnvironmentSettings : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VisualEnvironmentSettings"); }
		virtual ~VisualEnvironmentSettings() override {}
		VisualEnvironmentSettings() {
			m_sunRotationX = 0.f;
			m_sunRotationY = 0.f;
			m_drawStats = 0;
			m_drawOnlyVisibleStats = false;
		};

		float m_sunRotationX; // 0x10 (16)
		float m_sunRotationY; // 0x14 (20)
		s32 m_drawStats; // 0x18 (24)
		bool m_drawOnlyVisibleStats; // 0x1C (28)
	}; // 0x20 (32)
}


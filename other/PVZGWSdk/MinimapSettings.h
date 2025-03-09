///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/SystemSettings.h>

namespace fb {
	class MinimapSettings : public SystemSettings {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MinimapSettings"); }
		virtual ~MinimapSettings() override {}
		MinimapSettings() {
			m_mipBias = 1.f;
			m_tileFadeInSpeed = 1.f;
			m_tileFadeOutSpeed = 1.f;
			m_useSparseMipRange = false;
		};

		float m_mipBias; // 0x20 (32)
		float m_tileFadeInSpeed; // 0x24 (36)
		float m_tileFadeOutSpeed; // 0x28 (40)
		bool m_useSparseMipRange; // 0x2C (44)
	}; // 0x30 (48)
}


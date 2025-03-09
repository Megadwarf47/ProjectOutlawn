///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/PlatformScalableInt.h>
#include <fb/SystemSettings.h>

namespace fb {
	class EmblemSettings : public SystemSettings {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("EmblemSettings"); }
		virtual ~EmblemSettings() override {}
		EmblemSettings() {
			m_emblemSize = PlatformScalableInt(256, 128, 128, 256, 256);
			m_enable = true;
		};

		PlatformScalableInt m_emblemSize; // 0x20 (32)
		bool m_enable; // 0x34 (52)
	}; // 0x38 (56)
}


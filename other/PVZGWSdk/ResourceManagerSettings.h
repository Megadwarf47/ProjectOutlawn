///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/SystemSettings.h>

namespace fb {
	class ResourceManagerSettings : public SystemSettings {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ResourceManagerSettings"); }
		virtual ~ResourceManagerSettings() override {}
		ResourceManagerSettings() {
			m_casBundleReadBufferSizeKb = 256;
			m_casBundleDecompressBufferSizeKb = 128;
			m_casBundleDecompressBufferCount = 4;
			m_bundleProfilingEnable = false;
			m_spuDecompressEnable = true;
		};

		s32 m_casBundleReadBufferSizeKb; // 0x20 (32)
		s32 m_casBundleDecompressBufferSizeKb; // 0x24 (36)
		s32 m_casBundleDecompressBufferCount; // 0x28 (40)
		bool m_bundleProfilingEnable; // 0x2C (44)
		bool m_spuDecompressEnable; // 0x2D (45)
	}; // 0x30 (48)
}


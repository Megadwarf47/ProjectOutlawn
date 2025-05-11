///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/BundleHeapInfo.h>
#include <fb/CtrRef.h>
#include <fb/ReferenceObjectData.h>
#include <fb/String.h>

namespace fb {
	class SubWorldInclusionSettings;
}

namespace fb {
	class SubWorldReferenceObjectData : public ReferenceObjectData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SubWorldReferenceObjectData"); }
		virtual ~SubWorldReferenceObjectData() override {}
		SubWorldReferenceObjectData() {
			m_autoLoad = false;
			m_isWin32SubLevel = true;
			m_isXenonSubLevel = true;
			m_isPs3SubLevel = true;
			m_isGen4aSubLevel = true;
			m_isGen4bSubLevel = true;

			m_castSunShadowEnable = false;
		};

		String m_bundleName; // 0x80 (128)
		Array<String> m_preloadedBundleNames; // 0x88 (136)
		BundleHeapInfo m_bundleHeap; // 0x90 (144)
		CtrRef<SubWorldInclusionSettings> m_inclusionSettings; // 0xA0 (160)
		bool m_autoLoad; // 0xA8 (168)
		bool m_isWin32SubLevel; // 0xA9 (169)
		bool m_isXenonSubLevel; // 0xAA (170)
		bool m_isPs3SubLevel; // 0xAB (171)
		bool m_isGen4aSubLevel; // 0xAC (172)
		bool m_isGen4bSubLevel; // 0xAD (173)
	}; // 0xB0 (176)
}


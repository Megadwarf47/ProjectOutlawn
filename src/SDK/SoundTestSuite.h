///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>
#include <fb/RefArray.h>
#include <fb/String.h>

namespace fb {
	class SoundAsset;
	class SoundTestSpec;
}

namespace fb {
	class SoundTestSuite : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SoundTestSuite"); }
		virtual ~SoundTestSuite() override {}
		SoundTestSuite() {
			m_profileTests = false;
		};

		String m_name; // 0x10 (16)
		RefArray<SoundAsset> m_assets; // 0x18 (24)
		RefArray<SoundTestSpec> m_tests; // 0x20 (32)
		bool m_profileTests; // 0x28 (40)
	}; // 0x30 (48)
}


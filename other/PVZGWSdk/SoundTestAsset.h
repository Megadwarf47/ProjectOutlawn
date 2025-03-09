///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>
#include <fb/RefArray.h>

namespace fb {
	class SoundTestSpec;
	class SoundTestSuite;
	class SoundTestTaskSpec;
}

namespace fb {
	class SoundTestAsset : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SoundTestAsset"); }
		virtual ~SoundTestAsset() override {}
		SoundTestAsset() {
		};

		RefArray<SoundTestTaskSpec> m_taskSpecs; // 0x18 (24)
		RefArray<SoundTestSpec> m_testSpecs; // 0x20 (32)
		RefArray<SoundTestSuite> m_suites; // 0x28 (40)
	}; // 0x30 (48)
}


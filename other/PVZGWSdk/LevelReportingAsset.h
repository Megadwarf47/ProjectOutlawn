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
	class LevelDescriptionAsset;
}

namespace fb {
	class LevelReportingAsset : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("LevelReportingAsset"); }
		virtual ~LevelReportingAsset() override {}
		LevelReportingAsset() {
		};

		RefArray<LevelDescriptionAsset> m_builtLevels; // 0x18 (24)
	}; // 0x20 (32)
}


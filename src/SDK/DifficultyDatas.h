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
	class DifficultyData;
}

namespace fb {
	class DifficultyDatas : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DifficultyDatas"); }
		virtual ~DifficultyDatas() override {}
		DifficultyDatas() {
		};

		RefArray<DifficultyData> m_difficulties; // 0x18 (24)
	}; // 0x20 (32)
}


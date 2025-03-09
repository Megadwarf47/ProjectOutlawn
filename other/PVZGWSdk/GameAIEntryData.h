///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>
#include <fb/CtrRef.h>

namespace fb {
	class GameAIEntryData;
}

namespace fb {
	class GameAIEntryData : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("GameAIEntryData"); }
		virtual ~GameAIEntryData() override {}
		GameAIEntryData() {
		};

		CtrRef<GameAIEntryData> m_ai2Data; // 0x18 (24)
	}; // 0x20 (32)
}


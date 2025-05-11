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
	class GameDataContainer;
}

namespace fb {
	class GameDataContainerAsset : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("GameDataContainerAsset"); }
		virtual ~GameDataContainerAsset() override {}
		GameDataContainerAsset() {
		};

		CtrRef<GameDataContainer> m_data; // 0x18 (24)
	}; // 0x20 (32)
}


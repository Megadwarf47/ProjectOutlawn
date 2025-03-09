///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/Asset.h>
#include <fb/GameTipData.h>

namespace fb {
	class GameTipAsset : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("GameTipAsset"); }
		virtual ~GameTipAsset() override {}
		GameTipAsset() {
		};

		Array<GameTipData> m_tips; // 0x18 (24)
	}; // 0x20 (32)
}


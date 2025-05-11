///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/String.h>
#include <fb/UnlockAssetBase.h>

namespace fb {
	class BattlepackData : public UnlockAssetBase {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BattlepackData"); }
		virtual ~BattlepackData() override {}
		BattlepackData() {
		};

		String m_key; // 0x40 (64)
	}; // 0x48 (72)
}


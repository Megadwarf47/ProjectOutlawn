///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/Asset.h>
#include <fb/BasicUnlockInfo.h>

namespace fb {
	class StaticUnlockList : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("StaticUnlockList"); }
		virtual ~StaticUnlockList() override {}
		StaticUnlockList() {
		};

		Array<BasicUnlockInfo> m_unlockInfos; // 0x18 (24)
	}; // 0x20 (32)
}


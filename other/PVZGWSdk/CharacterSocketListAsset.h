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
	class SocketData;
}

namespace fb {
	class CharacterSocketListAsset : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CharacterSocketListAsset"); }
		virtual ~CharacterSocketListAsset() override {}
		CharacterSocketListAsset() {
		};

		RefArray<SocketData> m_gameplaySockets; // 0x18 (24)
	}; // 0x20 (32)
}


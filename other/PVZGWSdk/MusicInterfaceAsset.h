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
	class MusicEventData;
	class MusicParameterData;
}

namespace fb {
	class MusicInterfaceAsset : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MusicInterfaceAsset"); }
		virtual ~MusicInterfaceAsset() override {}
		MusicInterfaceAsset() {
		};

		RefArray<MusicEventData> m_events; // 0x18 (24)
		RefArray<MusicParameterData> m_parameters; // 0x20 (32)
	}; // 0x28 (40)
}


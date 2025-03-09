///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GameDataContainer.h>

namespace fb {
	class DataBusPeer : public GameDataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DataBusPeer"); }
		virtual ~DataBusPeer() override {}
		DataBusPeer() {
			m_flags = 0;
		};

		u32 m_flags; // 0x10 (16)
	}; // 0x18 (24)
}

